#include <iostream>
using namespace std;
int area(int);
int area(int ,int);
float area(float);
int area(int a){
    return a;
}
int area(int a,int b){
    return a*b;
}
float area(float r){
    return 3.144*r*r;
}
int main(){
  int side;
  int length,breadth;
  float radius;
  cout<<"Enter side"<<"\n";
  cin>>side;
  cout<<"Area "<<area(side)<<"\n";
  cout<<"Enter length , breadth"<<"\n";
  cin>>length>>breadth;
  cout<<"Area "<<area(length,breadth)<<"\n";
  cout<<"Enter radius"<<"\n";
  cin>>radius;
  cout<<"Area "<<area(radius)<<"\n";
  return 0;
}