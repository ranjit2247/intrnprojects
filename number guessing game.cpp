//Number Guessing game
#include<iostream>
using namespace std;

int main(){
	int n;
	int x=78,count=0;
	cout<<"guessing a number b/w 1 and 99:";
	for(int i=1; i<=10; i++){
		cin>>n;
		count=i;
		if(n<x){
			cout<<"guessing a number:";
		}else if(n>x){
			cout<<"guessing smolest number:";
		}else {
		cout<<"you are correat:";
		}if(n==x)
		break;
	}
	cout<<"you took"<<count<<"change";		
return 0;	
}
