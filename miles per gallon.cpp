#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int gallonGas = 12;
    int milesTillE = 350;
    float mpg;
    
    mpg = milesTillE / gallonGas;
    cout << "The car gets " << mpg <<" miles per gallon. \n";
    system("PAUSE");
    return EXIT_SUCCESS;
}
