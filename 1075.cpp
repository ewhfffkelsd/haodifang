#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,r[101],h;
	cin>>m>>n;
	h=0;
	for(int i=1;i<=n;i++){
		cin>>r[i];
	    if(m>=r[i]) m-=r[i];
	    else if(m<r[i]) h++;
	}
	cout<<h<<endl;
	return 0;
}
