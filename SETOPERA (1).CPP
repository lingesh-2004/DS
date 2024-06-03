#include<iostream>
#include<conio.h>
#include<set>
using namespace std;
int main()
{
//empty set container
set<int,greater<int> >s1;
//insert element in random order
s1.insert(40);
s1.insert(30);
s1.insert(60);
s1.insert(20);
s1.insert(50);
//printing set s1
set<int,greater<int> >::iterator itr;
cout<<"/n the set s1 is\n";
for(itr=s1.begin();itr!=s1.end();itr++)
{
cout<<*itr<<" ";
}
cout<<endl;
//assigning the element from s1 to s2
set<int>s2(s1.begin(),s1.end());
cout<<"\n the set s2:\n";
for(itr=s2.begin();itr!=s2.end();itr++)
{
cout<<*itr<<" ";
}
cout<<endl;
//remove all element upto 30 in 32
cout<<"\ns2 after removal:\n";
s2.erase(s2.begin(),s2.find(30));
for(s2.begin();itr!=s2.end();itr++)
{
cout<<*itr<<" ";
}
//remove element 50
int num;
num=s2.erase(50);
cout<<num<<"removed\n";
for(itr=s2.begin();itr!=s2.end();itr++)
cout<<*itr<<" ";
cout<<endl;
//lowerbound supperbound for set.s1
cout<<"s1.lower band(40)"<<*s1.lower_bound(40)<<endl;
cout<<"s1.upper bound(40)";
cout<<*s1.upper_bound(40)<<endl;
//lower bound.upper bound for set s2
return 0;
}

