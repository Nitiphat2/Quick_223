#include<stdio.h>
int main()
{
    int now,end,z,x;
    int mounth[]={31,29,31,30,31,30,31,31,30,31,30,31,31};
    scanf("%d",&now);
    scanf("%d",&end);
    int A[3],B[3],i,j=0;
    for(i=0; i<3; i++)
    {
        if(i==2)
        {
            A[i] = now / 10000;
            B[i] = end / 10000;
            if((A[i] > z)||(B[i] > x))
            {
                j=1;
            }
        }
        else if(i==1)
        {
            A[i] = (now % 10000)/100;
            B[i] = (end % 10000)/100;
            if((A[i]>=0&&A[i]<=12)&&(B[i]>=0&&B[i]<=12))
            {
                z = mounth[A[i]-1];
                x = mounth[B[i]-1];
            }
            else
            {
                j=1;
            }
        }
        else
        {
            A[i] = now % 100;
            B[i] = end % 100;
        }
    }
    int c;
    if(j==0)
    {
        if(B[0]-A[0] == 0)
        {
            if(B[1]-A[1] == 0)
            {
                c = B[2]-A[2];
                if(c>=0)
                {
                    printf("B");
                }
                else
                {
                    printf("L");
                }
            }
            else if(B[1]-A[1] > 0)
            {
                printf("B");
            }
            else
            {
                printf("L");
            }
        }
        else if(B[0]-A[0] > 0)
        {
            printf("B");
        }
        else
        {
            printf("L");
        }
    }
    else
    {
        printf("W");
    }


}
