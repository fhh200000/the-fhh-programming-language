#include <common/automata.h>
dfastatus naive_dfa(transrule* instruct,int rulelength,int inputlength,char* in)
{
    char* pointer = in;
    dfastatus current_status = 0;
    while(pointer<in+inputlength) {
        int i=-1;
        while(instruct[++i].curr!=current_status && i<rulelength);
        i--;
        while(instruct[++i].input!=*pointer && i<rulelength);
        if(i>=rulelength) {
            return REJECTED;
        }
        if(instruct[i].input==*pointer&&instruct[i].curr==current_status) {
            current_status = instruct[i].next;
            pointer++;
        }
        else {
            return REJECTED;
        }
    }
    if(current_status&ACCEPTED) {
        return current_status&(~ACCEPTED);//去除accepted标记
    }
    else
        return REJECTED;
}
