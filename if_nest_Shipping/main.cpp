// if- nest statement 
// Example:

/*
 * Shipping cost calculator:
 * Ask the user for pakage dimension in inches.
 * length , breath and height should be the integers.
 * 
 * All dimension must be 10 inches or less or we cannot ship it
 * 
 * Base cost 2.50 rupees
 * if pakage volume is greater than 100 cubic inches then there is 10% surcharge 
 * if pakage volume is greater than 500 cubic inches then there is 25% surcharge.
 */




#include <iostream>
using namespace std;

 int main(){
     int length {};
     int breath {};
     int height {};
     cout << "================Welcome to Shipping calcultor================ " << endl;
     cout <<"Enter your package length , breath and height in inches with spaces between them: ";
     cin>> length >> breath >> height ;
      
     const int shipping_dimension {10};
     const double  base_cost {2.50};
     const int exceed_volume1 {100};
     const int exceed_volume2 {500};
     const double surcharge1 {0.01};
     const double surcharge2 {0.25};
     int package_volume {};
     package_volume = {length* breath*height};
     double total_cost {};
     total_cost = package_volume* base_cost;
     
     
     
     if (length> shipping_dimension || breath > shipping_dimension || height > shipping_dimension){
         cout << "Sorry! we cannot ship your package." << endl;
         
     } else {
         if( package_volume > exceed_volume1 ){
             total_cost = total_cost*surcharge1;
             cout <<"adding surcharge1" << endl;
         }else if(package_volume > exceed_volume2){
                  total_cost = total_cost*surcharge2;
                  cout << "adding surcharge2 " << endl;
             }
                  cout <<"Volume of your package is: " << package_volume << endl;
                  cout <<"Your shipping charges: " << total_cost << endl;
                  
         
         
         
         
     }
     
 
    
        
      









     
     
     
     
     
     
             
             
         
         
         
         
         
         
         
     
         
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     cout <<endl;
     return 0;
 }