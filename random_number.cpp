#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    srand((unsigned)time(0));
    int ran;
    int cont1 = 0, cont2 = 0;

    for(int j=0; j<30; j++){

        ran = (rand()%99999)+1;

        if(ran%2 == 0){
            cont1++;
            cout << "KTM Duck 125   " << cont1 <<"\t"  <<ran<<endl;
        }
        else{
            cont2++;
            cout << "Computer   " << cont2<<"\t"  << ran <<endl;

        }
    }

    cout << "\nKTM Duck 125   "<<cont1 <<endl;
    cout << "Computer   " << cont2 <<endl;
}
