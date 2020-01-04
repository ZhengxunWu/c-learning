/*c++11引入移动构造，移动语义：源对象资源的控制权全部交给目标对象
与复制构造函数对应，需要用到移动构造函数

*/
#include <iostream>
using namespace std;
class IntNum{
  public:
    IntNum(int x=0): xptr(new int(x)){
     cout<<"calling constructor..."<<endl;
    };
    IntNum(const IntNum & n): xptr(new int(*n.xptr)){//复制构造函数
      cout<<"Calling copy constructor.."<<endl;
    };
    IntNum(IntNum && n): xptr(n.xptr){//移动构造函数
      n.xptr=nullptr;
      cout<<"Calling move constructor.."<<endl;
    };
    ~IntNum(){
      delete xptr;
      cout<<"Destructing.."<<endl;
    }
    int getInt(){return *xptr;}
  private:
    int *xptr;
};
IntNum getNum(){
  IntNum a;
  return a;
}
int main(){
  cout<<getNum().getInt()<<endl;
  return 0;
}