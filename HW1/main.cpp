/**
 * @file main.cpp
 * @author Tucker Self
 * @date 2023-09-15
 * @brief Main program file
 * 
 * the main file for usage of a custom vector class
 */
#include <iostream>
#include <fstream>
#include "Vector.h"


/**
 * prints out a list of values in a vector
 *
 * @param char choice whether the user chooses to print the values or not
 * @param Vector v the vector of which to print
 * @pre a choice is given by the user and a vector is valid
 * @return void 
 * @post the values within the vector
 * 
 */
void printVect(char choice, Vector v);

using namespace std;

int main() {
  //vector declaration demonstration
  Vector list(10);
  int userIn;

  cout << "Choose a number of intergers to be put into a vector: ";
  cin >> userIn;
  cout << endl << "Creating vector..." << endl;

  for(int i=1; i<userIn; i++){
    //push_back function demonstration
    list.push_back(i);
  }

  //demonstration of copy vector
  Vector catalog(list);
  
  char userChoice;
  cout << "Would you like to print the vector? Y/N:";
  cin >> userChoice;

  //demonstration of assignment vector
  //Vector registry();
  //registry = catalog;
  
  printVect(userChoice, list);
  
  return 0;
}

void printVect(char choice, Vector v){
  cout << endl;
  if(choice == 'N' || choice == 'n'){
    cout << "Understood." << endl;
  }
  else if(choice == 'Y' || choice || 'y'){
    cout << "Printing..." << endl;
    //vector size() demonstration
    int vectSize = v.size();
    for(int i=0; i<vectSize; i++){
      //vector [] operator demonstration
      cout << v[i] << endl;
    }
    cout << "Done Printing." << endl;
  }
  else{
    cout << "Invalid choice, please choose again:";
    cin >> choice;
    printVect(choice, v);
  }
}
