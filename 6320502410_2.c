#include<stdio.h>
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    int A[n],B[n],c[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
        scanf("%d",&B[i]);
        c[i]=0;
    }
    for(i=0; i<n; i++)
    {
        if(i==A[i])
        {
            if((B[i]>0)&&(B[i]<=5))
            {
                c[i]=c[i]+B[i];
            }
        }
    }
    int max[n];
    max[0]=c[0];
    for(i=0; i<n; i++)
    {
        if(max[j] < c[i])
        {
            max[j] =c[i]+1;
        }
    }
    printf("%d",max[0]);

}
