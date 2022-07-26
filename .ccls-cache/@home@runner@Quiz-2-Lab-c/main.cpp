#include <iostream>

using namespace std;

class pointType{
private:
double x;
double y;

public:
pointType(double X=0.0, double Y=0.0){
  x = X;
  y = Y;
}
double getX(){
  return x;
}
double getY(){
  return y;
}
void setCordinates(double X, double Y){
  x = X;
  y = Y;
}
void print(){
  cout<<"X cordinate = "<<getX()<<endl;
  cout<<"Y cordinate = "<<getY()<<endl;
}

};

class circleType : public pointType{
private:
double r;


public:
circleType(double X=0.0, double Y=0.0, double R=0.0):pointType(X,Y){
  r = R;
}
void setRadius(double R){
  r = R;
}
double getRadius(){
  return r;
}
double getArea(){
double A;
  A = (3.1415*(r*r));
  return A;
}

double getCircumference(){
  double cir;
  cir = (2*r*3.1415);
  return cir;
}
void print(){
  cout<<"The center is : ";
  pointType::print();
  cout<<"The radius is : "<<getRadius()<<endl;
  cout<<"The area is : "<<getArea()<<endl;
  cout<<"The circumference is : "<<getCircumference()<<endl;
}
};

int main()
{
  circleType c1(5,4,7);
  circleType c2(3,9,2);
cout<<"First circle : "<<endl;
  c1.print();
cout<<"Second circle : "<<endl;
  c2.print();

  
}