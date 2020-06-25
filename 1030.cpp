#include<cstdio>
#include<iostream>
using namespace std;
const double PI=3.14;
int main(){
	double r,V;
	scanf("%lf",&r);
	V=PI*(r*r*r)/3*4;
	printf("%.2lf\n",V);
	return 0;
}
