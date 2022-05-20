#include <driver/driver.h>
#include <stdio.h>
fhhc_status driver_entry(const char* input_file, const char* output_file,const char* extra_parameters)
{
    printf("Compiler Driver:input file %s, output file %s\n",input_file,output_file);
    if(extra_parameters!=nullptr) {
        printf("Extra parameters:%s\n",extra_parameters);
    }
    FILE* input = fopen(input_file,"r");
    if(input_file==nullptr) {
        printf("Error: Can't open input file.\n");
        return STATUS_ERROR;
    }
    FILE* output = fopen(input_file,"wb");
    if(output==nullptr) {
        printf("Error: Can't open output file.\n");
        fclose(input);
        return STATUS_ERROR;
    }

    return STATUS_SUCCESS;
}
