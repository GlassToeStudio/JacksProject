// **************************************************************
// **************************************************************
//
// **********  DO NOT MODIFY ANYTHING IN THIS SECTION
//
// solution cpp file for project 10
// all helper function definitions go in this file

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "P10.h"

using namespace std;

// **************************************************************
// **************************************************************
//
// **************************************************************
// **********   PUT ALL FUNCTION DEFINITIONS BELOW THIS COMMENT
//
// Function definitions start here.  This is what you will write

// ************** CONTRUCTORS **************
// To declare a constructor for a class defined indside a header (.h) file. 
// You must define the class Type first. i.e Date:: since Date is the class type (name)
// This will allow the usr to create a new instance if Date in their code. Date someDate = new Date();

// INSTRUCTIONS: A default constructor called Date() – default date is 1 / 1 / 1900
// This is a default constructor so it takes no parameters. The private members (month, day, year) are
// Set to some default value, but you have to write this, its not automatic. 

Date::Date() {
    month = 1; // These private members are declared in the header file.
    day = 1;
    year = 1900;
}


// INSTUCTIONS: A parameterized constructor Date(int, int, int) –
// initialize a Date object to the values provided when it is declared(i.e.Date myDate(1, 1, 1900);
Date::Date(int initMonth, int initDay, int initYear) {
    month = initMonth;  // Here we set each private member to the value passed into the function.
    day = initDay;
    year = initYear;
}

// ************** TRANSFORMERS **************
// Like the constructor, each Transfomer function must be defined by its class type Date::SetDate();
// The transformer will be called on an already created Date object and modify its private members.
// Date my Date = new Date();
// myDate.SetDate(1, 1, 1900);

//INSTRUCTIONS: A parameterized function SetDate(int,int,int) – this sets the date in a Date object
// (variable of the class Type Date) to the date specified
void Date::SetDate(int m, int d, int y) {
    month = m;  // Here we set each private member to the value passed into the function.
    day = d;
    year = y;
}




// ************** OBSERVERS *******************
// Like the constructor and transformer, each function must be defined by its class type Date::WriteNumberFormat();

// INSTRUCTIONS: WriteNumberFormat() – writes out the date in format MM/DD/YYYY

// ADDITIONAL HINT: To output days or months less than 10 with a leading 0, use cout << setfill(‘0’); and
// then output the month or day in a field width of 2 right justified.After printing out the date, use
// cout << setfill(‘ ‘); to set the fill character back to a space
void Date::WriteNumberFormat() const
{
    // mm/dd/yyyy - Desired output format.
    cout << setw(2)                 // set width of output (setw(2)) sets the width to 2 spaces. 
        << setfill('0')             // set fill of blank spaces (setfill('0')) will fill any blank space with a 0. ie. 1 becomes 01
        << month;
    cout << "/";
    cout << setw(2) 
        << setfill('0') 
        << day;
    cout << setfill(' ');           // Reset the fill to a blank space as the year will always be 4 charactes long (probably unecessary).
    cout << "/";
    cout << year 
        << endl;                    // endl stops all output on this line, next output will be on a new line.
}

// following function is extra credit.  
// write out date in MONTH DAY, YEAR format

// INSTRUCTIONS: (extra credit – 5 points) The WriteNameFormat function uses the values of the private
// members month, day and year and outputs them in MonthName day, year format.To get
// the month name, use a switch statement using month as the switch expression and the
// enumerators provided in the header file as the case labels.
// enum Months{JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
void Date::WriteNameFormat() const
{
    switch (month)  // Ths will check the value in the private member month (1, 2, 3, etc)
    {
    case JAN:       // enums in c++ are integers, so a value of JAN is equal to 1 as defined in the header file.
                    // so when month = 1, this condition is met and the following code is executed.
        cout << "JAN";
        break;
    case FEB:
        cout << "FEB";  // This will print out "FEB"
        break;
    case MAR:           // When month = 3, this condition is met since MAR alos = 3.
        cout << "MAR";
        break;
    case APR:
        cout << "APR";
        break;
    case MAY:
        cout << "MAY";
        break;
    case JUN:
        cout << "JUN";
        break;
    case JUL:
        cout << "JUL";
        break;
    case AUG:
        cout << "AUG";
        break;
    case SEP:
        cout << "SEP";
        break;
    case OCT:
        cout << "OCT";
        break;
    case NOV:
        cout << "NOV";
        break;
    case DEC:
        cout << "DEC";
        break;
    default:
        cout << month;
        break;
    }

    // This prints the remaining portion of the date. Same as what we did above.
    cout << "/";
    cout << setw(2) 
        << setfill('0') 
        << day;
    cout << setfill(' ');
    cout << "/";
    cout << year 
        << endl;
}
