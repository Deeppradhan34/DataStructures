#include<iostream>
using namespace std;
int getIndex(int a[], int n, int searchNum);
int partition(int a[], int n , int n1);
int getIndexFromLeftSubArray(int a[], int low, int high, int searchNum);
int getIndexFromRightSubArray(int a[], int low, int high, int searchNum);

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i <n; i++)
		cin>>a[i];
	int searchNum;
	cin>>searchNum;
		
	int index = getIndex(a,n,searchNum);
}

int getIndex(int a[], int n, int searchNum){
	
	int pivot = partition(a,0,n-1);
//	cout<<pivot;
	int low = 0;
	int high = n-1;
	if(searchNum >= a[0]){
		int searchedIndex = getIndexFromLeftSubArray(a,low,pivot,searchNum);
		cout<<searchedIndex;
	}
	else{
		int searchIndex = getIndexFromRightSubArray(a,pivot+1,n-1,searchNum);
		cout<<searchIndex;
	}
	
}

int getIndexFromRightSubArray(int a[], int low, int high, int searchNum){
	
		while(low <= high){
		
		int mid = low+(high - low)/2;
		
		if(a[mid] == searchNum)
			return mid;
			
		if(searchNum < a[mid]){
			high = mid -1;
		}
		else
			low = mid + 1;
	}
}
int getIndexFromLeftSubArray(int a[], int low, int high, int searchNum){
	
	while(low <= high){
		
		int mid = low+(high - low)/2;
		
		if(a[mid] == searchNum)
			return mid;
			
		if(searchNum < a[mid]){
			high = mid -1;
		}
		else
			low = mid + 1;
	}
}

int partition(int a[],int low, int high){
	

	for(int i = low; i <=high-1; i++){
		
		if(a[i]>a[i+1]){
			return i;
		}
	}
	return 0;
}
