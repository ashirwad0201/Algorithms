#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,g;
cout<<"Enter two numbers:" ;
cin>>a>>b;
if(a>b)
g=hcf(a,b);
cout<<"hcf of given numbers is :"<<g;
}
int hcf(int n1,int n2)
{
if(n2==0)
return n1;
else
return(hcf(n2,n1%n2));
}
