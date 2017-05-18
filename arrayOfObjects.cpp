#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class Student{
	public:
		int age;
		string name;
};

int main(){
	
	
	int n;
	cin>>n;
	
	Student s[n];
	int age;
	string name;
	Student ob;
	for(int i = 0; i < n; i++){
		cout<<"Enter age and name";
		cin>>age;
		cin>>name;
		ob.age = age;
		ob.name = name;
		s[i] = ob;
	}
	for(int j = 0; j <n; j++){
		cout<<s[j].age<<" ";
		cout<<s[j].name; 
		cout<<"\n";
	}
	return 0;
}
