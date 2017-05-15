#include<iostream>
using namespace std;

int printPrimes(int n, int count1, int count){

	if(count1 > n)
		return 1;
		
	if(n % count1 == 0){
		count++;
	
	}	
	count1++;		
	int val = printPrimes(n,count1,count);
	
	if(val == 1){
	
		return count;
	}	
}
void print(int n){
	
	if( n ==  1)
		return;
		
	int count = printPrimes(n,1,0);
	print(n-1);
	
	if(count == 2)
		cout<<n<<" ";
}
int main(){
	
	
	int n;
	cin>>n;
	print(n);
	
}
