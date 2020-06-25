#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main(){
	double xa,ya,xb,yb,c,s,h;
	cin>>xa>>ya>>xb>>yb;
	h=xb-xa;
	s=ya-yb;
	c=sqrt((h*h)+(s*s));
	printf("%.3lf\n",c);
	return 0;	
}
