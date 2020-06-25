#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b;
	c=b/a*100;
	printf("%.3lf",c);
	cout<<"%"<<endl;
	return 0;	
}
