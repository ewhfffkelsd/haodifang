#include<iostream>
using namespace std;
int main(){
	int n,x,y,s;
	cin>>n>>x>>y;
	s=n-y/x;
	if(y/x>=n){cout<<"0"<<endl; 
	}
	else if(y%x>0){cout<<n-(y/x)-1<<endl;
	}
	else cout<<s<<endl;
	return 0;
}
