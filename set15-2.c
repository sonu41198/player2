#include <stdio.h>
#include <conio.h>
int main()
{
    char a[1000];
    int n,i,j,c=0,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==k)
        {
            printf("yes");
            break;
        }
    }
    if(c==0)
    {
        printf("no");
    }

    return 0;
}
