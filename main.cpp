#include <iostream>
#include  "car2.h"
#include  <string>

using namespace std;

int main()
{
setlocale(LC_ALL,"RUS");
    string model,Color;
    int speed;

cout<<"¬ведите модель,максимальную скорость, цвет машины: ";
cin>>model;
cout<<endl;
cin>>speed;
cout<<endl;
cin>>Color;
cout<<endl;
car bmw1;
    car bmw(240,"blue","five");
    bmw.setspeed(speed);
    bmw.setmodel(model);
    bmw.setColor(Color);
    car bmw2(bmw);
cout<<"\n Mетод set"<<endl;
    bmw.printf();
    return 0;

}




