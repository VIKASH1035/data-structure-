#include<bits/stdc++.h>
using namespace std;
void datingRange(int age,int &min,int &max)
{
	min=age/2+7;
	max=(age-7)*2;
}
int main()
{
	int young;
	int old;
	int age;
	cout<<"enter age: ";
	cin>>age;
	datingRange(age,young,old);
	cout<<"A "<<age<<" year old can date someone from "<<young<<" to "<<old<<" years old.";
	return 0;
}
