#include<iostream>
using namespace std;
const int N=6;
//指向常量的指针做形参,此处应用是避免传递整个array浪费时间，而是只传递头地址，
//根据最小授权原则，不想让access data的方法篡改原数据，故限制为只读const
//用了指向常量的指针做形参
void print(const int *p, int n);
int main() {
  int array[N];
  for(int i=0;i<N;i++){
    cin>>array[i];
  }
  print(array, N);
  return 0;
}
void print(const int *p,int n){
  cout<<"{"<<*p;
  for(int i=0;i<n;i++){
    cout<<","<<*(p+i);
  }
  cout<<"}"<<endl;
}
