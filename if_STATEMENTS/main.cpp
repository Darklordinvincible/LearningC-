// Section 9. 
// if Statements:



#include <iostream>
using namespace std;

 int main(){
       
     int num{};
     const int min {10};
     const int  max {100};
     
     cout << " Enter a number between " << min << " and " << max << ":";
     cin >> num ;
     
     if ( num >= min ){
         
         cout << "\n=========== if statement 1=============" << endl;
         cout << num << " greater than or equal to " << min << endl;
        
        int differ {num - min};                                            // this variable is available only for this block.
        cout << num << " is " << differ << " greater than " << min << endl;
        
     }
       
    if (num <= max ) {
        cout << "\n============= if statement 2=============" << endl;
        cout << num << " is less than or equal to " << max << endl;
        
    int differ2 {max - num};
        cout << num << " is " << differ2 << " less than " << max << endl;
        
     }
     
     if (num >= min && num <= max){
         cout << "\n============== if statement 3============" << endl;
         cout << num << " is greater than " << min << " and " << " is less than "<< max << endl;
         cout << "This means statements 1 and 2 are  must also display!! " << endl;
     }
     
     if (num == min || num == max){
        cout << "\n============== if statement 4============" << endl;
        cout << num << " is equal to " << min << " and " << max << endl;
        cout << "This means all statements must be display!! " << endl;
     }
     
     
     
     
     
     
     
     
     
     
     
     return 0;
 }