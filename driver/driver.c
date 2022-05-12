#include <driver/driver.h>
#include <stdio.h>
fhhc_status driver_entry(const char* input_file, const char* output_file,const char* extra_parameters)
{
    printf("Compiler Driver:input file %s, output file %s\n",input_file,output_file);
    if(extra_parameters!=nullptr) {
        printf("Extra parameters:%s\n",extra_parameters);
    }
    return STATUS_SUCCESS;
}
