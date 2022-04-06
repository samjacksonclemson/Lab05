#include <iostream>
#include <vector>
#include "DivSales.h"


double DivSales::totalSales = 0;

void DivSales::setSales(double q1, double q2, double q3, double q4)
{
    sales.push_back(q1);
    sales.push_back(q2);
    sales.push_back(q3);
    sales.push_back(q4);

    divSales = q1 + q2 + q3 + q4;
    totalSales += divSales;
}