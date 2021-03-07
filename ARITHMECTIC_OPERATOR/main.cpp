/* ARTHMETIC OPERATOR
 * +  addition
 * -  subtraction
 * *  multiplication
 * /  division
 *% modulo or reminder ( only work with integers)
 *  +,-,* and / operators are overloded to work with multiple types such as int , double etc.
 * % only for integer types
 */

#include <iostream>
using namespace std;

 int main(){
   
     int num1 {200};
     int num2 {100};
     
     //cout << num1 << "+" << num2 << " = " << num1 + num2 << endl;
 
 
     int result {0};
     result = num1+num2;
    // we can do another thing int result {num1+num2}; , then we get the same result.
     
     cout << num1 << "+" << num2 <<"=" << result << endl;
     
     result = num1-num2;
     cout << num1 << "-" << num2 << "=" << result << endl;
     
     result = num1*num2;
     cout << num1 << "*" << num2 << "=" << result << endl;
     
     result = num1/num2;
     cout << num1 << "/" << num2 << "=" << result << endl;
     
     result = num2/num1;
     cout << num1 << "/" << num2 << "=" << result << endl; // be careful 
    
    result = num1%num2;
    cout << num1 <<"%" <<num2 << "=" << result << endl;
 

    num1 = 10;
    num2 =   3;
    
    result = num1%num2;
    cout << num1 <<"%" << num2 <<"=" << result << endl;
    
    //PEMDAS = Paranthesis Exponent Multiplication Divide Addition Subtraction
    
     result = num1*100 + num2;
     
     cout << 5/10 << endl;
     cout << 5.0/10.0 << endl;
     cout << endl;
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     return 0;
 }