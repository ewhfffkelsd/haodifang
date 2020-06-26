#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a=0;
	cin>>n;
	for(int i=1;i<=n;++i){
		if(i%7!=0&&i/10!=7&&i%10!=7){
			a+=pow(i,2);
		}
	} 
	cout<<a;
	return 0;
}
