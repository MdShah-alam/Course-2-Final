#include<stdio.h>
#include<math.h>

int main()
{
    long long int n;
    scanf("%lld",&n);
    int count=0,sum=0;
    for(int j=2; j<=n; j++)
    {
        long long int a;
        a=pow(5,j);

        while(a>0)
        {
            int d=a%10;
            a=a/10;

            count++;
            if(count<3)
            {
                sum=sum*10+d;
            }
        }
        int s=0;
        while(sum!=0)
        {
            int d=sum%10;
            sum=sum/10;
            s=s*10+d;
        }
        printf("%d\n",s);
        return 0;
    }
}
