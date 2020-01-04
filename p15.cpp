#include<vector>
#include<iostream>
#include<cassert>
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
class ArrayOfPoints {
  public:
    ArrayOfPoints(int size):size(size){
      points=new Point[size];
    }
    ArrayOfPoints(const ArrayOfPoints& pointsArray);
    ~ArrayOfPoints(){
      cout<<"Deleting.."<<endl;
      delete[] points;
    }
    //element返回值type是指向point的引用，不是副本，才能真正
    //改变point的值
    Point& element(int index){
      assert(index>=0&&index<size);
      return points[index];
    }

  private:
    Point *points;
    int size;
}; 

//deep copy
ArrayOfPoints::ArrayOfPoints(const ArrayOfPoints& v){
  size=v.size;
  points=new Point[size];
  for(int i=0;i<size;i++){
    points[i]=v.points[i];
  }
}