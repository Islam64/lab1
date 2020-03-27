#include "car2.h"
#include <string>
#include <iostream>
using namespace std;
   car:: car()
    {
        cout<<"Встроенный конструтор"<<endl;
        speed = 320;
        Color = "white";
        model = "X5";
       printf();
    }
 car:: car(int speed2,string color2,string model2)
    {
     cout<<"\n Конструктор с параметрами "<<endl;
     speed = speed2;
     Color = color2;
     model = model2;
     printf();

    }


   void car:: printf()
   {
       cout<<" Модель: "<<model<<endl<<"Максимальная скорость: "<<speed<<endl<<"Цвет : "<<Color<<endl;
   }

   car:: car(const car &car2)
    {
 cout<<"\n Конструктор копирования "<<endl;
    speed = car2.speed;
    Color = car2.Color;
    model = car2.model;

   printf();

        }
;
void car:: setspeed(int speed2)
{
    speed = speed2;
}
int car:: getspeed()
{
    return speed;
}
void car:: setmodel( string model2)
{
    model = model2;
}
string car:: getmodel()
{
    return model;
}
void car:: setColor(string color2)
{
    Color = color2;
}
string car::  getColor()
{
    return Color;
}


