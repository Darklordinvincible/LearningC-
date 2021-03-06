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

 int main(){
   using namespace std;
   
   cout << "Hello, welcome to jack carpet cleaning service." << endl;
   int small_rooms {0};
   int large_rooms {0};
   
   cout << "\nEnter the number of small rooms: ";
    cin >> small_rooms ;
    
    cout << "Enter the number of large rooms: ";
    cin >> large_rooms;
    
    // Cost of small and large rooms :
    
    const long int cost_small_room {25000};
    const long int cost_large_room {35000};
    long long int Total_cost {small_rooms * cost_small_room + large_rooms * cost_large_room};
  cout << "Cost of small rooms: " << small_rooms * cost_small_room << endl;
  cout << "Cost of large rooms: " << large_rooms * cost_large_room << endl;
  
  // Total cost :
   cout << "Total cost: " << Total_cost << endl;
   
 // Total Tax :
 const double Tax {0.06};
  cout << "Total tax: " << (small_rooms*cost_small_room + large_rooms*cost_large_room) * Tax << endl;
  
  // Total estimate cost:
  cout << "Total estimate cost: " <<  ((small_rooms * cost_small_room) + (large_rooms * cost_small_room)) +
   (((small_rooms*cost_small_room) + (large_rooms*cost_large_room)) * Tax)
   << endl;
   
  //Estimate valid :
  const int days {30};
  cout << "This estimate is valid for: " << days << "days." << endl;
  


   
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     return 0;
 }