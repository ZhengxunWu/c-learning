/*vector 动态数组封装成类，避免对每一个类（比如Point)写一个封装类(Point[])
的重复
作用：
封装任何类型的动态数组，自动创建和删除
数组下标越界检查
定义:vector<元素类型> 数组对象名（数组长度）；
eg：vector<int> arr(5)
使用：对数组元素的引用 与普通数组具有相同形式：vector对象名[下标表达式]
vector数组对象名不表示数组首地址
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
 unsigned n;
 cout<<"n=";
 cin>>n;
 double average(const vector<double> &arr);
 vector<double> arr(n);
 cout<<"Please input"<<n<<"real numbers:"<<endl;
 for(unsigned i=0;i<n;i++){
   cin>>arr[i];
 }
cout<<"Average="<<average(arr)<<endl;
return 0;
}
double average(const vector<double> &arr){
 double sum=0;
 for(unsigned i=0;i<arr.size();i++){
   sum+=arr[i];
 }
 return sum/arr.size();
}