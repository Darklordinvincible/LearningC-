// LOGICAL OPERATORS

#include <iostream>
using namespace std;

 int main(){
     
   /*  int num{};
     const int lower {10};
     const int upper {20};
     cout << boolalpha;*/
     
     // Question. Determine if an entered integer is between two other integers.
     // assume lower < upper.
     
    /* cout << " Enter a number between " << lower << " and " << upper << ":";
     cin >> num;
     
     bool within_bounds {true};
     within_bounds = { num>lower && num < upper};
     cout << num << " is between " << lower << " and " << upper << ":" << within_bounds << endl;
     
     
     */
     
     
     // Determine if an entered integer is outside two other integer.
     // assume lower < upper.
     
    /* cout << " Enter an integers outside than " << lower << " and  "  << upper <<" : " ;
     cin >> num;
     
     
     bool greater_than_both_integer{false};
     greater_than_both_integer = { num < lower ||  num > upper };

     cout << num << " is outside from " << " lower " << " and " <<" upper " << ":" <<  greater_than_both_integer << endl;*/
     
     // Determine if an entered integer is exactly on the boundary.
     // assume lower < upper.
     
     
    /* cout << " Enter an integer exactly on the boundary of " << lower << " and " << upper << ":";
     cin >> num;
     
     
     bool number_on_boundary { false};
     number_on_boundary = {num == lower || num == upper};
     
     cout << num << " is on the boundary of " << lower << " and " << upper << ":" << number_on_boundary << endl;*/
     
     
     // Determine is you need to wear a coat based on temperature and wind speed.
 cout << boolalpha;
 const int windspeed_for_coat {40};
 const double temperature_for_coat {15};
 double  temperatue {};
 int wind {};
 bool wear_coat {false};

cout << "\nEnter today's windspeed in (km/h): ";
 cin >>wind;

cout << " \nEnter today's temperature in (degree celsius): ";
cin >> temperatue;


 wear_coat = {temperatue <temperature_for_coat || wind > windspeed_for_coat };
 cout << " \nNeed to wear coat using OR ? " << wear_coat << endl;
 
 
 wear_coat = { temperatue < temperature_for_coat && wind >windspeed_for_coat };
 cout << "\n   Need to wear coat using AND ? " << wear_coat << endl;
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     return 0;
 }