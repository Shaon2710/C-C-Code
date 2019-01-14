#include <bits/stdc++.h>
using namespace std;

class Info
{
protected:
    string name ;
    string phn ;
    void setPhn(string phn)
    {
        this->phn = phn ;
    }
public :
    string get()
    {
        return name ;
    }
    string get(int x)
    {
        return phn ;
    }
};

class Teacher : public Info
{
private:
    int salary;
public :
    Teacher(string name, string phn, int salary)
    {
        this->name = name ;
        this->phn = phn ;
        this->salary = salary ;
    }
    int getSalary()
    {
        return salary ;
    }
};
class Student : public Info
{
private:
    double cgpa ;
public :
    Student(string name, string phn, double cgpa)
    {
        this->name = name ;
        this->phn = phn ;
        this->cgpa = cgpa ;
    }
    double getCgpa()
    {
        return cgpa ;
    }
};
int main()
{
    Student object1("Hemel","Axc",3.68) , object2("Shovon","BcX",3.38) ;
    cout << object1.get(3) << endl ;
    return 0;
}
