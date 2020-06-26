#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,x=2;
	cin>>a>>b>>c;
	for(int i=1;i<=1000000;i++){
		if(a%x==b%x&&a%x==c%x&&b%x==c%x){
			cout<<x<<endl;
			return 0;
		}
		else x++;
	}
	return 0;
}
