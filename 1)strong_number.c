#include <stdio.h>
int fact(int rem)
{
    int fact=1;
    for(int i=rem;i>0;i--)
    {
    fact=fact*i;
    }
    return fact;
}
int main() {
    int sum=0,n,rem,k;
    scanf("%d",&n);
    k=n;
     while(n>0)
    {
    rem=n%10;
    sum+=fact(rem);
    n=n/10;
    }
    if(sum==k)
    printf("%d is strong number",k);
    else
    printf("%dis not a strong number",k);
}
