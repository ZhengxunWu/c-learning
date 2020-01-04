#include <iostream>
#include "complex.h"

using namespace std;

//原本就有，不是在函数内新创建的local variable,可以return by value
//return type 设计成ostream& 而不是void，是为了方便和支持
//cout<< xxx << yyy , cout<<xxx必须有和cout一样的type才能继续连续使用
//故设计成ostream的返回类型
ostream&
operator<< (ostream& os, const complex& x)
{
  return os << "(" << real (x) << "," << imag (x) << ")" ;
}

int main(){
  complex c1(1,2);
  complex c2(5,2);
  cout << c1+c2;
  return 0;
}
