#ifndef INVOICE_H_
#define INVOICE_H_
#include "student.h"
#include "motorcycle.h"


class Invoice 
{
private:
    bool classesUsed[8] {false, false, false, false, false,false,false,false};
    /* 
    Index
    0       Student
    1       Employee
    2       Visitor
    3       Vendor
    4       Car
    5       Low Emission Vehicle
    6       Motorcycle
    7       Moped
    */
   int permit;
   /*  
    1 = Annual Permit
    2 = Semester 
    3 = Daily
   */
    int numDays;
    string reciept {""};
    Student invoiceStud;
    Motorcycle invoiceMotor;

public:
    void calcStudent(Student);
    void calcMotorcycle(Motorcycle, int, int);
   // double calcEmployee(Employee);
    // double calcVisitor(Visitor);
   // double calcVendor(Vendor);
    //double calcCar(Car);
    string printInvoice();
    double calcPermitCost();
};

#endif