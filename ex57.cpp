#include <iostream>
using namespace std;
int main(){
	int day, month, year;
	cin>>day>>month>>year;
	if( year < 2019 && day <= 20){
		switch (month){
			case 1:
				if(day<=31){
					cout<<"Yes";
				}
				else{
					cout<<"No";
				}
				break;
			case 2:
				if(day<=28){
					cout<<"Yes";
				}
				else{
					cout<<"No";
				}
				break;
			case 3:
				if(day<=31){
					cout<<"Yes";
				}
				else{
					cout<<"No";
				}
				break;
			case 4:
				if(day<=30){
					cout<<"Yes";
				}
				else{
					cout<<"No";
				}
				break;
			case 5:
				if(day<=31){
					cout<<"Yes";
				}
				else{
					cout<<"No";
				}
				break;
			case 6:
				if(day<=30){
					cout<<"Yes";
				}
				else{
					cout<<"No";
				}
				break;
			case 7:
				if(day<=31){
					cout<<"Yes";
				}
				else{
					cout<<"No";
				}
				break;
			case 8:
				if(day<=31){
					cout<<"Yes";
				}
				else{
					cout<<"No";
				}
				break;
			case 9:
				if(day<=30){
					cout<<"Yes";
				}
				else{
					cout<<"No";
				}
				break;
			case 10:
				if(day<=31){
					cout<<"Yes";
				}
				else{
					cout<<"No";
				}
				break;
			case 11:
				if(day<=30){
					cout<<"Yes";
				}
				else{
					cout<<"No";
				}
				break;
			case 12:
				if(day<=31){
					cout<<"Yes";
				}
				else{
					cout<<"No";
				}
				break;	
			default:
			{
				cout<<"No";
				break;
			}
		}
	}
	else{
		cout<<"No";
	}
	return 0;
}
