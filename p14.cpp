#include<vector>
#include<iostream>
int main(){
  std::vector<int> v={1,2,3};
  for(auto i=v.begin();i!=v.end();i++){
    std::cout<<*i<<std::endl;
  }
  for(auto e:v){
    std::cout<<e<<std::endl;
  }
}