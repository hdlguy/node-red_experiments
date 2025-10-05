#include <stdio.h>
#include <unistd.h>

int main()
{
    for(int i=0; i<=100; i+=20) {
        fprintf(stdout, "%d\n", i);
        fflush(stdout);
        usleep(500000);
    }
    
    return(0);
}
