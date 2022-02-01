#include<iostream>
using namespace std;
int main(){
	int lin,sp,i,j,k;
	cout<<"Enter number of lines to print: ";
	cin>>lin;
	for(i=1;i<=lin;i++){
	for(sp=1;sp<=lin-i;sp++){
		cout<<" ";
	}
	for(j=1;j<=2*i-1;j++){
			cout<<"*";
	}
	cout<<endl;
	}
	for(i=lin;i>=1;i--){
	for(sp=1;sp<=lin-i;sp++){
		cout<<" ";
	}
	for(j=1;j<=2*i-1;j++){
			cout<<"*";
	}
	cout<<endl;
	}
	return 0;
}
