#include <stdio.h>
#include <unistd.h>

int main()
{
    for(int i=0; i<=100; i+=10) {
        fprintf(stdout, "%d\n", i);
        usleep(200000);
    }
}
