#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];
    scanf("%s",&s);
    int a=strlen(s);

    int i=0;
    int count=0;

    while(i<a)
    {
        if(s[i]=='a')
            count++;
        i++;
    }
   if(count>i/2)
   {
       printf("%d",i);
       return 0;
   }
   else
   {
       count=count*2-1;
       printf("%d",count);
       return 0;
   }
}
