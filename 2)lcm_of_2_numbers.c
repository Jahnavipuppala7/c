#include <stdio.h>
int main() {
    int a,b,num;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
    for(int i=1;i<1000;i++)
    {
     num=a*i;
     if(num%b==0)
     {
         printf("%d is the lcm",num);
         break;
     }
    }
    }
    else
    {
        for(int i=1;i<1000;i++)
    {
     num=b*i;
     if(num%a==0)
     {
         printf("%d is the lcm",num);
         break;
     }
    }
    }
    
}
