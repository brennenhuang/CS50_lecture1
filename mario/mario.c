#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
    printf("enter your number:");
    scanf("%i",&n);
    }while(n>23||n<8);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");

    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = n-i; j > 0; j--)    //printf space
        {
            printf(" ");
        }
        for(int k =1; k <= i ;k++)    //printf hash
        {
            printf("#");
        }
        printf("\n");    //printf new line
    }
}
