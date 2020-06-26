#include<bits/stdc++.h>
using namespace std;
int main(){
	double x,n,a=0,b;
	cin>>x>>n;
	b=n;
	for(int i=1;i<=n;++i){
		a+=pow(x,b);
		b--;
	} 
	printf("%.2lf\n",1+a);
	return 0;
}
