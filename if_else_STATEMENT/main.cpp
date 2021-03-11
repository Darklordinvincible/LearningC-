// SECTION 9
// if-else STATEMENTS


#include <iostream>
using namespace std;

 int main(){
     int num{};
     const int target {10};
     
     cout << "Enter a number and i'll compare it to " << target << ":";
     cin >> num;
     
     if  (num >= target){
         cout <<"\n============Statement 1==============" << endl;
         cout << num << " is greater than or equal to " << target << endl;
         
         int differ {num-target};
         cout << num << " is " << differ << " greater than " << target << endl;
         
     }else{
         
         cout << "\n=================================" << endl;
         cout << num << " is less than " << target << endl;
         int differ2 { target - num};
         cout << num << " is " << differ2 << " less than " << target << endl;
         
         
         
         
     } 
       
     
     
     
     
     
     
     
     
     
     
     
     
     
     return 0;
 }