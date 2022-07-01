#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ar[100];

    for(int i=0; i<a; i++)
    {
        scanf("%d",&ar[i]);
    }

    for(int i=0; i<a; i++)
    {
        for(int j=i+1; j<a; j++)
        {
            if(ar[i]>ar[j])
            {
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    int sum=0;
    for(int i=0; i<b; i++)
    {
        if(ar[i]<0)
        sum=sum+ar[i];
    }
    if(sum<0)
        sum=sum*(-1);

    printf("%d\n",sum);
}
