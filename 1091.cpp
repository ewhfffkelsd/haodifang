#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a=0,b=1;
	cin>>n;
	for(int i=1;i<=n;++i){
		b*=i;
		a+=b;
	} 
	cout<<a<<endl;
	return 0;
}
