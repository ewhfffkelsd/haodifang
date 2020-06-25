#include<iostream>
#include<cstdio>
using namespace std;
const double PI=3.14159;
int main(){
	double r1,r2,r;
	cin>>r1>>r2;
	r=1/(1/r1+1/r2);
    printf("%.2lf",r);
	return 0;
}
