/* The Circle class (All source codes in one file) (CircleAIO.cpp) */
#include <iostream>    // using IO functions
#include <string>      // using string
using namespace std;
class Circle {
private:
   double radius;      // Data member (Variable)
   string color;       // Data member (Variable)
public:
   // Constructor with default values for data members
   Circle(double r = 1.0, string c = "red") {
      radius = r;
      color = c;
   }
   double getRadius() {  // Member function (Getter)
      return radius;
   }
   string getColor() {   // Member function (Getter)
      return color;
   }
   double getArea() {    // Member function
      return radius*radius*3.1416;
   }
};   // need to end the class declaration with a semi-colon
// Test driver function
int main() {
   // Construct a Circle instance
   Circle c1(1.2, "blue");
   cout << "Radius=" << c1.getRadius() << " Area=" << c1.getArea()
        << " Color=" << c1.getColor() << endl;
   // Construct another Circle instance
   Circle c2(3.4); // default color
   cout << "Radius=" << c2.getRadius() << " Area=" << c2.getArea()
        << " Color=" << c2.getColor() << endl;
   // Construct a Circle instance using default no-arg constructor
   Circle c3;      // default radius and color
   cout << "Radius=" << c3.getRadius() << " Area=" << c3.getArea()
        << " Color=" << c3.getColor() << endl;
   return 0;
}


/**#include<iostream>
#include<stdio.h>

using namespace std;

class student {

private:
    string name;
    long ID;
    double mark;
public :
    void getname(string N){ name = N;}
    void getid(int id){ ID = id; }
    void getmark(double mk){mark = mk;}
    string setname(){return name;}
    int setid(){ return ID;}
    double setmark(){return mark;}

};

int main(){

    student s1;

    string n;
    int i;
    double m;

    cout << "Input your Name : ";
    cin >> n;
    s1.getname(n);
    cout << "Input your ID : ";
    cin >>i;
    s1.getid(i);
    cout << "Input your Mark : ";
    cin >>m;
    s1.getmark(m);

    cout << "Name : "<<s1.setname()<< endl;
    cout << "ID : "<<s1.setid()<< endl;
    cout << "Mark : "<<s1.setmark()<< endl;

    return 0;

}**/

