#include <stdio.h>
#include <unistd.h>

int main()
{
    const int delay = 200000;
    const int increment = 5;

    fprintf(stdout, "0");
    fflush(stdout);

    for(int i=0; i<=100; i+=increment) {

        usleep(delay);
        fprintf(stdout, "%d", i);
        fflush(stdout);

    }
    
    return(0);
}

