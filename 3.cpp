#include <iostream>
#include <conio.h>
#include<iomanip>
#include <math.h>
using namespace std;

    int main()
    {
   
    double AvgDlyBalance;
    double Interest;
    double dayA;
    double dayB;
    double netbalance;
    float payment;
    float interest;
    
    cout << "Bill to be paid: \n";
    cin >> netbalance;
    cout << "Days in the billing cycle: \n";
    cin >> dayA;
    cout << "Payment of the customer: \n";
    cin >> payment;
    cout << "Days before the cycle ends: \n";
    cin >> dayB;
   
  AvgDlyBalance=(netbalance*dayA-payment*dayB)/dayA;
  cout<< setprecision(2)<<fixed;
  cout<< "--------------------------------------------- \n"; 
  cout << "Average Daily Balance:"<<AvgDlyBalance<<"pesos"<<endl;
  interest=AvgDlyBalance*0.0152;
  cout<< "Interest:"<<interest<<endl;
cout<< "--------------------------------------------- \n"; 

    getch();
    return 0;
    }
