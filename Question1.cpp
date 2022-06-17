//
//  main.cpp
//  Assessment_2
//
//  Created by Winona Clayton on 10/9/20.
//  Copyright © 2020 Winona Clayton. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//QUESTION 1 FUNCTION DECLARATIONS
int addition (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
float divide (int a, int b);
int module (int a, int b);


int main() {

    /*//----------QUESTION 1----------
      
      Object List:
      operationChoice int
      num1 int
      num2 int
      choice char
      
      Algorithm:
      Step 1.     Start
      Step 2.     Declare variables, functions & definitions
      Step 3.     Display menu of calculator
      Step 4.     Ask user to choose an operation
      Step 4.1.   Get input from the user and assign to operationChoice variable
      Step 5      Ask user to print two numbers
      Step 5.1.   Get input from the user and assign to num1 and num2
      Step 6.     If user choice is add, add num1 and num2 then print result
      Step 7.     If user choice is subtract, subtract num1 and num2 then print result
      Step 8.     If user choice is multiply, multiply num1 and num2 then print result
      Step 9.     If user choice is divide, divide num1 and num2 then print result
      Step 10.    If user choice is modulus, modulus num1 and num2 then print result
      Step 11.    Ask user if they want to continue
      Step 11.1   If yes, start from the menu again
      Step 11.2   If no, stop*/
    
    //1. Start
    //2. Declare variables, functions & definitions
    int operationChoice;
    int num1;
    int num2;
    char choice;
    
    //3. Display menu of calculator
    do{
    
    cout << "MENU" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Modulus" << endl;
    
    //4. Ask user to choose an operation
    cout << "Enter your choice: " << endl;
    //4.1. Get input from user and assign to operationChoice variable
    cin >> operationChoice;
    
    //5. Ask user to print two numbers
    cout << "Enter your two numbers: " << endl;
    //5.1. Get input from the user and assign to num1 and num2
    cin >> num1 >> num2;
    
    switch (operationChoice){
            //6. If user choice is add, add num1 and num2 then print result
        case 1 : cout << "Result: " << addition(num1, num2) << endl;
                break;
            //7. If user choice is subtract, subtract num1 and num2 then print result
        case 2 : cout << "Result: " << subtract(num1, num2) << endl;
                break;
            //8. If user choice is multiply, multiply num1 and num2 then print result
        case 3 : cout << "Result: " << multiply(num1, num2) << endl;
                break;
            //9. If user choice is divide, divide num1 and num2 then print result
        case 4 : cout << "Result: " << divide(num1, num2) << endl;
                break;
            //10. If user choice is modulus, modulus num1 and num2 then print result
       case 5 : cout << "Result: " << module(num1,num2) << endl;
                break;
            default: cout << "Invalid" << endl;
    }
    //11. Ask user if they want to continue
    cout << "Continue? (Y for yes)" << endl;
    cin >> choice;
            
    //11.1. If yes, start from the menu again
    } while(choice == 'Y' || choice == 'y');

    //11.2. If no, stop.
    
    
    
            return 0;
    }


//QUESTION 1 DEFINITIONS
int addition (int a, int b){
    return a+b;}

int subtract (int a, int b){
    return a-b;}

int multiply (int a, int b){
    return a*b;}

float divide (int a, int b){
    return a/b;}

int module (int a, int b){
    return a%b;}
