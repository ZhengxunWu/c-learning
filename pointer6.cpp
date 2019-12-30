/*函数指针（指向函数的指针）的定义：
存储形式 数据类型 (*函数指针名)();
含义:函数指针指向的是程序代码存储区的首地址
用途：实现函数回调

*/
#include<iostream>
using namespace std;
int main(){
  int a,b,res;
  cout<<"inputa:";cin>>a;
  cout<<"inputb";cin>>b;
  int compute(int a, int b, int(*func)(int,int));
  int max(int a,int b);
  int min(int a,int b);
int sum(int a,int b);


  res=compute(a,b,&max);
  cout<<"max of"<<a<<"and"<<b<<"is"<<res<<endl;
  res=compute(a,b,&min);
  cout<<"min of"<<a<<"and"<<b<<"is"<<res<<endl;
  res=compute(a,b,&sum);
  cout<<"sum of"<<a<<"and"<<b<<"is"<<res<<endl;
//cout<<"fs"<<(&max);

}
int compute(int a, int b, int(*func)(int,int)){
  return func(a,b);
}
int max(int a,int b){
  return ((a>b)?a:b);
}
int min(int a,int b){
  return ((a<b)?a:b);
}

int sum(int a,int b){
  return a+b;
}