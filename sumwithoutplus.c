#include<stdio.h>
int main()
{
    int sum ,carry,a,b;
    printf("enter the no:");
    scanf("%d %d",&a,&b);
    while(b!=0)
    {
        sum=a^b;
        carry=(a&b)<<1;
        a=sum;
        b=carry;
    }
    printf("sum is %d",sum);
    return 0;
}