#include<iostream.h>
#include<conio.h>
int main()
{
int a[50][50],sparse[3][50],i,j,t,m,n,k=0,count=0;
clrscr();
cout<<"Enter the no. of rows and columns";
cin>>n>>m;
cout<<"Enter the elements of the matrix\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cin>>a[i][j];
}
}
cout<<"Matrix form"<<"\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<"\n";
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(a[i][j]!=0)
{
count++;
}
}
}
t=(n*m)/2;
if(count<=t)
{
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(a[i][j]!=0)
{
sparse[0][k]=i;
sparse[1][k]=j;
sparse[2][k]=a[i][j];
k++;
}
}
}
cout<<"\n\n";
for(i=0;i<3;i++)
{
for(j=0;j<count;j++)
{
cout<<sparse[i][j]<<" ";
}
cout<<"\n";
}
}
else if(count>t)
{
cout<<"The entered matrix is not a sparse marix";
}
getch();
return 0;
}
