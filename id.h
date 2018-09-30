/*
homework 3
file: id.h
header file for class ID
Amir Yousef - COP3330 - Fall 2011
*/

#include <iostream>
#ifndef ID_H
#define ID_H

class ID
{
friend std::ostream& operator << ( std::ostream &, const ID & );      //output operator<< overloaded for the type ID
public:
ID ();                                                                //default constructor
ID ( const char * , int );                                            //2-argument constructor to initializes 2-data fields
ID ( const ID & );                                                    //copy constructor
const ID & operator = ( const ID & );                                 //assignment operator
~ID ();                                                               //destructor
void SetName ( const char * );                                        //sets the name field
void SetAge ( int );                                                  //sets the age field
const char * GetName () const;                                        //returns a const pointer to the name field
int          GetAge  () const;                                        //returns the age field by value
private:
const char* name_;
int age_;
};
#endif
