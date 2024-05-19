#include <iostream>
#include <iomanip>
#include "library.cpp"
using namespace std;

struct Enrollment{
string Major;
float noCollege;
float partCollege;
float aboveCollege;
};
Enrollment enrollment[29];
Enrollment test;

void display(const Enrollment a[],unsigned n);
void setValueTest();
