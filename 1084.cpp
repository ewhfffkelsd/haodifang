#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c=1;
	cin>>a>>b;
	for(int i=1;i<=b;i++){
		c*=a;
		c%=1000;
	}
	if(c>=100){
		cout<<c<<endl;
	}
	else if(c<100&&c>=10) cout<<"0"<<c<<endl;
	else if(c<10) cout<<"00"<<c<<endl;
	return 0;
}
