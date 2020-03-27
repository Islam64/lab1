#ifndef CAR2_H_INCLUDED
#define CAR2_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class car
{
private:
int speed;
   string  Color;
   string  model;
public:


  car();
 car(int speed2,string color2,string model2);
void  printf();
 car(const car &car2);
 void setspeed(int speed2);
int  getspeed();
void  setmodel( string model2);
string  getmodel();
void  setColor(string color2);
string   getColor();


};


#endif // CAR2_H_INCLUDED
