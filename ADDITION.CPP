//addition
#include<iostream.h>
#include<conio.h>
void main()
{
 int nos,a,temp=0;
 cout<<"\nHow many nos.?";
 cin>>nos;
// loop_start
  cout<<"\n Enter the no..";
  for(int i=0;i<nos;i++)
  {
  cin>>a;
  temp=temp+a;
  }
  cout<<"\nThe sum is.."<<temp;
 getch();
 }
