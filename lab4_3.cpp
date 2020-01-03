#include<iostream>
#include<cmath>
using namespace std;

int findDivisor(int x){
	int y=2;
	while(y>1){
		if(x%y==0){
			return y;
		}
		else{
			y++;
		}
	}
}
int main(){
	cout<<"Input = ";
	int x;
	cin>>x;
	cout<<"Output = "<<findDivisor(x);
	return 0;
}

