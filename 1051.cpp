#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	float a,b,c,x;
	cin>>x;
	a=2.5-x;
	b=2-1.5*(x-3)*(x-3);
	c=x/2-1.5;
	if(x>=0&&x<5){printf("%.3f\n",a);
	}
	else if(x>=5&&x<10){printf("%.3f\n",b);
	}
	else if(x>=10&&x<20){printf("%.3f\n",c);
	}
	return 0;
}
