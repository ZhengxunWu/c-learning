#include <iostream>
using namespace std;
//int *intPart是定义一个指向整形的指针变量intPart必须接收pointer
void splitFloat(float x, int *intPart, float *fracPart){
  *intPart=static_cast<int>(x);
  *fracPart=x-*intPart;
}
int main(){
  cout<<"Enter 3 flot point number:" << endl;;
  for(int i=0;i<3;i++){
    float x, f;
    int n;
    cin >> x;
    splitFloat(x, &n, &f); //变量地址做实参，&+变量名：取址操作，使得别的函数对于变量
    //的改变操作能直接反映到变量内容上，类似于引用传递，是双向传递，弥补c++一个函数无法
    //返回两个值
    cout<<"Integer part=" << n << "Fraction part=" << f << endl;
  }

 
  return 0;
}