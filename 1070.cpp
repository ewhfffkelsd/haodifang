#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double x;
	cin>>x>>n;
	for(int i=1;i<=n;i++){
		x=x+x*0.001;
	}
    
	printf("%.4lf\n",x);
	return 0;
}
