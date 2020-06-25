#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,a;
	double r=0,p;
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>a;
		r+=a;
}
    p=r/n;
    cout<<r<<" ";
	printf("%.5lf\n",p);
    return 0;
 }
