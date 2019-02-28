#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c,determinant,root1,root2,realPart,imagineryPart;
    cout<<"a:"<<endl;
    cin>>a;
    cout<<"b:"<<endl;
    cin>>b;
    cout<<"c:"<<endl;
  cin>>c;

   determinant=b*b-(4*a*c);

   if(determinant>0)
   {
       root1=(-b+sqrt(determinant))/2*a;
       root2=(-b-sqrt(determinant))/2*a;
       cout<<"root1:"<<root1;
       cout<<"root2:"<<root2;
   }

   else if(determinant==0)
   {
       root1=root2=-b/(2*a);
       cout<<"root1="<<"root2="<<root1;
   }

   else
   {
       root1=(-b+sqrt(-determinant))/2*a;
       root2=(-b-sqrt(-determinant))/2*a;
       cout<<"root1:"<<root1;
       cout<<"root2:"<<root2;

   }
   return 0;
}
