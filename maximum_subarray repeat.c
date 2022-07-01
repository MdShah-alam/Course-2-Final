#include<stdio.h>
#include<string.h>

int minRepeats(char A[],char B[])
{
    char temp[1000];
    strcpy(temp,A);
    int count=1;

    while(strlen(A)<strlen(B))
    {
        A+=temp;
        count++;
    }
    if()
}

int main()
{
    char a[1000];
    char b[100];
    scanf("%s %s",a,b);
    int c=minRepeats( a ,b);
}
