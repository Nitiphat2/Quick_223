#include<stdio.h>
int main()
{
    unsigned long long int x;
    scanf("%llu",&x);
    int i,j=0,k[x],l,o[x],a=0,b=0,z,v=0,n=0,s;
    for(i=2; i<=x; i++)
    {
        if(x%i==0)
        {
            k[j]=i;
            a=0;
            for(l=2; l<=k[j]; l++)
            {
                if((k[j]%l==0)&& a==0 && l==k[j])
                {
                    o[b]=l;
                    b++;
                }
                else if(k[j]%l==0)
                {
                    a++;
                }
            }
            j++;
        }
    }
    for(i=0; i<j; i++)
    {
        s=0;
        v=0;
        a=k[i];
        while(a>1&&z<b)
        {
            if(a%o[z]==0)
            {
                a=a/o[z];
                v++;
                if(v==1)
                {
                    s++;
                }
                else
                {
                    s=0;
                }
            }
            else
            {
                v=0;
                z++;
            }
        }
        z=0;
        if(s==b)
        {
            printf("%d",k[i]);
            while(x>1)
            {
                x=x/k[i];
                z++;
            }
            printf(" %d",z);
            break;
        }
    }
}
