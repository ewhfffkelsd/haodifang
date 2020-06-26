#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int i=1;
	double h;
	double a;
	cin>>h;
	a=h;
	do{
		++i;
		h/=2;
		a+=2*h;
	}
	while(i<10);
	cout<<a<<endl<<h/2<<endl;
	return 0; 
}
