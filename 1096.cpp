#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,a=0;
	cin>>m>>n;
	for(int i=m;i<=n;++i){
		for(int j=i;j>0;j/=10){
			if(j%10==2){
				a++;
			}
		}
	} 
	cout<<a;
	return 0;
}
