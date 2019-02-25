#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string s= "Hi Dood";
	char c1=s[3];cout<<c1<<endl;
	char c2=s.at(1);cout<<c2<<endl;
	cout<<(int)'A'<<endl;
	string s1="vik";
	s1+="ash";
	cout<<s1<<endl;
	string s2="reet";
	if(s1>s2 && s2!="sai")
	{
		cout<<"ram ram"<<endl;
	}
	s1.append(" sai");
	cout<<s1<<endl;
	s1.erase(3,2);
	cout<<s1<<endl;
	s1.find("vik");
	s2.insert(4,"ika");
	cout<<s2<<endl;
	string name1;
	cout<<"enter your name1:";
	cin>>name1;
	cout<<name1<<endl;
	string s3;
	cout<<"enter 2nd name:";
	 getline(cin,s3);
	 cout<<s3<<endl;
	 return 0;
}
