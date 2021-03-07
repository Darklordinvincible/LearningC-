// RELATIONAL OPERATORS

#include <iostream>
using namespace std;
 int main(){
         
     int num1{} , num2{};
     cout << boolalpha;
     
    /* cout << " Enter any 2 integer numbers: ";
     cin >> num1 >> num2;*/
     
    
   /*  cout << num1 << ">" << num2 << ":" << (num1 > num2) << endl;
     cout << num1 << ">=" << num2 << ":" << (num1 >= num2) << endl;
     cout << num1 << "<" << num2 << ":" <<(num1 < num2) << endl;
     cout << num1 << "<=" << num2 << ":" << (num1 <= num2) << endl;
 */
 
  const int lower {15};
  const int upper {20};


  cout << " Enter an integer which is greater than " << lower <<":";
  cin >> num1;
  cout << num1 << ">" << lower << (num1 > lower) << endl;
  
  
  cout << " Enter an integer which is less than: " << upper <<":";
  cin >> num2;
  cout << num2 << "<" << upper << (num2 < upper )<<endl;
  
  
  

     
     
     
     
     
     
     
     
     
     
     return 0;
 }