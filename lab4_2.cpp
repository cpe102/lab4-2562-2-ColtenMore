#include<iostream>
#include<cmath>
using namespace std;

//Write function findDistance() here
double findDistance(double u,double a,double t){
	double s = u*t+0.5*a*t*t;
	return s;
}

int main(){

  //Calling findDistance() using test cases
  cout<<"u = ";
	double u;
	cin>>u;
	
	cout<<"a = ";
	double a;
	cin>>a;
	
	cout<<"t = ";
	double t;
	cin>>t;
	
	cout<<"s= "<< findDistance(u,a,t);
  return 0;
}
