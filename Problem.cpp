#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //Declaration
    double volume, radius, area = 0, diameter, height;
    const double pi = 3.14159;  
    //inputs
    cin >> radius;
    cin >> height;
    //Calculations
    area = pi * radius * radius;
    volume = (1.0 / 3.0) * pi * pow(radius, 2) * height;  
    //Output
    cout << volume << endl;
    cout << area << endl;
    //system
    system("pause"); 
    return 0;
}
