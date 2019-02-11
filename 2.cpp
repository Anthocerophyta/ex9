#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
	string data;
	ifstream import("F:\\Comprograming\\ex9\\ex9\\2.txt");
	float a,b,y=0;
	int n;
	cout<<"Enter min - max :";
	cin>>a>>b;
	while(getline(import,data)){
		y=atof(data.c_str());
		if(y>=a&&y<=b){
			n++;
		}
	}
	if(n==0) cout<<"Invalid input. (max>=min)";
	else cout<<"Number of student:"<<n;
	
}
