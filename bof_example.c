//gcc -o bof bof.c -m32 -fno-stack-protector -mpreferred-stack-boundary=2 -z execstack -no-pie

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void win(void)
{
    system("/bin/sh");
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("<INPUT ERROR> your input : ./bof [string]\n");
        return -1;
    }
    int a = 0x11111111;
    int b = 0x22222222;
    char c[4];
    strcpy(c, argv[1]);
    printf("your input : %s\n", c);
    return 0;
}