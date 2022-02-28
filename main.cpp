//Nick Bunge, Sam Jackson, Jonathan Breen, Riley Westerman
#include <iostream>
#include <string>

using namespace std;

#include "motorcycle.h"
#include "student.h"
#include "invoice.h"
 
 
int main()
{
	Invoice invoice;
	int personChoice;
	
	cout << "\nPlease enter the # corressponding to your status: " << endl;
	cout << "1 - Student" << endl;
	cout << "2 - Employee" << endl;
	cout << "3 - Visitor" << endl;
	cout << "4 - Vendor" << endl;
	cout << "\nEnter menu choice: ";
	cin >> personChoice;
	
	while(personChoice < 1 || personChoice > 4)
	{
		cout << "\nInvalid choice. \nPlease select the number 1-4 ";
		cout << "corresponding to your status: " << endl;
		cout << "1 - Student\n2 - Employee\n3 - Visitor\n4 - Vendor" << endl;
		cout << "\nEnter menu choice: ";
		cin >> personChoice;
	}
	
	
	
	if (personChoice == 1)     //STUDENT ---Nick Bunge
	{
		Student student;
		string userInput;
		homeAddress add;
		double gpa;
		
		
		cout << "Please enter your first name: ";
		cin >> userInput;
		student.setFirstName(userInput);
		
		
		
		cout << "Please enter your last name: ";
		cin >> userInput;
		student.setLastName(userInput);
		
		
		
		cout << "Enter your email address: ";
		cin >> userInput;
		student.setEmail(userInput);
		
		while (!student.setEmail(userInput))
		{
			cout << "Invalid Input.\nPlease enter your email address \"___@____.___\": ";
			cin >> userInput;
			student.setEmail(userInput);
		}
		
		cout << "Are you living on Campus? Enter \"y\" or \"n\": ";
		cin >> userInput;
		student.setLivingOnCampus(userInput);
		


		while (!student.setLivingOnCampus(userInput))
		{
			cout <<"Invalid input.\nAre you living on Campus? Enter \"y\" or \"n\": ";
			cin >> userInput;
			student.setLivingOnCampus(userInput);
		}
		
		cout << "Enter street address (Ex: 1000 Oak St.): ";
		cin.ignore();
		getline(cin, userInput);
		
		string num;
		string street;
		bool streetFlag = false;
		
		for (int i : userInput)
		{
			if (isnumber(i))
			{
				streetFlag = false;
				num += i;
			} 
			
			else if (isalpha(i) || streetFlag)
			{
				streetFlag = true;
				street += i;
			}
		}
		
		add.street = street;
		add.houseNumber = num;
		
		
		cout << "City: ";
		cin >> userInput;
		add.city = userInput;
		
		cout << "State: ";
		cin >> userInput;
		add.state = userInput;
		
		cout << "Zipcode: ";
		cin >> userInput;
		
		while (userInput.length() != 5)
		{
			cout << "Invalid zipcode. Please enter your zipcode again: ";
			cin >> userInput;
		}
		add.zipCode = userInput;
		student.setHomeAddress(add);
		
		
		
		cout << "Please enter your grade level (freshmen, sophmore, junior or senior): ";
		cin >> userInput;
		student.setGradeLevel(userInput);
		
		while (!student.setGradeLevel(userInput))
		{
			cout << "Invalid input. Please enter your grade level (freshmen, sophmore, junior or senior): ";
			cin >> userInput;
			student.setGradeLevel(userInput);
		}
		
		
		
		cout << "Please enter your GPA: ";
		cin >> gpa;
		student.setGPA(gpa);
		
		while (gpa > 4.0)
		{
			cout << "Invalid gpa. Please enter a gpa less than or equal to 4.0: ";
			cin >> gpa;
			student.setGPA(gpa);
		}
		
		
		
		cout << "Please enter your CuId (C########): ";
		cin >> userInput;
		student.setCuID(userInput);
		
		while (!student.setCuID(userInput))
		{
			cout << "Invalid CuID. Please enter your id. Starting with \'C\' followed by 8 characters (Ex: C12345678): ";
			cin >> userInput;
			student.setCuID(userInput);
		}
		
		invoice.calcStudent(student);
		
		
	} 
	
	else if (personChoice == 2)   //EMPLOYEE -- SAM JACKSON
	{
	
	
	} 
	
	else if (personChoice == 3)   //VISITOR
	{
	
	
	} 
	
	else if (personChoice == 4)   //VENDOR
	{
	
	}
	
	
	
	cout << "\nPlease enter the # corressponding to your vehicle: " << endl;
	cout << "1 - Car" << endl;
	cout << "2 - Low Emission Vehicle" << endl;
	cout << "3 - Motorcycle" << endl;
	cout << "4 - Moped" << endl;
	cout << "\nEnter menu choice: ";
	cin >> personChoice;
	
	while(personChoice < 1 || personChoice > 4)
	{
		cout << "\nInvalid choice. \nPlease select the number 1-4 corresponding to your status: " << endl;
		cout << "1 - Car\n2 - Low Emission Vehicle\n3 - Motorcycle\n4 - Moped" << endl;
		cout << "\nEnter menu choice: ";
		cin >> personChoice;
	}
	
	if (personChoice == 1)  //CAR -- SAM JACKSON
	{
	
	} 
	
	else if (personChoice == 2)   //LOW EMISSION VEHICLE
	{
	
	} 
	
	else if (personChoice == 3)   //MOTORCYCLE -- NICK BUNGE
	{
		Motorcycle motor;
		
		cout << "\nPlease enter the # corressponding to the permit you want: " << endl;
		cout << "1 - Semester;" << endl;
		cout << "2 - Daily" << endl;
		cout << "\nEnter menu choice: ";
		cin >> personChoice;
		
		while(personChoice < 1 || personChoice > 2)
		{
			cout << "\nInvalid choice. \nPlease enter the 1-2 corressponding to the permit you want: " << endl;
			cout << "1 - Semester\n2 - Daily" << endl;
			cout << "\nEnter menu choice: ";
			cin >> personChoice;
		}
		
		invoice.calcMotorcycle(motor, personChoice);

	}
	
	else if (personChoice == 4)    //MOPED
	{
		
	}
	
	cout << invoice.printInvoice() << endl;
	return 0;
}
