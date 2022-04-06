#ifndef DIVSALES_H_
#define DIVSALES_H_

#include <vector>

class DivSales
{

private:
    std::vector<double> sales {4};
    double divSales;
    static double totalSales;   //holds total amount of divSales from all inheritances of this class

 public:
    
    DivSales() = default;
    
    void setSales(double q1, double q2, double q3, double q4);
    double getDivSales() {return divSales;};
    static double getCorpSales() {return totalSales;};


};



#endif