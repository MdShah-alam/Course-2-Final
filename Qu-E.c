#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int sum[a];

    for(int k=0; k<a; k++)
    {
        int n;
        scanf("%d",&n);
        int ar[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&ar[i]);
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(ar[i]>ar[j])
                {
                    int temp=ar[i];
                    ar[i]=ar[j];
                    ar[j]=temp;
                }
            }
        }
        sum[k]=ar[1]-ar[0];
        for(int i=0; i<n; i++)
        {
            int a;
            for(int j=i+1; j<n; j++)
            {

                a=ar[j]-ar[i];
                if(sum[k]>a)
                {
                    int temp=sum[k];
                    sum[k]=a;
                    a=temp;
                }
            }
        }
    }

    for(int i=0; i<a; i++)
    {
        printf("%d\n",sum[i]);
    }
}
