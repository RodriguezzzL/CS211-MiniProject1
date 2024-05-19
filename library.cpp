#include "library.h"
#include <iomanip>
void display(const Enrollment a[],unsigned n){
cout << setw(22) << "No" << setw(10) << "Some" << setw(9) << "BA OR" << endl;
cout << "Major" << setw(20) << " College" << setw(3) <<" College" <<setw(8) << " Above" << endl;
cout << "=========================================" << endl;
for (int i = 0;i < n; i++){
  cout << enrollment[0].Major <<setw(6) << enrollment[0].noCollege<< "%" << setw(8) << enrollment[0].partCollege<<"%" << setw(7) << enrollment[0].aboveCollege<< "%" << endl;
  
}}
double search(const Enrollment a[],unsigned n,string major,string catagory){

  for(int i =0; i < n;i++){
    if (a[i].Major == major){
      
    }
      
  }
}
void setValueTest(){
  enrollment[0].Major = "Computer science";
  enrollment[0].noCollege = 25;
  enrollment[0].partCollege = 15;
  enrollment[0].aboveCollege = 60;
  
}
  