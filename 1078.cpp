#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double d=0,q[9999],p[9999];
	cin>>n;
	q[1]=2;
	p[1]=1;
	for(int i=1;i<=n;i++){
		d=d+q[i]/p[i];
		q[i+1]=q[i]+p[i];
		p[i+1]=q[i];
	}
	printf("%.4lf\n",d);
	return 0;
}
