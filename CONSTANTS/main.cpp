// CONSTANTS 
/*    Psuedocode 
 * Promt the user to enter the number of  small rooms.
 * Promt the user to enter the number of large rooms.
 * DIsplay the price for small rooms.
 * Display the price for large rooms.
 * Display the total cost of both rooms.
 * Display the cost of the tax.
 * Display total estimate cost.
 * Expiries of the estimates. */
 
#include <iostream>

    using namespace std ;
    int main (){

   cout << "Hello , Welcome to Gyanshu's carpet cleaning service." << endl;
   cout << " \nHow many rooms you like to be cleaned? "  << endl;
   
   cout <<"======================================" << endl;

   cout << "Enter the number of small rooms: ";
   int Number_of_small_rooms {0};
   cin >> Number_of_small_rooms ;
   cout << "Enter the number of large rooms: ";
   int Number_of_large_rooms {0};
   cin >> Number_of_large_rooms;
   const int price_small_room {250}; 
   cout << "Cost of small rooms: " << Number_of_small_rooms * price_small_room << " rupee " << endl;
   const int price_large_room {300};
   cout << "Cost of large rooms: " << Number_of_large_rooms * price_large_room << " rupee " << endl;
   cout << "Total cost of small and large rooms: " << (Number_of_small_rooms* price_small_room) + (Number_of_large_rooms* price_large_room) << endl;
   const int Total_cost_both_rooms {Number_of_small_rooms*price_small_room + Number_of_large_rooms*price_large_room};
   const double Tax_rate {0.06};
   cout << "Total tax: " << Total_cost_both_rooms * Tax_rate << endl;
   cout << "=====================================" << endl;
   
   cout << "Total estimate price: " << (Total_cost_both_rooms + (Total_cost_both_rooms* Tax_rate)) <<endl;
   const int estimate_expires {30};
   cout << "This estimate is valid for " << estimate_expires << " days." << endl; 

 


    
     
     
     
     
     
     
     
     
     
     return 0;
 }