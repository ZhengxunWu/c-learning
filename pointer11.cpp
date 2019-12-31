/*动态创建多维数组
new 类型名T[第1维长度][第2维长度]...;
如果内存申请成功，new运算返回一个指向新分配内存首地址的指针
char (*fp)[3];
fp=new char[2][3];指向数组的指针
创建二维数组返回指向一维数组的指针

*/
#include <iostream>
using namespace std;
int main(){
  //返回的指向二维数组的指针cp,每次+1跳跃整个9*8的二维数组
  int (*cp)[9][8]=new int[7][9][8];
  for(int i=0;i<7;i++){
    for(int j=0;j<9;j++){
      for(int k=0;k<8;k++){
        *(*(*(cp+i)+j)+k)=(i*100+j*10+k);
      }
    }
  }
  for(int i=0;i<7;i++){
    for(int j=0;j<9;j++){
      for(int k=0;k<8;k++){
        cout<<cp[i][j][k]<<" ";
      }
      cout<<endl;
    }
    cout<<endl;
  }
delete[] cp;
return 0;
}