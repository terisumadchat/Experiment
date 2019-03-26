
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

    int main()
    {
    
    	int ticketPrice;
    	int ticketSold;
    	int totalSales;
    
	cout << "Ticket Price: \n";
	cin >> ticketPrice;
	
	cout<< "No. of Tickets Sold: \n";
	cin>> ticketSold;
	
	totalSales=ticketPrice*ticketSold;
	cout<< "--------------------------------------------- \n"; 
	cout << "TOTAL SALES: "<<totalSales<<"$"<<endl;
	cout<< "--------------------------------------------- \n";  
        getch;
        return 0;
    }

