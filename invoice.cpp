#include "invoice.h"


double Invoice::calcStudent(Student stud) //Nick Bunge
{
    reciept += "Name: " + stud.getFirstName() + " " + stud.getLastName() + "\n";
    reciept += "Email: " + stud.getEmail() + "\n";
    reciept += "Address: " + stud.showHomeAddress() + "\n";
    reciept += "Grade level: " + stud.getGradeLevel() + "\n";
    
    if (stud.getLivingOnCampus())
    {
        reciept += "Housing status: Living on campus\n";
    } else
    {
        reciept += "Housing status: Living off campus\n";
    }

    reciept += "GPA: " + to_string(stud.getGPA()) + "\n";
    reciept += "CuID: " + stud.getCuID() + "\n\n";

    invoiceStud = stud;
    classesUsed[0] = true;
}




double Invoice::calcMotorcycle(Motorcycle motor, int permitType, int days)  //Nick Bunge
{
    reciept += "Make: " + motor.getMake() + "\n";
    reciept += "Model: " + motor.getModel() + "\n";
    reciept += "Year: " + to_string(motor.getYear()) + "\n";
    reciept += "License Plate: " + motor.getLicensePlate() + "\n";
    reciept += "Color: " + motor.getColor() + "\n";
    
    if (motor.getHasThreeWheels())
    {
        reciept += "Type: Trike (3 wheels)\n";
    } else
    { reciept += "Type: Motorcycle (2 wheels)\n";}
    
    invoiceMotor = motor;
    permit = permitType + 1; //to accounbt for that motorcylces dont have annual permit
    if (permitType = 2)
    {numDays = days;}
    classesUsed[6] = true;
 
}

double Invoice::calcPermitCost()
{

double totalCharge;

switch (permit)
{
case 1:
    totalCharge = 120.00; 
    break;
case 2:
    totalCharge = 70.00;
    break;
case 3:
    totalCharge = 7.00 * numDays;
    break;
}





if (classesUsed[0]) //Student
{ 
    if (invoiceStud.getGPA() >= 3.0)    //discount if student has high gpa
    {
        totalCharge *= 0.9;
    }
}

if (classesUsed[6]) //Motorcylce
{
    if (invoiceMotor.getHasThreeWheels()) //25% charge if it is a trike
    {
        totalCharge *= 1.25;
    }
}

    return totalCharge;
}



string Invoice::printInvoice()
{
    return reciept;
}