#include<stdio.h>
int main()
{
    int n,t,r,s=0,c=0;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        c++;
        t=t/10;
    }
    while(t!=0)
    {
        r=t%10;
        s=s+r*r*r;
        t=t/10;
    }
    if(s==n)
    printf("amstrong number");
    else
    printf("not amstrong number");
}    
    
    
    
    
    
    
    
    
    
    



