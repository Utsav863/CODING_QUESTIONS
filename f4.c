#include<stdio.h>
a=3;
void n(x)
{
    x=x*a;
    print(x);
} 
void m(y)
{
    a=1;
    a=y-a;
    n(a);
    print(a);
}
void main()
{
    m(a);
}