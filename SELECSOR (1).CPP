#include<iostream.h>
#include<conio.h>
int main()
{
int n,a[50],i,j,temp,min;
clrscr();
cout<<"Enter the size of the array:";
cin>>n;
cout<<"Enter the array elements\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"To sort the array using selection sorting\n";
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[min]>a[j])
{
min=j;
}
}
if(min!=i)
{
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}
for(i=0;i<n;i++)
{
cout<<a[i]<<"\t";
}
getch();
return 0;
 b}



