#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+j>=n-1)
                {
                    printf("*");
                }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}