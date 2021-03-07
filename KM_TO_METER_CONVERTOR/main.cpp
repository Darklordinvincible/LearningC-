#include <iostream>
using namespace std;

 int main(){

     const double meter_per_kilometer {1000.00};
     
     cout << " Welcome  to kilometer to meter convertor " <<endl;
     cout << "\nEnter the value of kilometer you want to convert: ";
     
     
     double kilometer {0};
     double meter{0};
     
     cin >> kilometer;
     
     meter = meter_per_kilometer*kilometer;
     
     cout << meter << " m is equivalant to " << kilometer <<" km " << endl;
     
     cout << "\nThank you for using our tool. "<< endl;






     return 0;
 }