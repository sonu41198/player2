#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char ar[100],br[100],cr[100];
    int i,j=0,len,len1,ka=0,sum=0;
    scanf("%[^\n]s",ar);
    scanf("\n");
    scanf("%[^\n]s",br);
    len=strlen(ar);
    len1=strlen(br);
    if(len>len1)
    {
    for(i=0;ar[i]!=NULL;i++)
    {
        if(ar[i]!=br[j] && ar[i]!=' ')
        {
                cr[ka]=ar[i];
            ka++;
            j++;
            sum=1;
        }
        else
        {
            if(ar[i]==' ' && ka>0 && sum==1 )
            {
                j=j-ka;
                sum=0;
        
        }
            else
            {
            j++;
            }
        }
       }
    }
    else
    {
       for(i=0;br[i]!=NULL;i++)
    {
        if(br[i]!=ar[j] && br[i]!=' ')
        {
                cr[ka]=br[i];
            ka++;
            j++;
            sum=1;
        }
        else
        {
            if(br[i]==' ' && ka>0 && sum==1 )
            {
                j=j-ka;
                sum=0;
            }
            else
            {
            j++;
            }
        }
         }
    }
puts(cr);
 }
