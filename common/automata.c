#include <common/automata.h>
status naive_dfa(transrule* instruct,int rulelength,int inputlength,char* in)
{
    char* pointer = in;
    status current_status = 0;
    status previous_status = 0;
    while(pointer<in+inputlength)
    {
        int i=-1;
        //跳转到与当前状态匹配的表项入口
        while(instruct[++i].curr!=current_status && i<rulelength);
        i--;
        //跳转到与当前状态相匹配的字符
        while(instruct[++i].input!=*pointer && i<rulelength);
        //判断是否越界
        if(i>=rulelength)
            return REJECTED;
        //判断当前项目是否匹配
        if(instruct[i].input==*pointer&&instruct[i].curr==current_status)
        {
            current_status = instruct[i].next;
            pointer++;
        }
        else //不匹配
        {
            return REJECTED;
        }
    }
    if(current_status&ACCEPTED)
        return current_status&(~ACCEPTED);//去除accepted标记
    else
        return REJECTED;
}
