// VECTORS

#include <iostream>
#include <vector>     // always write #incude <vectors> while using vectors

 int main(){
using namespace std;

//vector <char> vowels;
  //vector <char > vowels (5);
     vector <char> vowels {'a','e','i','o','u'};

  cout << vowels[0] << endl;
  cout << vowels[4] << endl;
   
// vector <int> test_scores (3);  // 3 elements all initialized to zero
// vector <int> test_scores (3 , 100) // 3 elements all initialized to 100


     vector <int> test_scores {100,98,89};
   
     cout << "\nTest scores using array syntax " << endl;
     cout << test_scores[0] <<endl;
     cout << test_scores[1] <<endl;
     cout << test_scores [2] <<endl;
     
     
     cout << "\nTest scores using vector syntax " << endl;
     
     cout << test_scores .at(0)<<endl;
     cout << test_scores .at (1)<<endl;
     cout << test_scores .at (2)<<endl;
     cout << "\nThere are  " << test_scores .size() << " scores in the vector" <<endl;
     
     
     cout << "\nEnter 3 test scores ";
     cin >> test_scores .at(0);
     cin >> test_scores .at(1);
     cin >> test_scores .at(2);
     
     
     cout <<"\nUpdated test scores " << endl;
     cout << test_scores .at(0) << endl;
     cout << test_scores .at(1) << endl;
     cout << test_scores .at(2) <<endl;

cout <<"\nEnter a new test score to add to the vector: ";
int score_add {0};
 cin >> score_add;
 
 test_scores .push_back(score_add);
 
 cout << "\nEnter one more test score to add to the vector: ";
     cin >> score_add;
     
     test_scores .push_back(score_add);
     
     cout << "\nTest scores now: " << endl;
     cout << test_scores .at(0) <<endl;
     cout << test_scores .at(1) <<endl;
     cout << test_scores .at(2) <<endl;
     cout << test_scores .at (3) <<endl;
     cout << test_scores .at(4) <<endl;
     
     cout << "\nThere are now " << test_scores.size() << " scores in vector." << endl;
     

 //cout << "This is cause an exception " << test_scores .at(9) <<endl;

 // Example of 2d vector

vector <vector <int>> movie_ratings
{   
     {1,2,3,4},
     {1,2,3,4},
     {1,2,3,4}
};
cout << "\nHere are the movie ratings for reviewer #1 using arrays method: ";

cout << movie_ratings[0][0] << endl;
cout << movie_ratings[0][1] << endl;
cout << movie_ratings[0][2] << endl;
cout << movie_ratings[0][3] << endl;


cout << "\Here are movie ratings for reviewer #1 using vector method: " ;

cout << movie_ratings .at(0).at(0) << endl;
cout << movie_ratings .at(0).at(1) << endl;
cout << movie_ratings .at(0).at(2) << endl;
cout << movie_ratings .at(0).at(3) << endl;   
     
     
     
     return 0;
 }