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


int main() {

    
    /*//----------QUESTION 5----------
       
    Object List:
    message string
    countVowel int
    countLower int
    countUpper int
    countNumerals int
    countSymbols int
    i int
       
    Algorithm:
    Step 1.     Start
    Step 2.     Declare variables
    Step 3.     Ask user to enter a string sentence
    Step 3.1.   Get input from user
    Step 4.     Find the length of the string
    Step 4.1.   Print length of the string
    Step 5.     Count the vowels in the string
    Step 5.1.   Print the amount of vowels
    Step 6.     Count the lowercase characters in the string
    Step 6.1.   Print the amount of lowercase characters
    Step 7.     Count the uppercase characters in the string
    Step 7.1.   Print the amount of uppercase characters
    Step 8.     Count the numerals in the string
    Step 8.1.   Print the amount of numerals
    Step 9.     Count the other symbols in the string
    Step 9.1.   Print the amount of symbols
    Step 10.    Stop*/
    
        //1. Start
    
        //2. Declare variables
        string message = " ";
        int i = 0, countLower = 0, countUpper = 0, countNumerals = 0, countSymbols = 0;
        int countVowel = 0;
         
        //3. Ask user to enter a string sentence
         cout << "Please enter in a string: " << endl;
        //3.1 Get input from user
         getline(cin, message);
        
        //4. Find the length of the string
        //4.1. Print the length of the string
       cout << "The length of your string: " << message.length() << endl;
        
     
       //5. Count the vowels in the string
       for(int i = 0; message[i]!='\0'; i++){
           switch(message[i]){
               case 'a': case 'A':
               case 'e': case 'E':
               case 'i': case 'I':
               case 'o': case 'O':
               case 'u': case 'U':
                   countVowel++;}
       }
       
    //5.1. Print the amount of vowels
        cout << "The number of vowels in your string: " << countVowel << endl;
        
       //6. Count the lowercase characters in the string
       while(message[i] != 0){
           if(message[i] >= 'a' && message[i] <= 'z'){
               countLower++;
               i++;
           }
           
           //7. Count the lowercase characters in the string
           else if(message[i] >= 'A' && message[i] <= 'Z'){
               countUpper++;
               i++;
           }
           
           //8. Count the numerals in the string
           else if(message[i] >= '0' && message[i] <= '9'){
               countNumerals++;
               i++;
           }
           
           //9. Count the other symbols in the string
           else{
               countSymbols++;
               i++;
               
           }
       }
       
       //6.1. Print the amount of lowercase characters
        cout << "The number of lowercase letters in your string: " << countLower << endl;
       //7.1. Print the amount of uppercase characters
        cout << "The number of uppercase letters in your string: " << countUpper << endl;
        //8.1. Print the amount of numerals
        cout << "The number of numerals in your string: " << countNumerals << endl;
       //9.1. Print the amount of other symbols
        cout << "The number of other symbols in your string: " << countSymbols << endl;
    
    //10. Stop
    
            return 0;
    }

