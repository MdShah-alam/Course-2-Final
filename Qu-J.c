#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct St
{
    char s[100];
    char t[100];
};
int main()
{
    int n;
    scanf("%d",&n);
    struct St st[n];
    for(int i=0; i<n; i++)
    {
        scanf("%s %s",st[i].s,st[i].t);
    }

    bool found=false;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(strcmp(st[i].s,st[j].s)==0)
            {
                if(strcmp(st[i].t,st[j].t)==0)
                {
                    found=true;
                    break;
                }
            }
        }
    }
    if(found==true)
        printf("Yes\n");
    else
        printf("No\n");
}
