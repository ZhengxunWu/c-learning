/*动态申请内存操作符 new
new 类型名T （初始化参数列表）
程序执行期间，申请用于存放T类型对象的内存空间，并依初值列表赋以初值
结果值：T类型的指针，指向新分配的内存；失败：抛出异常
释放内存操作符delete
delete 指针p （即想释放的地址）
p必须是当初曾经用new申请的地址
*/
#include <iostream>
using namespace std;
class Point {
  public:
    Point(): x(0),y(0){
      cout<<"Default Constructor called."<<endl;
    }
    Point(int x,int y): x(x), y(y) {
      cout<<"Constructor called."<<endl;
    }
    ~Point(){cout<<"Destructor called."<<endl;}
    int getX() const {return x;}
    int getY() const {return y;}
    void move(int newX,int newY){
      x=newX;
      y=newY;
    }
  private:
    int x,y;
};
int main(){
  cout<<"Step one:"<<endl;
  Point *ptr1=new Point;//调用默认构造函数
  //...使用ptr1
  delete ptr1;//调用析构函数,注意：delete一定是释放了指针指向内存空间存储的
  //对象，一定不是删除了这个指针自己,所以ptr1依旧存在可以被赋值
  cout<<"Step two:"<<endl;
  ptr1=new Point(3,4);
  delete ptr1;
  return 0;
};
