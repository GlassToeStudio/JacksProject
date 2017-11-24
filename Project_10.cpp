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
Date::Date() {
    month = 1;
    day = 1;
    year = 1900;
}

Date::Date(int initMonth, int initDay, int initYear) {
    month = initMonth;
    day = initDay;
    year = initYear;
}

// ************** TRANSFORMERS **************
void Date::SetDate(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}




// ************** OBSERVERS *******************

void Date::WriteNumberFormat() const
{
    // mm/dd/yyyy
    cout << setw(2) << setfill('0') << month;
    cout << "/";
    cout << setw(2) << setfill('0') << day;
    cout << setfill(' ');
    cout << "/";
    cout << year << endl;
}

// following function is extra credit.  
// write out date in MONTH DAY, YEAR format
void Date::WriteNameFormat() const
{
    switch (month)
    {
    case JAN:
        cout << "JAN";
        break;
    case FEB:
        cout << "FEB";
        break;
    case MAR:
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
    cout << "/";
    cout << setw(2) << setfill('0') << day;
    cout << setfill(' ');
    cout << "/";
    cout << year << endl;
}
