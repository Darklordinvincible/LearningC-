#include <iostream>
#include <vector>

using namespace std;

 int main(){
// Solution 1.

     
     vector <int> vector1;
     vector <int> vector2;
     
// Solution 2.
 
 vector1.push_back(10);
 vector1.push_back(20);
 
 //b.    
    cout<<"Elements of vector1: " <<endl;
    cout<< vector1.at(0) <<endl;
    cout<< vector1.at(1) <<endl;
    cout<< "Size of the vector1: " <<endl;
    cout<< vector1 .size()<<endl;
    
// Solution 3.

vector2.push_back(100);
vector2.push_back(200);

//b.
    cout<<"\nElements of vector2: "<<endl;
    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;
    cout<<"Size of vector2: " <<endl;
    cout << vector1 .size() <<endl;
    
// Solution 4.

  vector <vector <int>> vector_2d;
  
  
//Solution 5.

  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);

// Solution 6.

  cout <<"\nElements in vector_2d:"<<endl;
  cout << vector_2d.at(0).at(0) << endl;
  cout << vector_2d.at(0).at(1) << endl;
  cout << vector_2d.at(1).at(0) << endl;
  cout << vector_2d.at(1).at(1) << endl;
  
// Solution 7. 
  vector1.at(0) = 1000;
  cout<< "\nElement in vector1 at index 0: " << endl;
  cout<<vector1.at(0) <<endl;
 
// Solution 8.

  cout << "\nElements in vector_2d now:" <<endl;
  cout << vector_2d.at(0).at(0) <<endl;
  cout << vector_2d.at(0).at(1) <<endl;
  cout << vector_2d.at(1).at(0) <<endl;
  cout <<vector_2d.at(1).at(1)  <<endl;

// Solution 9.

  cout <<"\nElements in vector1 now: " << endl;
  cout << vector1.at(0) << endl;
  cout << vector1.at(1) << endl;
  
// Solution 10.
/* i was expecting that the element of vector2d at 0 will change to 1000 because i reassigned in vector1.
 but that doesn't happen because when we using integers , floats or character . we are making copies of what we are putting , so thats why the element will not change in vector_2d.
  


     
















     return 0;
 }