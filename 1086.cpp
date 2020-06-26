#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	long int a;
	cin>>a;
	do{
		if(a%2!=0) {
		cout<<a<<"*3+1="<<a*3+1<<endl;
		a=a*3+1;
	}
		else {
		cout<<a<<"/2="<<a/2<<endl;
		a/=2;
	}
	}
	while(a!=1);
	cout<<"End"<<endl;
	return 0; 
}
