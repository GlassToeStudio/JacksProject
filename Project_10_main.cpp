// *************************************************************
// main function declaration to run the class funcitons
// DO NOT MODIFY THIS FILE
// **************************************************************

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "P10.h" 

using namespace std;

int main()
{
    cout << "Date in name format is extra credit for 5 points\n";
    cout << "Number Format(required):   11/15/2017\n";
    cout << "Name Format(extra credit): November 15, 2017\n";
    // construct two objects of the class - one using 
    // default date the other using paramertized constructor
    cout << string(40,'*') << endl;
    cout << "Constructor Test\n";
    cout << "      Default Constructor\n";
    Date date1;
    date1.WriteNumberFormat();
    date1.WriteNameFormat();
    cout << "      Parameterized Constructor\n";
    Date date2(6,20,1970);
    date2.WriteNumberFormat();
    date2.WriteNameFormat();

    cout << string(40,'*') << endl;
    cout << string(40,'*') << endl;

    // verifying set date function
    cout << "Set Date Test\n";
    date1.SetDate(10,6,2000);
    date1.WriteNumberFormat();
    date1.WriteNameFormat();
    cout << string(40,'*') << endl;
    cout << string(40,'*') << endl << endl;

    cout << string(40,'*') << endl;
    cout << "Testing every month for correct output\n";
    cout << "--------------------------------------\n";
    
    cout << string(40,'*') << endl;
    for (int i = 1; i<=12; i++)
    {
        date1.SetDate(i,i,2017);
        date1.WriteNumberFormat();
        date1.WriteNameFormat();
        cout << string(40,'*') << endl;
    }
}
