/* Size of oprator */


#include <iostream>
#include <climits>         // climits are used for integer types
                                        // Similar info for floating point numbers
                                        // is contained in <cfloat>
using namespace std;

 int main(){
    
     cout << "sizeof information" << endl;
     cout << "======================" << endl;
     
     cout << "char " << sizeof(char) << " bytes " << endl;
     cout << "int " << sizeof(int) <<" bytes" << endl;
     cout << "unsigned int " << sizeof(unsigned int) << endl;
     cout << "short " << sizeof(short) << endl;
     cout << "long " << sizeof(long) <<endl;
     cout << "long long " << sizeof(long long) << endl;
     
      cout <<"=============================" << endl;

     cout << "float " << sizeof(float) << " bytes." << endl;
     cout << "double " << sizeof(double) << " bytes." << endl;
     cout << "long double " << sizeof(long double) << "bytes." << endl;
     
    // use value defined in <climits>]
    cout <<"============================" << endl;
    
    cout <<"Minimum values" <<endl;
    cout << "char " << CHAR_MIN << endl;
    cout << "int " << INT_MIN << endl;
    cout << "short " << SHRT_MIN <<endl;
    cout << "long " << LONG_MIN << endl;
    cout << "long long " << LLONG_MIN << endl;
     
    // Using MAX values in <climits>
    
    cout << "==========================" << endl;
    
    cout << "Maximum values " << endl;
    cout << "char " << CHAR_MAX << endl;
    cout << "int " << INT_MAX << endl;
    cout << "short " << SHRT_MAX << endl;
    cout <<"long " << LONG_MAX << endl;
    cout <<"long long " << LLONG_MAX << endl;
    
    // Finding out the size of variables
    
    cout<<"=============================" << endl;
    
    int age (20);
    cout<<"age " << sizeof age  << endl;
    float wage (22.1);
    cout << "wage " << sizeof wage <<endl;
    
    
    
     
     
     
     
     
     
     return 0;
 }