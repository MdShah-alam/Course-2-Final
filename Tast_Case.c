#include<stdio.h>

int main()
{
    FILE *output=fopen("File_tase.txt","w");
    if(output==NULL)
    {
        printf("Not Found\n");
        return 0;
    }
    int n;
    scanf("%d",&n);

    for(int j=0;j<n;j++)
    {
        int a;
        scanf("%d",&a);
        int arr[a];
        int sum=0;
        for(int i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<a;i++)
        {
            sum=sum+arr[i];
        }
        fprintf(output,"case %d-> %d\n",j+1,sum);
    }
    fclose(output);
    return 0;
}
