// SECTION 8 CHALLANGE 
/*    
 * 
 * For this program i am using dollars and cents
 * Write a program that ask the user to enter the following 
 * An integer representing the number of cent .
 * 
 * you may assume that the number of cent entered is greater than or equal to zero
 * The program should then display how to provide that change to user
 * 
 * In  the US:
 * 1 dollar = 100 cents
 * 1 quater = 25 cents
 * 1 dime = 10 cents
 * 1 nickel = 5 cents
 * 1 penny = 1 cent
 * 
 * Psuedocode
 * Promt user to enter the value 
 * The change is will be as follows
 * change of dollar 
 * change of quater
 * change of dime 
 * change of nickel
 * change of penny
 */
 #include <iostream>
 using namespace std;
 
 int main(){
         
  const int per_dollar {100};
  const int per_quater{25};
  const int per_dime {10};
  const int per_nickel {5};
  const int per_penny {1};
  int cents {};
  
  cout << " Enter the number of cents yor have: ";
  cin >> cents;
  
  cout <<" The change of your cents are as follows:- " << endl;
  
  int balance{}; 
  int dollars{};
  int  quaters {};
  int dimes{}; 
  int nickel{}; 
  int pennies{};
  
  
  dollars = { cents / per_dollar};
  balance = {cents - (dollars* per_dollar) };
  
  cout << " Dollar: " << dollars << endl;
  
  quaters = { balance / per_quater };
  balance = {balance - ( per_quater*quaters)};
  cout << " Quater: " << quaters << endl; 
  
  dimes = { balance / per_dime};
  balance = { balance - (per_dime * dimes)};
  cout <<" Dimes: " << dimes << endl;
  
  nickel = {balance / per_nickel};
  balance = {balance - (per_nickel* nickel)};
  cout << " NIckels: " << nickel << endl;
  
  pennies = {balance / per_penny};
  balance = {balance- (per_penny*pennies)};
  cout << " Pennies: " << nickel << endl;
  
  
  
  
  
  
  
  
  
 
     
 




return 0;
 }