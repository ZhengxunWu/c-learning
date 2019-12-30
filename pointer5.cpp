#include<iostream>
using namespace std;
int main(){
  int* newintvar();
  int* intptr=newintvar();
  *intptr=5;//valid addr
  delete intptr;//不能忘记释放，否则会导致内存泄漏
  return 0;
}

int* newintvar(){
  int* p=new int();
   return p;//返回的地址指向的是动态分配的内存空间，不会再函数结束时自动释放，
   //要用delete释放，这样的address不会有warning，是合法的
}