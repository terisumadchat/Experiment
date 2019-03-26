
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

    int main()
    {
    
    	double mass;
    	double volume;
    	double density;
    
	cout << "Mass (in g): \n";
	cin >> mass;
	
	cout<< "Density (in g/cm^3): \n";
	cin>> density;
	volume=(mass/density)/4;
	cout<< setprecision(2)<<fixed;
	
	cout << "Volume: "<<density<<" cm^3."<<endl;
        getch;
        return 0;
    }

