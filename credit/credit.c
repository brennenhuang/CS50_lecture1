#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
 
long long calaulate_pow(int ,int );

int main()
{
    bool flag_Amex,flag_MasterCard,flag_Visa,Flag;
    int c=0;
    long long credit,temp;
    int sum_a=0;
    int sum_b=0;
    do{
    printf("Enter your credit card\n");
    scanf("%lli",&credit);
    }while(credit<=0);
    temp=credit;
    while(temp >= 100)
    {
        temp/=10;
        c++;
    }
    c=c+2;
    int a[c],b[c];
    //printf("there is %d number\n",c);
   
    for(int j = 0; j < c ; j++ )
    {
        a[j]=((long long)(credit/calaulate_pow(10,j)))%10;   //put the each credit numeber in a vector
        printf("%i",a[j]);
    }
    for(int i = 1; i < c; i+=2)
    {
        b[i]=a[i]*2;
        if(b[i] >= 10)
        {
            b[i]=b[i]/10+b[i]%10;
        }
        sum_a=sum_a+b[i];
    }
    printf("step0:%i\n",sum_a);
    for(int k = 0; k < c; k+=2 )
    {
        sum_b=sum_b+a[k];
    }
    printf("step1:%i\n",sum_a+sum_b);
    if(!((sum_a+sum_b)%10))
    {
        Flag=true;
    }
    
    if((temp==34||temp==37)&&c==15)
    {
        flag_Amex=true;
        if(Flag)
            printf("Amex");
        else
            printf("invalid");
    }
    else if((temp==51||temp==52||temp==53||temp==54||temp==55)&&c==16)
    {
        flag_MasterCard=true;
        if(Flag)
            printf("MasterCard");
        else
            printf("invalid");
    }
    else if((temp/10)==4&&(c==13||c==16))
    {
        flag_Visa=true;
        if(Flag)
            printf("Visa");
        else
            printf("invalid");
    }
    else
        printf("invalid");

}

long long calaulate_pow(int a,int b)
{
    long long sum=1;
    while(b >= 1)
    {
        sum=a*sum;
        b--;
    }
    
    return sum;
}


