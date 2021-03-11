// Section 9
// if-nest SATEMENTS
/* promt user to enter the scores in exam  b/w 0-100 . using these scores  tell the user , its grade .*/
/* condition 1 - If score is greater than 100 or less 0 than it will be undefined value.
 * condition 2 - If a student get 90+then its A+
 * condition 3 - If a student score is greater than 80 then its A... so on.
 * condition 4 - If a student score is less than 50 then , he will repeat the class.*/
#include <iostream>
using namespace std;

 int main(){
     int score {};
     cout << "Enter the scores you get in exam from {0 to 100}: ";
     cin >> score;
     
        char grades {};
    if (score >=0 && score <=100){
        if (score >=90)
            grades = 'A';
            
            else if (score >=80)
                grades = 'B';
                
                else if (score >=70)
                    grades = 'C';
                    
                    else if (score >=60)
                        grades = 'D';
                        
                        else if  (score >=50)
                           grades = 'E';
                           
                           else 
                            grades = 'F';
                               
                               cout << "Your letter grades is : " << grades << endl;
                    
                                     if (grades == 'F')
                                       cout << "Sorry, you must repeat the class." << endl;

                                       else 
                                          cout << "Congrats!! you pass in the class." << endl;
       
     
        
        
        
        } else {
            cout << "The score you entered is invalid , please enter a valid score." << endl;
        }
             
        
        
        
        
        
        
        
        
    
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
    

     return 0;
 }