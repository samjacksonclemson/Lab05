#include <iostream>
#include <vector>
#include "DivSales.h"


double DivSales::totalSales = 0;    //initializes the static variabgle totalSales to 0 at start of program

void DivSales::setSales(double q1, double q2, double q3, double q4)
{
    sales[0] = q1;
    sales[1] = q2;
    sales[2] = q3;
    sales[3] = q4;
 
    divSales = q1 + q2 + q3 + q4;   //updates divSales for this instance
    totalSales += divSales;         //updates totalSales for all instances of this class
}  