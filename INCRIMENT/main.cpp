/*  INCRIMENT OPERATOR ++
 * DECRIMENT OPERATOR --
 * incriment or decriment its operand by 1
 * can be used with integers , floating point typs and pointers.
 * 
 * prefix     ++num
 * postfix   num++
 * 
 * Don't overuse this operand!
 * Alert!!! Never use it twice for the same variable in the same statement*/
 
#include <iostream>
using namespace std;

 int main(){ 
     
     int counter {10};
     int result {0};
     
     // Example 1: simple incriment 
     
   /*  cout << " Counter: " << counter << endl;
     counter = counter +1;
     cout << " Counter: " << counter << endl;
     
     counter++;
     cout << " Counter: " << counter << endl;
     
    ++counter;
     cout <<" Counter: " << counter << endl; */
     
     // Example 2: preincriment
     counter = 10;
     result = 0;
     
    /* cout << " Counter: " << counter << endl;
     
     result = ++counter; // preincriment  [ counter = counter +1]
     cout << " Counter: " << counter << endl;
     cout << " Result: " << result << endl; */
     
     // Example 3: postincriment
     
    /* cout << " Counter: " << counter << endl;
     
     result = counter++; // postincriment  result = counter , counter = counter +1
     cout << " Counter: " << counter << endl;
     cout << " Result: " << result << endl;*/
     
     
    // Example 4:
    
     /*counter = 10;
     result = 0;
   
    cout << " Counter: " << counter << endl;

   result = ++counter + 10 ; // preincriment  result = counter +10,    counter = counter+1
   cout << " Counter: " <<counter << endl;
   cout << " Result: " << result << endl;*/
   
   // Example 5.
   
     counter = 10;
     result = 0;
   
    cout << " Counter: " << counter << endl;

   result = counter++  + 10 ; // postincriment  result = counter + 10 , counter = counter +1
   cout << " Counter: " <<counter << endl;
   cout << " Result: " << result << endl;
   
     
     
     
     
     
    


     
    







     
     
     
     
     
     
     
    cout << endl;
     return 0;
 }