// MIXED EXPRESSIONS 


/* Ask the user for enter 3 integers 
 * Calculate the sum of three integers  then 
 * Calculate the average of three integers.
 * 
 * Display the 3 integers entered 
 * the sum of the 3 integers and the average of 3 integers.*/
 


#include <iostream>

 int main(){
    using namespace std;
    
    int num1 {0};
    int num2 {0};
    int num3 {0};
    
    cout << " Enter any 3 integers: ";
    cin >> num1 ;
    cin >> num2 ;
    cin >> num3 ;
    
    cout << " The 3 integers were: " << num1<<"," << num2 << "," << num3 << endl;
    
    int sum_of_integers {0};
    sum_of_integers = num1 + num2 + num3;
    
    cout <<" Sum of the 3 integers are: " << sum_of_integers << endl;
    
    double average {0.0};
    const int total_number {3};
    average = static_cast<double>(sum_of_integers) / total_number;
    
    cout << " Average of the 3 integers: " << average << endl;
    
     return 0;
 }