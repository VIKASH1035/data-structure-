#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,a,b;
    cin>>num;
    a=num%10;
    num=num/10;
    b=num%100;
    sum=a+b;
    cout<<sum;
    return 0;

}
