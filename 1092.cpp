#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double a=0,b=1;
	cin>>n;
	for(int i=1;i<=n;++i){
		b*=1.0/i;
		a+=b;
	} 
	printf("%.10lf\n",1+a);
	return 0;
}
