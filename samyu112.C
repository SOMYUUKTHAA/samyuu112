#include<stdio.h>
#define MAX_SIZE 1000
void main()
{
    int N[MAX_SIZE],K[MAX_SIZE],n;
    int i,j;
    printf("ENTER THE ARRAY SIZE");
    scanf("%d",&n);
    printf("ENTER VALUE OF N");
    for(i=0;i<n;i++)
    {
        scanf("%d",&N[i]);
    }
    printf("ENTER VALUE OF K");
    for(j=0;j<n;j++)
    {
        scanf("%d",&K[j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(N[i]==K[j])
            {
                printf("K exists in N");
            }
        }
    }
}

