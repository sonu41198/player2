#include<stdio.h>
#include<conio.h>
void main()
{
    char a[10000],b[10000];
    int i,j=0;
    scanf("%[^\n]s",&a);
    scanf("%s",&b);
    for(i=0;a[i]!='\0';i++)
    {
       
            if(a[i]==b[j])
            {
                a[i]='*';
               
            }
      
         j++;
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='*' && a[i]!=' ')
        {
            printf("%c",a[i]);
        }
    }
}
