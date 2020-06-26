#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,k,h;
	cin>>m>>k;
	if(m%19!=0){
		cout<<"NO";
		return 0;
	}
	else if(m%19==0){
		do{
			if(m%10==3){
				h++;
				m/=10;
			}
			else m/=10;
		}
		while(m!=0);
	}
	if(h==k) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
