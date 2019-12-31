/*分配和释放动态数组
分配： new 类型名T [数组长度]
数组长度可以是任何证书类型表达式,在运行时计算
释放：delete[] 数组名p
释放指针p所指向的数组
p必须是用new分配得到的数组首地址
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
  Point *ptr=new Point[3];
  ptr[0].move(5,10);
  ptr[1].move(2,3);
  cout<<"Deleting.."<<endl;
  delete[] ptr;//必须有中括号，删除整个对象数组，否则只释放指针地址的内存空间，
  //导致另一个内存空间泄漏
  return 0;
}