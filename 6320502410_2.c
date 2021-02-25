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
    for(i=1; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(A[j]==i)
            {
                c[i]=c[i]+B[j];
            }
        }
    }
    int max[n];
    max[0]=c[0];
    i=0;
    for(j=0; j<n; j++)
    {
        if(max[j]<c[j])
        {
            max[i]=j+1;
        }
        else if(max[j]==c[j])
        {
            i++;
            max[i]=j+1;
        }
    }
    for(j=0; j<i; j++)
    {
        printf("%d",max[j]);
    }
}
