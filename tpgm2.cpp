#include<iostream>
using namespace std;
int main ()
{
int poly[50], poly[50], sum[50],i,siz,size1,size2;
cout<<"Enter range of polynomial!:";
cin>>sizel;
cout<<"enter"<<sizel<< "coefficients of polynomial!:"<<endl;
for (i=0;i<size1;i++)
{
cin>>poly[i];
}
cout<<"The paynomial 1 is: "<<endl;
for (i= size1-1;i>=0;i--)
{
if (i<size1-1)
 {
  cout<<"+";
 }
cout<<poly[i];
if (i>0)
 {
  cout<<"x"<<i;
 }
}
cout<<endl;
cout<<"Enter range of polynomial 2:";
cin>>size2;
cout<<"enter"<<size2<< "coefficients of polynomial 2: "<<endl;
for(i=size2-1;i>=0;i--)
{
 cin>> poly2 [i];
}
cout<<"The polynomial 2 is:"<<endl;
for (i=size2-1;i>=0;i--)
{
 if (i<size2-1)
 {
  cout<<"+";
 }
cout<<poly2[i];
if(i>0)
 {
 cout<<"x"<<i;
 }
}
cout<<endl;
if (size1>size2)
  {
  size=size1;
  for (i=size2;i<size1;i++) {
   poly2[i]=0;
  }
  }
else{
 size = size2;
 for (i= size1;i<size2;i++)
 {
  poly[i]=0;
 }
}
cout<<"The polynomial sum is:"<<endl;
for (i=size-1;i>= 0;i--)
{
 sum[i]= poly2[i]+poly1[i];
}
for(i=size-1;i>=0;i--)
{
 if (i<size-1)
 {
  cout << "+";
 }
cout<<sum[i];
if (i>0)
{
    cout<<"x^"<<i;
}
}
cout<<endl;
return 0;
}
