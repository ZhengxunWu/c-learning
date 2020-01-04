/*
*/
#include <iostream>
using namespace std;
class Base1{//基类base1定义
public:
 void display() const {
   cout<<"Base1::display()"<<endl;
 } 
};
class Base2: public Base1 {//公有派生类Base2定义
public:
  void display() const {
    cout<<"Base2::display()"<<endl;
  }
  
};
class Derived: public Base2 {
  public:
  void display() const{
    cout<<"Derived::display()"<<endl;
  }
};

void fun(Base1 *ptr){//参数是指向基类对象的指针
  ptr->display(); //“对象指针->成员名”
}

int main(){//主函数
  Base1 base1;
  Base2 base2;
  Derived derived;
  fun(&base1);
  fun(&base2);
  fun(&derived);
  return 0;
}

//结论，不要重写从基类继承而来的非虚函数
