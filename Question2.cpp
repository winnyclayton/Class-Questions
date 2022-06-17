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


//QUESTION 2 FUNCTION DECLARATIONS
void mySort(int valListInt[10]);
void mySort(long valListLong[10]);
void mySort(double valListDbl[10]);


int main() {


    /*//----------QUESTION 2----------
    
    Object List:
    listInt[10] int
    
    Algorithm:
    Step 1.     Start
    Step 2.     Declare variables
    Step 3.     Print the words "Sorted numbers:"
    Step 4.     Sort numbers from smallest to largest
    Step 5.     Print sorted numbers
    Step 6.     Stop*/

    //1. Start

    //2. Declare variables
    int listInt[10] = {23, 2, 34, 23, 43, 22, 32, 32, 43, 34};
        mySort(listInt);
    
    //3. Print the words "Sorted numbers: "
    cout << "Sorted numbers: " << endl;
    
    //4. Sort numbers from smallest to largest
    for (int i=0;i<10;i++) {
        
    //5. Print sorted numbers
        cout << listInt[i] << ", ";
  }
    //6. Stop
    cout << endl;

    
            return 0;
    }


//QUESTION 2 DEFINITIONS
    void mySort(int valListInt[10]){
        int minIndex, temp;
        
        for(int i = 0; i < 9; i++){
            minIndex = i;
            for(int j = i + 1; j < 10; j++){
                if(valListInt[j] < valListInt[minIndex])
                    minIndex = j;
            }
            
        //swap index
        temp = valListInt[i];
        valListInt[i] = valListInt[minIndex];
        valListInt[minIndex] = temp;
        }}
    
    void mySort(long valListLong[10]){
        int minIndex;
        long temp;
        
        for(int i = 0; i < 9; i++){
            minIndex = i;
            for(int j = i + 1; j < 10; j++){
                if(valListLong[j] < valListLong[minIndex])
                    minIndex = j;
            }
            
        //swap index
        temp = valListLong[i];
        valListLong[i] = valListLong[minIndex];
        valListLong[minIndex] = temp;
        }}
    
    void mySort(double valListDbl[10]){
        int minIndex;
        double temp;
        
        for(int i = 0; i < 9; i++){
            minIndex = i;
            for(int j = i + 1; j < 10; j++){
                if(valListDbl[i] < valListDbl[minIndex])
                    minIndex = j;
            }
            
        //swap index
        temp = valListDbl[i];
        valListDbl[i] = valListDbl[minIndex];
        valListDbl[minIndex] = temp;
        }}

