#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
int s;
char s1[50],s2[50],s3[50],s4[50],s5[50],s6[50],s7[50],s8[50];
int i=0,j=0,l=0,n;
clrscr();
cout<<"Enter a operation (1.Concat 2.length 3.Reverse 4.Compare 5.Copy)";
cin>>s;
switch(s)
{
case 1:
cout<<"Enter 2 strings"<<endl;
cin>>s1>>s2;
while(s1[i]!='\0')
i++;
while(s2[j]!='\0')
{
s1[i]=s2[j];
j++;
i++;
}
s1[i]='\0';
cout<<"Contatinated string is:"<<s1<<endl;
break;
case 2:
cout<<"Enter a string:"<<endl;
cin>>s3;
for(i=0;s3[i]!='\0';i++)
{
l++;
}
cout<<"The length of string is"<<l;
break;
case 3:
cout<<"Enter a string:"<<endl;
cin>>s4;
n=strlen(s4);
cout<<"The reversed string is :";
for(i=n-1;i>=0;i--)
{
cout<<s4[i];
}
break;
case 4:
cout<<"Enter a string:"<<endl;
cin>>s5;
cout<<"Enter 2nd string:"<<endl;
cin>>s6;
while(s5[i]==s6[i]&&s5[i]!='\0')
{
i++;
}
if(s5[i]==s6[i])
{
cout<<"strings are equal"<<endl;
}
else
{
cout<<"strings are not equal"<<endl;
}
break;
case 5:
cout<<"Enter a string"<<endl;
cin>>s7;
for(i=0;s7[i]!='\0';i++)
{
s8[i]=s7[i];
}
s8[i]='\0';
cout<<"Copied string is"<<s8;
break;
default:
cout<<"Invalid operator"<<endl;
}
getch();
}


