#include<stdio.h>

int main()
{
    char c[501];

    gets(c);

 if (strlen(c) <= 140)
     printf("TWEET\n");
 else
    printf("MUTE\n");


    return 0;
}
