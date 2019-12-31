/*this pointer:指向当前对象自己
隐含于class的每一个non-static成员函数中
Point类中的getX()中return x;实际上是return this->x;
*/
// class Fred;//前向引用声明
// class Barney{
//   Fred x; //错误，需要知道开辟的字节空间
// };
// class Fred {
//   Barney y;
// }

//正确使用两个类互相包含对方的对象，用对象指针进行动态内存分配
class Fred;
class Barney {
  Fred *x;
};
class Fred{
  Barney y;
}