#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

char a[100];
int n, i;

void main()
{
    clrscr();
    printf(“\nenter string”);
    scanf(“%s”,&a);
    n=strlen(a);
    
    if(a[0]==’a’ && (a[n-1]==’a’ || a[n-1]==’b’) && a[n-2]==’c’)
    {
        for(i=1; i<n-2; i++)
         {   
              if(a[i]!=’b’)
               {
                   printf(“\n string is not accepted”);
                   getch();
                   exit(0);
               }
         }
         printf(“\n string is accepted”);
    } 
  
    else
    printf(“\n string is not accepted”);

   getch();
}


