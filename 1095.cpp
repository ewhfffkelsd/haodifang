#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a=1;
	cin>>n;
	for(int i=2;i<=n;++i){
		for(int j=i;j>0;j/=10){
			if(j%10==1){
				a++;
			}
		}
	} 
	cout<<a;
	return 0;
}
