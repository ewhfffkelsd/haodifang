#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	double a,b,c,d,e,x;
	cin>>x>>a>>b>>c>>d;
	e=a*x*x*x+b*x*x+c*x+d;
	printf("%.7lf\n",e);
	return 0;	
}
