#include<stdio.h>
#include<string.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    char s[100000];
    scanf("%s",s);
    for(int i=a-1,j=b-1;i<j;j--,i++)
    {
        char ch=s[i];
        s[i]=s[j];
        s[j]=ch;
    }
    printf("%s",s);
   return 0;
}
