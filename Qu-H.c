#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    scanf("%s",s);

    int count[10]= {0};
    char ch;
    for(int i=0; i<strlen(s); i++)
    {
        char ch=s[i];
        count[ch-'0']++;
    }
    int i=0;
    for(ch='1'; ch<='3'; ch++)
    {
        while(count[ch-'0']!=0)
        {
            s[i]=ch;
            i+=2;
            count[ch-'0']--;
        }
        while(count[ch-'0']!=0)
        {
            s[i]=ch;
            i+=2;
            count[ch-'0']--;
        }
        while(count[ch-'0']!=0)
        {
            s[i]=ch;
            i+=2;
            count[ch-'0']--;
        }
    }
    printf("%s\n",s);
}
