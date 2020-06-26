#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c=0,d=0;
    cin>>n;
	for(int i=1;i<=n;i++){
    	cin>>a>>b;
    	if(a<=140&&a>=90&&b>=60&&b<=90){
    		c++;
    		if(d<c) d=c;
	}
    	else c=0;
	}
	cout<<d<<endl;
    return 0; 
}
