#include<stdio.h>

int main()
{
    int n,a;
    scanf("%d %d",&n,&a);
    int b=1;
    for(int i=1;i<=n;i++)
    {
        if(b<a)
            b=b*2;
        else
        {
            b=b+a;
        }
    }
    printf("%d",b);
}
