#include<iostream>
#include<string>

using namespace std;

class Car {
public:
    string carname;
    string carmodel;
    int carcc;
public:


    int getcc (int cc){
        cc = carcc;
        return cc;
        }
};


int main(){

     Car ob;

    ob.carname = "BMW";

    cout << ob.carname;

    return 0;
}
