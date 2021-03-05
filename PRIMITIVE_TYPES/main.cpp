// Premitives data types

#include <iostream>
 using namespace std;
 
 int main (){
     
/* Character type */

 char gyanshu_nagar {'G'};
  cout << "gyanshu_nagar is "<< gyanshu_nagar << endl;
 
 /* Integer Type*/
 
 unsigned short int  exam_score  {99};
  cout << "exam_score is " << exam_score << endl;
  
  int countries_represented {55};
   cout << "There was "<< countries_represented << " in my meeting " << endl;
   
 long people_in_florida (2010298274);
 cout <<"There are " << people_in_florida << " lives in florida" << endl;

  long long people_on_earth {7'000'000'000};
 cout << "There are " << people_on_earth << "on earth " << endl;

long long Distance_to_alpha_centauri {79999999999999};
 cout << "The distance from the earth to alpha centauri is " << Distance_to_alpha_centauri << endl;
 
 
 /*floating Type */
 
float my_car_payment {403.22};
cout << "My car payment is " << my_car_payment << " rupee" << endl;

double value_of_pi {3.14159};
 cout <<"Value of pi " << value_of_pi << endl;

long double large_amount {2.77e120};

 cout <<"large number " << large_amount << endl;

/* Boolean Type */

bool game_over { true};
cout << " The value of game over is " << game_over << endl;
 
 /* Overflow */
 
short value_1 {30000};
short value_2 {1000};
short Product { value_1*value_2};
cout << "product of value1 and value 2 is " << Product << endl;
 
 
 
 
 
     return 0;
 } 