#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n=0.0;
    int count_q=0,count_d=0,count_n=0,count_p=0;
    do{
    printf("hi,how much change is owed\n");
    scanf("%f",&n);
    }while(n<0);
    int dollar = (int)n;
    if(dollar == n)
    {
        printf("give you %i dollars\n",dollar);

    }
    else
    {
        int ans=(n-dollar)*100;
        while(ans >= 25)
        {
            count_q++;
            ans=ans-25;
        }
        while(ans >= 10)
        {
            count_d++;
            ans=ans-10;
        }
        while(ans >= 5)
        {
            count_n++;
            ans=ans-5;
        }
        while(ans >=1)
        {
            count_p++;
            ans=ans-1;
        }
        printf("%i\n",count_q+count_d+count_n+count_p);
    }
}
