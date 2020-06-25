#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	float x,a,y,b,z,q;
	cin>>x>>a>>y>>b;
	q=b*y-a*x;
	z=q/(b-a);
	printf("%.2f\n",z);
	return 0;	
}
