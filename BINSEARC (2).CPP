#include<iostream.h>
#include<conio.h>
int main()
{
int n,temp,j,i,low,high,mid,a[100],index,target;
clrscr();
cout<<"Enter the size of the array:";
cin>>n;
cout<<"Enter the elements in the array\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"\nThe array in ascending order\n";
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
}
for(i=0;i<n;i++)
{
cout<<a[i]<<"\t";
}
cout<<"\nEnter the target element:";
cin>>target;
low=0;
high=n;
while(low<=high)
{
mid=(high+low)/2;
if(a[mid]==target)
{
index=1;
break;
}
else if(a[mid]<target)
{
low=mid+1;
}
else if(a[mid]>target)
{
high=mid-1;
}
}
if(index==1)
{
cout<<"\nThe element is present in the array\n";
cout<<"\nThe index of the element is "<<mid;
}
else
{
cout<<"\nThe element is not present in the array";
}
getch();
return 0;
}

