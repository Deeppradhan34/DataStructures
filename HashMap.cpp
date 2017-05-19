#include<iostream>
#include<stdio.h>
using namespace std;
#define tableLength 100

class Map{
	public:
		int key;
		int value;
		Map *buckets[tableLength];
		Map(){
			
			for(int i=0;i<tableLength;i++)
				buckets[i] = NULL;
				
	      }
		Map *createMap(int key, int value);
		void hashTableCapacity();
		int GetHashCode(int key);
};

class HashMap{
	public:
		void insert(int key, int value);
		void search(int key);
		Map *map;
		HashMap(){
			map = new Map();
		}
};

Map * Map::createMap(int key, int value){
	Map *map = new Map();
	map->key = key;
	map->value = value;
	return map;
}

int Map::GetHashCode(int key){
	return key%tableLength;
}

void HashMap::insert(int key, int value){
	
	Map *mapOb;
	mapOb = map ->createMap(key,value);
	int indexHash = map->GetHashCode(key) %tableLength;
	map->buckets[indexHash] = mapOb;		
}
void HashMap::search(int key){
		
		for(int i = 0; i < tableLength; i++){
			
			if( map->buckets[i] != NULL){	
				int keyInHash = map->buckets[i]->key;
				if(keyInHash == key){
				cout<<map->buckets[key]->value;
				}
		   }
		}

}
int main(){
	HashMap ob;
	Map ob1;
	int n;
	cin>>n;
	while(n--){
	
	int key, value;
	cin>>key>>value;
	ob.insert(key, value);
	}
	
	int searchKey;
	cout<<"ENTER SEARCH";
	cin>>searchKey;
	ob.search(searchKey);
	return 0;
	
}
