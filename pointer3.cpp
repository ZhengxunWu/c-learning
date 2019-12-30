/*
指针函数的定义：存储类型 数据类型 *函数名(){
  //函数体语句
}
不能把non-static local address用做函数返回值
*/
//wrong example
#include <iostream>
using namespace std;
int main(){
  int *function();
  int* ptr=function();
  *ptr=5;
  cout<<""<<*ptr;
  return 0;
}
//get warning: address of local variable 'local' returned
int* function(){
  int local=0;
  return &local;
}