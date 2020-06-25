#include<iostream>
using namespace std;
int main(){
	int a,s1,s2;
	cin>>a;
	s1=a/3.0+23+27;
	s2=a/1.2;
	if(s1>s2){cout<<"Walk"<<endl;
	}
	else if(s2>s1){cout<<"Bike"<<endl;
	}
	else if(s2==s1){cout<<"All"<<endl;
	}
	return 0;
}
