#include<iostream>
using namespace std;
int abs(int x){
    if(x<0) return -x;
    else return x;
}
struct complex {
    int pp, qq;

    complex(int x=0){
    	pp=x;
        qq=0;
    }
};


complex action1(complex g1, complex h1) {
    complex i1;
    i1.pp = g1.pp + h1.pp;
    i1.qq = g1.qq + h1.qq;
    return i1;
}

complex action3(complex g1, complex h1) {
    complex i1;
    i1.pp = g1.pp - h1.pp;
    i1.qq = g1.qq - h1.qq;
    return i1;
}

complex action2(complex g1, complex h1) {
    complex i1;
    i1.pp = g1.pp*h1.pp - g1.qq*h1.qq;
    i1.qq = g1.pp*h1.qq + g1.qq*h1.pp;
    return i1;
}

complex process4(complex g1, complex h1) {
    complex i1;
    i1.pp = (g1.pp*h1.pp + g1.qq*h1.qq)/(h1.pp*h1.pp+h1.qq*h1.qq);
    i1.qq = (-g1.pp*h1.qq + g1.qq*h1.pp)/(h1.pp*h1.pp+h1.qq*h1.qq);
    return i1;
}

int main(){
    complex num1, num2 ,t;
    /*num1 and num2 are two points in the complex plane */
    num1.pp=-8; // x-coordinate of num1
    num1.qq=-2; // y-coordinate of num1
    num2.pp=-9; // x-coordinate of num2
    num2.qq=3; // y-coordinate of num2
     t=process4(num1,num2);

    int dist= action1(action2(action3(num1.pp, num2.pp), action3(num1.pp, num2.pp)), action2(action3(num1.qq, num2.qq), action3(num1.qq, num2.qq))).pp  ;  // Line 1
    cout<<dist;
    return 0;
}
