#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,d,e,f=0,g,h;
    cin>>n;
	for(int i=1;i<=n;i++){
    	cin>>a;
    	b=a/1000;
    	c=(a%1000)/100;
    	d=((a%1000)%100)/10;
    	e=((a%1000)%100)%10;
    	g=e-b-c-d;
    	if(g>0) f++;
    	else h++;
	}
	cout<<f<<endl;
    return 0; 
}
