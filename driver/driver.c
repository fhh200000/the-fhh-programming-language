#include <driver/driver.h>
#include <stdio.h>
#include <stdlib.h>
#include <grammar/grammar.h>
fhhc_status driver_entry(const char* input_file, const char* output_file,const char* extra_parameters)
{
    if(extra_parameters!=nullptr) {
        printf("Extra parameters:%s\n",extra_parameters);
    }
    FILE* input = fopen(input_file,"r");
    if(input_file==nullptr) {
        printf("Error: Can't open input file.\n");
        return STATUS_ERROR;
    }
    FILE* output = fopen(output_file,"wb");
    if(output==nullptr) {
        printf("Error: Can't open output file.\n");
        fclose(input);
        return STATUS_ERROR;
    }
    fseek(input, 0, SEEK_END);
    U64 input_length = ftell(input);
    char* input_buffer = malloc(input_length+1);
    fseek(input,0,SEEK_SET);
    fread(input_buffer,input_length,1,input);
    input_buffer[input_length]='\0';
    fclose(input);
    fhhc_status ret = grammar_entry(input_buffer,input_length,output) ;
    free(input_buffer);
    return ret;
}
