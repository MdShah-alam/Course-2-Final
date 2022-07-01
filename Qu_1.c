#include<stdio.h>

int main()
{
    for(int i=1;i<=100;i++)
    {
        int a;
        scanf("%d",&a);
        if(a==42)
            return 0;
        printf("%d\n",a);
    }
    return 0;
}
