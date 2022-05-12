#include <main.h>
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <driver/driver.h>
const char* opt_string = "i:o:p:I:O:P:";
extern char* optarg;
extern int opterr;
void print_usage(void)
{
    printf("Usage: fhhc -I <input file> -O <output file> [-P <parameters>]\n");
}
int main(int argc,char* argv[])
{
    const char *input_file=nullptr,*output_file=nullptr,*extra_parameters=nullptr;
    int o;
    opterr = 0;
    //parse parameter.
    while ((o = getopt(argc, argv, opt_string)) != -1) {
        switch(o) {
            case 'i':
            case 'I': {
                input_file = optarg;
                break;
            }
            case 'o':
            case 'O': {
                output_file = optarg;
                break;
            }
            case 'p':
            case 'P': {
                extra_parameters = optarg;
                break;
            }
            case '?': {
                print_usage();
                return EXIT_FAILURE;
                break;
            }
        }


    }
    if(input_file==nullptr||output_file==nullptr) {
        print_usage();
        return EXIT_FAILURE;
    }
    if(driver_entry(input_file,output_file,extra_parameters)==STATUS_SUCCESS) {
        return EXIT_SUCCESS;
    }
    else {
        return EXIT_FAILURE;
    }
}
