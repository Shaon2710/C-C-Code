#include<iostream>
#include<stdio.h>

using namespace std;

class Rectangle{
  private :
      float height; //= 5
      float weidth; //= 6
  public:
    void setheigth(float h){ height = h;}
    void setweidth(float w){ weidth = w;}

    float getheight(){return height;} // 5
    float getweidth(){return weidth;} // 6

    float area(float hei, float wei){

      return hei*wei;
    }
};


int main(){

  Rectangle a;

  a.setweidth(5);
  a.setheigth(6);

  cout << a.area(a.getheight(), a.getweidth())<< endl;

  return 0;
  }
