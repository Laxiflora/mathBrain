#include <iostream>
#include <cstdlib>
#define LIMIT 3999
using namespace std;
/*
�p��S�w�ƶq��ù���r���i��ܪ��Ʀr�ƶq 
*/
int digitProcess(int i){
	 if(i==4 || i==9) return 2;
	 if(i>=5){
	 	return (i-4);
	 }
	 else return i;
}



void countProcess(int i,int& ans,int n){
	int digit=0;
	while(i>0){
		digit+=digitProcess(i%10);
		i/=10;
	}
	if(n==digit) ans++;
}




int main(void){
	int n,ans=0;
	cin>>n;
	for(int i=0;i<LIMIT;i++){
		countProcess(i,ans,n);		
	}
	cout<<ans;
}
