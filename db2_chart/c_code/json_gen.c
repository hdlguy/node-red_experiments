#include <stdio.h>
#include <stdint.h>
//#include <unistd.h>
#include <stdlib.h>
//#include <sys/mman.h>
//#include <fcntl.h>
//#include <string.h>
#include <math.h>

#define MAX_SAMPLES 4096

int main(int argc, char** argv)
{
    uint32_t num_vals = atoi(argv[1]);

    const float Gnoise = 1000.0;
    const float Gsine  = 10000.0;

    // compute the data
    int32_t data[MAX_SAMPLES];
    for(uint32_t i=0; i<num_vals; i++) {
        data[i] = roundf( Gnoise*2.0*rand()/RAND_MAX - 1.0 + Gsine*sinf(2.0*M_PI*i/num_vals) );
    }


    // write the json text to stdout
    //fprintf(stdout, "[{\n");
    //fprintf(stdout, "\"series\": [\"A\"],\n");
    //fprintf(stdout, "\"data\": [\n");
    fprintf(stdout, "[\n");
    for(uint32_t i=0; i<num_vals; i++) {
        fprintf(stdout, "    {\"x\": %d, \"y\": %d }", i, data[i]);
        if (i == (num_vals-1)) {
            fprintf(stdout, "\n");
        } else {
            fprintf(stdout, ",\n");
        }
    }
    fprintf(stdout, "]\n");
    //fprintf(stdout, "],\n");
    //fprintf(stdout, "\"labels\": [\"\"]\n");
    //fprintf(stdout, "}]\n");


    return 0;
}


