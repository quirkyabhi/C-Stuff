#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
 clrscr();
 int i,j,k=0;
 char s[80],word[80];
 cout<<"Reverse the words of a String\n\nEnter any string : ";
 gets(s);
 strcat(s," ");
 for(i=0;s[i]!='\0';i++)
 {
  if(s[i]!=' ')
  {
   word[k]=s[i];
   k=k+1;
  }
   else
  {
   while(k>0)
   cout<<word[--k];
   cout<<s[i];
  }
  }
   getch();
}