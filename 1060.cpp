#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	double r=0,p,a;
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>a;
		r+=a;
}
    p=r/n;
    printf("%.4lf\n",p);
    return 0;
 }
