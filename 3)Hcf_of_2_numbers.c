#include <stdio.h>
int main() {
    int a,b,m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    if(m<n)
    {
    a=m;
    b=n;
    }
    else
    {
    b=m;
    a=n;
    }
    if(a<b)
    {
        if(b%a==0)
        printf("%d is hcf",a);
        else
        {
            for(int i=a;i>0;i--)
            {
                if(b%i==0 && a%i==0)
                {
                printf("%d is the hcf",i);
                break;
                }
            }
        }
    }
}
