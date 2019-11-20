#include <iostream>
using namespace std;
int main(){
	double a,b;
	cin>>a;
	cin>>b;
	if(a==11){
		if (b==-1){
			cout<<"North "<<"and "<<"turn right";
		}
		else if(b==0){
			cout<<"North "<<"and "<<"continue";
		}
		else if(b==1){
			cout<<"North "<<"and "<<"turn left";
		}
		else{
			cout<<"error";
		}
	}
	else if (a==12){
		if(b==-1){
			cout<<"West "<<"and "<<"turn right";
		}
		else if(b==0){
			cout<<"West "<<"and "<<"continue";
		}
		else if(b==1){
			cout<<"West "<<"and "<<"turn left";
		}
		else{
			cout<<"error";
		}
	}
	else if(a==13){
		if(b==-1){
			cout<<"South "<<"and "<<"turn right";
		}
		else if(b==0){
			cout<<"South "<<"and "<<"continue";
		}
		else if(b==1){
			cout<<"South "<<"and "<<"turn left";
		}
		else{
			cout<<"error";
		}
	}
	else if(a==14){
		if(b==-1){
			cout<<"East "<<"and "<<"turn right";
		}
		else if(b==0){
			cout<<"East "<<"and "<<"continue";
		}
		else if(b==1){
			cout<<"East "<<"and "<<"turn left";
		}
		else{
			cout<<"error";
		}
	}
	else{
		cout<<"error";
	}
	return 0;
}
