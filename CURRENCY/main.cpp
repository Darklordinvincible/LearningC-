// CONVERT US DOLLAR TO RUPEES
/* psuedocode 
 * Display the welcome message 
 * Prompt user to enter the number of dollars.
 * Display the converted dollar to rupees
*/

#include <iostream>
using namespace std;

 int main(){
     
     const double indian_rupees_per_dollar {73.18};
     
     cout << "Welcome to dollar to rupees convertor " << endl;
     cout << " \nEnter the value of dollar you want us to convert: ";
     
     double dollar {0.0};
     double indian_rupees {0.0};
     
     cin >> dollar;
     
      indian_rupees = (indian_rupees_per_dollar*dollar);
      
     cout <<  indian_rupees << " rupees is equivalant to " << dollar << " dollar." << endl;
     
     
     
     
     
     
     
     
     
     cout << endl;
     return 0;
 }