#include<iostream.h>
#include<conio.h>
void main()
{
int m,mt,midterm,i,n,j,temp,a[100];
clrscr();
cout<<"Enter n value:";
cin>>n;
cout<<"Enter array elements:";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
 if(a[i]>a[j])
 {
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 }
 }
 cout<<a[i];
 }
cout<<"Enter a number to be searched:";
cin>>m;
mt=n/2;
midterm=a[mt];
if(midterm==m)
{
cout<<"The number is present";
}
else if(m<midterm)
{
for(i=0;mt-1;i++)
{
if(m==a[i])
{
cout<<"Element present";
}
}
}
else
{
if(m>midterm)
{
for(i=0;mt-1;i++)
{
if(m==a[i])
{
cout<<"Element found";
}
}
}
}
getch();
}





