#include<iostream>
using namespace std;
int main(){
  int array[10];
  int* search(int* a,int num);
  for(int i=0;i<10;i++){
    cin>>array[i];
  }
   int* zeroptr=search(array, 10);
   cout<<""<<zeroptr;
   return 0;
}

int* search(int* a, int num){
  for(int i=0;i<num;i++){
    if(a[i]==0){
      return &a[i];
    }
  }
}