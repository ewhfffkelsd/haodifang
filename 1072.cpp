#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,c,d;
	double x,y; 
	cin>>n;
	cin>>c>>d;
	x=1.0*d/c;
	for(int i=1;i<=n-1;i++){
		cin>>a>>b;
		y=1.0*b/a;
		if(x-y>0.05)cout<<"worse"<<endl;
		else if(y-x>0.05) cout<<"better"<<endl;
		else cout<<"same"<<endl;
	}
	return 0;
}
