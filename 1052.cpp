#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a;
	char b;
	cin>>a>>b;
	switch(b) {
		case 'n':if(a>1000) cout<<8+ceil((a-1000)/500.0)*4<<endl;
		else if(a<=1000) cout<<8<<endl;
			break;
		case 'y':if(a>1000) cout<<8+ceil((a-1000)/500.0)*4+5<<endl;
		else if(a<=1000) cout<<8+5<<endl;
		break;
	default:
        break;
}
    return 0;
}
