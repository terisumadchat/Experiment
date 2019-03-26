
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

    int main()
    {
    
    	double mass;
    	double volume;
    	double density;
    
	cout << "Mass (in kg): \n";
	cin >> mass;
	
	cout<< "Volume (in m^3): \n";
	cin>> volume;
	density=mass/volume;
	cout<< setprecision(2)<<fixed;
	
	cout << "Density: "<<density<<" kg/m^3."<<endl;
        getch;
        return 0;
    }

