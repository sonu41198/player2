#include <stdio.h>
#include <conio.h>
int main()
{
int N,a[100],i,j,c=0,x;
scanf("%d",&N);
for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}
for(i=1;i<=N;i++)
{
    c=0;
    for(j=0;j<N;j++)
    {
        if(a[j]%i==0)
        {
           c++;
        } 
    }
    if(c==N)
    {
    x=i;  
    }
}
  printf("%d",x); 
    return 0;
}
