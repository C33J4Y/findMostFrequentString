#include <iostream>
#include <unordered_map>

using namespace std;


int main(){
const int n = 6;
  
string array[n] = {"Kiera","Kiera","Kiera","Giselle","Luis","Luis"};
unordered_map<string, int> countMap; //Allocate Hash table
int max;

for(int i =0; i < n;i++){
  countMap[array[i]]++;

 if(max < countMap[array[i]]){
   max = countMap[array[i]];
  
 }

}

unordered_map<string, int>:: iterator p; //Hash Table Iterator
for(p = countMap.begin(); p != countMap.end(); p++){
  if(p->second == max){
    cout << p->first << endl;
  }
 
}

  return 0;
}