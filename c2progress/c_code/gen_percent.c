#include <stdio.h>
#include <unistd.h>

int main()
{
    const int delay = 200000;
    const int increment = 5;

    for(int i=0; i<=100; i+=increment) {

        fprintf(stdout, "%d", i);
        fflush(stdout);
        usleep(delay);

    }
    
    return(0);
}

