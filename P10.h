// Header file for project 11
// Contains the class description
//
// Need guards to make sure this header file
// is included one time only
//
#ifndef P10_HEADER
#define P10_HEADER

#include <string>
#include <cstdlib>

using namespace std;

// enumeration data type to use in switch statement in
// helper function WriteNameFormat
enum Months{JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};

// Class declaration for Date

class Date
{
    private:        // private members accessed by helper functions
        int month;      // month of the date as a number
        int day;        // day of the date as a number
        int year;       // year of the date as a number

    protected:  // protected members here - none required

    public:     // public members here - helper functions
        // ************** constructors
        
        // default constructor -set date to 1/1/1900
        Date();             

        // parameterized constructor - use user provided values
        Date(int initMonth, int initDay, int initYear);      
        
        //**************  Transformers
        void SetDate(int m, int d, int y);

        //**************  observers
        
        // write out date in format of MM/DD/YYYY
        void WriteNumberFormat() const;

        // write out date in MONTH DAY, YEAR format
        void WriteNameFormat() const;

};  // end of class Date
#endif
