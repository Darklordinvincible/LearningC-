// Arrays

#include <iostream>

 int main(){
     using namespace std;
     
     char vowels[] {'a','e','i','o','u'};
     cout << "\n The first vowel is: " << vowels [0] << endl;
     cout << " The last vowel is: " << vowels[4] << endl;
     
   // cin >> vowels[5]; out of bounds  - don't do this!
   
   double hi_temps[] {90.1, 89.1,77.5,55.2};
   cout << " \n The first high temprature is: " << hi_temps[0] << endl;
   
   hi_temps[0] = 44.99; //set the first element in hi_temps to 100.8
   
   cout << " The first high tempratue is now:" << hi_temps[0] << endl;
   
   
   
   int test_score []{100, 90, 80, 70, 60};
   cout << "\n The first score at 0:" << test_score [0] << endl;
   cout << "The scond score at 1: " << test_score[1] << endl;
   cout << "The third score at 2: " << test_score[2] << endl;
   cout << "The fourth score at 3: " << test_score[3] << endl;
   cout << "The fifth score at 4: "  << test_score[4] << endl;
   
   
   
   cout <<"\nEnter 5 test scores: ";
   cin >> test_score[0];
   cin >> test_score[1];
   cin >> test_score[2];
   cin >> test_score[3];
   cin >> test_score[4];
   
   cout << "\nThe updated arrays are; " << endl;
   cout << "First score at 0: " <<test_score[0] << endl;
   cout <<"Second score at 1: " << test_score[1] << endl;
   cout << "Third score at 2: " << test_score[2] << endl;
   cout << "Fourth score at 3: " << test_score[3] << endl;
   cout <<"Fifth score at 4: " <<test_score[4] << endl;
   
   
   
   cout << "\nNotice what value of the array name is: " << test_score << endl;
   cout << endl;
   
    
    
    
    
    
    
    
    
    
    
    
     return 0;
 }