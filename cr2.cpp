/*可用using语句继承基类构造函数，但是只能初始化从基类继承的成员
语法；using B::B;

*/
#include <iostream>
using namespace std;
class B{
  public:
  B();
  B(int i);
  ~B();
  void print() const;
  private:
  int b;
};

B::B() {
  b=0;
  cout<<"B's default constructor called."<<endl;
}
B::B(int i){
  b=i;
  cout<<"B's constructor called."<<endl;
}
B::~B(){
  cout<<"B's destructor called."<<endl;
}

void B::print() const {
  cout<<b<<endl;
}

class C:public B {
public:
 C();
 C(int i,int j);
 ~C();
 void print() const;
 private:
 int c;
};

C::C(){
  c=0;
  cout<<"C's default constructor called."<<endl;
}
C::C(int i,int j):B(i),c(j){
  cout<<"C's constructor called."<<endl;
}
C::~C(){
  cout<<"C's destructor called."<<endl;
}

int main(){
  C obj(4,5);
  obj.print();
  return 0;
}
