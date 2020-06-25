#include<iostream>
#include<cstdio>
using namespace std;
const double PI=3.14159;
int main(){
	double r,d,c,s;
	cin>>r;
	d=r*2;
	c=2*r*PI;
	s=r*r*PI;
    printf("%.4lf %.4lf %.4lf\n",d,c,s);
	return 0;
}
