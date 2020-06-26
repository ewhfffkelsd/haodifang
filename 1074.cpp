#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b=0,c=0,d=1,e;
    for(int i=1;i<=12;i++){
    	cin>>a;
    	b+=300-a;
    	if(b<0&&d){
    		e=i;
    		d=0;
		}
		else if(b>=100){
		c+=b/100*100;
		b%=100;
	}
	}
	if(d==0) cout<<-e<<endl;
	else cout<<b+c/10*12<<endl;
    return 0; 
}
