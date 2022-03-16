#include "Student.h"
#include <cstring>
#include <iostream>
using namespace std;

// Assign studentId and name
void Student:: assignDetails(int stdId , char stdName[]) {
  studentId = stdId ;
  strcpy(name,stdName) ; 
  
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID : "<<studentId << endl ;
  cout << "Name : " << name << endl;
}
