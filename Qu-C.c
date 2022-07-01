#include<stdio.h>

int main()
{
    int b;
    scanf("%d",&b);
    for(int i=1; i<=b; i++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int ar[n];
        int count=0;
        for(int i=0,j=n-1; i<=j; i++,j--)
        {
            ar[count]=a[i];
            count++;
            ar[count]=a[j];
            count++;
        }

        for(int i=0; i<n; i++)
        {
            printf("%d ",ar[i]);
        }
        printf("\n");
    }
}
