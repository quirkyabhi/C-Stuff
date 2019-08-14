#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>
void main()
{
  start:
  clrscr();
  long int a,t,rem,rev,b,c,m,sum,i,j,n,p,start;
  char ch;
  cout<<"\n  1.To check if a number is Palindrome number";
  cout<<"\n  2.Sum of digits";
  cout<<"\n  3.To check a number is even or odd";
  cout<<"\n  4.To print multiplication table";
  cout<<"\n  5.To check a no is armstrong number";
  cout<<"\n  6.To reverse a number";
  cout<<"\n  7.To check a number is prime or not";
  cout<<"\n  8.To check a character is alphabet or not";
  cout<<"\n  9.To convert a character in uppercase";
  cout<<"\n 10.To print fibonacci series upto n";
  cout<<"\n 11.EXIT\n";
  cout<<"\nEnter your choise from (1 - 11)\n";
  cin>>n;
  clrscr();
  switch(n)
  {
  case 1:cout<<"\n1.To check if a number is Palindrome number";
	 rev=0;
	 cout<<"\n\nEnter the number"<<endl;
	 cin>>a;
	 t=a;
	 while(a!=0)
	 {
	  rem=a%10;
	  a=a/10;
	  rev=rev*10+rem;
	 }
	 if(rev==t)
	 cout<<"The number "<<t<<" is palindrome";
	 else
	 cout<<"The number "<<t<<" is not palindrome";
	 getch();
	 goto start;
  case 2:cout<<"\n2.Sum of digits";
	 cout<<"\n\nEnter the number";
	 cin>>a;
	 rev=0;
	 while(a!=0)
	 {
	 rem=a%10;
	 a=a/10;
	 rev=rev+rem;
	 }
	 cout<<"\nSum of digits is "<<rev;
	 getch();
	 goto start;
  case 3:cout<<"\n3.To check a number is even or odd";
	 cout<<"\n\nEnter the no :"<<endl;
	 cin>>a;
	 if(a%2==0)
	 cout<<"\nThe number "<<a<<" is even";
	 else
	 cout<<"\nThe number "<<a<<" is odd";
	 getch();
	 goto start;
  case 4:cout<<"\n4.To print multiplication table";
	 cout<<"\n\nEnter the number : ";
	 cin>>p;
	 cout<<"\n";
	  for(i=1;i<=10;i++)
	  {
	   m=p*i;
	   cout<<p<<"*"<<i<<"="<<m<<endl;
	  }
	   getch();
	   goto start;
  case 5:cout<<"\n5.To check a no is armstrong number";
	 sum=0;
	 cout<<"\n\nEnter the number "<<endl;
	 cin>>p;
	 t=p;
	 while(p!=0)
	 {
	  m=p%10;
	  c=m*m*m;
	  sum=sum+c;
	  p=p/10;
	 }
	  if(sum==t)
	  cout<<"The number " <<t<<" is Armstrong number";
	  else
	  cout<<"The number " <<t<<" is not Armstrong number";
	  getch();
	  goto start;
  case 6:cout<<"\n6.To reverse a number";
	 rev=0;
	 cout<<"\n\nEnter the number"<<endl;
	 cin>>a;
	 t=a;
	 while(a!=0)
	 {
	  rem=a%10;
	  a=a/10;
	  rev=rev*10+rem;
	 }
	 cout<<"The reverse of number  "<<t<<" is "<<rev;
	 getch();
	 goto start;
  case 7:cout<<"\n7.To check a number is prime or not";
	 j=0;
	 cout<<"\n\nEnter a number  "<<endl;
	 cin>>p;
	 for(i=2;i<p;i++)
	  if(p%i==0)
	  j=1;
	  if(p==1||p==0)
	 {
	  cout<<"The number is not a prime number ";
	 }
	  else if(j==0)
	  cout<<"The number is prime number ";
	  else
	  cout<<"Not a prime number ";
	  getch();
	  goto start;
  case 8:cout<<"\n8.To check a character is alphabet or not";
	 cout<<"\n\nEnter character \n";
	 cin>>ch;
	 if(isalpha(ch))
	 cout<<endl<<"The character is alphabet ";
	 else
	 cout<<endl<<"The character is not alphabet ";
	 getch();
	 goto start;
  case 9:cout<<"\n9.To convert a character in uppercase";
	 cout<<"\n\nEnter character \n";
	 cin>>ch;
	 cout<<char(toupper(ch));
	 getch();
	 goto start;
  case 10:cout<<"\n10.To print fibonacci series upto n";
	  a=0,b=1;
	  cout<<"\n\nEnter the number :\n";
	  cin>>p;
	  cout<<endl<<a<<endl<<b<<endl;
	  for(i=2;i<p;i++)
	  {
	   c=a+b;
	   cout<<c<<endl;
	   a=b;
	   b=c;
	  }
	  getch();
	  goto start;
  case 11:exit(0);
 }
  getch();
}