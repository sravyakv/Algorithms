#include<iostream>
#include<iomanip>
using namespace std;
void selection(int a[100],int n)
{
int i,j,small,temp,pos;
for(i=0;i<n-1;i++)
{
small=a[i];
pos=i;
for(j=i+1;j<n;j++)
{
if(a[j]<small)
{
small=a[j];
pos=j;
}
}
temp=a[pos];
a[pos]=a[i];
a[i]=temp;
}
}
int main()
{
int n,i,a[100];
cout<<"enter value of n \n";
cin>>n;
cout<<"enter array elements \n";
for(i=0;i<n;i++)
cin>>a[i];
selection(a,n);
cout<<"the sorted array is \n";
for(i=0;i<n;i++)
cout<<a[i]<<"\n";
return 0;
}
