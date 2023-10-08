#include<iostream>
using namespace std;
main() {
int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;
	cout<< " Enter a 4-digit number: ";	
cin>>a;
b=a%10;
c=a/10;
d=c%10;
e=c/10;
f=e%10;
g=e/10;
h=b+d+f+g;
	cout<< " Sum of the individual digits: "<<h;}