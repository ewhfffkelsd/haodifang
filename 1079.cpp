#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double a=0;
	cin>>n;
	for(int i=1;i<=n;i++){
	    if(i%2==0) a-=1.0/i;
	    else a+=1.0/i;
	} 
	printf("%.4lf\n",a);
	return 0;
}
