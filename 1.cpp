
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

    int main()
    {
    
    	int box = 250;
	int sideline = 100;
	int premium = 50;
	int general = 25;
	int a= 5750, b = 28000, c=35750, d=18750; 
    	int total;
    
	cout << "Total sales in box tickets: " << box*a<<"$"<<endl;
	
	cout<< "Total sales in sideline tickets: "<<sideline*b<<"$"<<endl;
	cout << "Total sales in premium tickets: "<<premium*c<<"$"<<endl;
	cout << "Total sales in general admission tickets: "<<d*general<<"$"<<endl;
	
	total=( box*a)+(sideline*b)+(premium*c)+(d*general);
	cout<< "---------------------------------------------\n"; 
	cout << "TOTAL SALES IN TICKETS: "<<total<<"$"<<endl;
	cout<< "---------------------------------------------\n"; 
        getch;
        return 0;
    }
