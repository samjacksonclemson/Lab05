#include <iostream>
#include <vector>
#include <iomanip>
#include "DivSales.h"
using namespace std;

int main()
{

vector<DivSales> division(4);   //holds all the different divisions for the corporation
vector<double> quarters(4);     //holds the sales for all the 4 quarters for each division
double sales; 

for (int i = 0; i < 4; ++i)
{
    cout << "Enter sales data for Division " << i + 1<< endl;
    
    for (int j = 0; j < 4; ++j)
    {
        
        cout << "Quarter " << j + 1 << ": ";
        cin >> sales;
        quarters[j] = sales;
        while (sales < 0)
        {
            cout << "Please enter 0 or greater: ";
            cin >> sales; 
            quarters[j] = sales;
        }
    }
    division[i].setSales(quarters[0], quarters[1], quarters[2], quarters[3]);   //stores the sales from each quarter into the divison class
}

cout << fixed;
cout << setprecision(2) << "Total Sales for Division 1: $" << division[0].getDivSales() << endl;
cout << setprecision(2) << "Total Sales for Division 2: $" << division[1].getDivSales() << endl;
cout << setprecision(2) << "Total Sales for Division 3: $" << division[2].getDivSales() << endl;
cout << setprecision(2) << "Total Sales for Division 4: $" << division[3].getDivSales() << endl;
cout << setprecision(2) << "Total Corporate Sales: $" << division[0].getCorpSales() << endl;

    return 0;
}
