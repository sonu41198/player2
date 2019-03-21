#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i,n,m,c=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        if(b==m)
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
