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

    
    /*//----------QUESTION 4----------
    
    Object List:
    numDays const int
    maxTempArray[numDays] float
    minTempArray[numDays] float
    days[] const char
    maxTemp float
    minTemp float
    aveTemp float
    
    Algorithm:
    Step 1.     Start
    Step 2.     Declare variables
    Step 3.     Ask user for the weeks daily temperature
    Step 3.1.   Get input from user
    Step 4.     Find the maximum temperature of the week
    Step 5.     Find the minimum temperature of the week
    Step 6.     Find the average temperature of the week
    Step 7.     Print the words "This week:"
    Step 8.     Print the minimum temperature
    Step 9.     Print the maximum temperature
    Step 10.    Print the average temperature
    Step 11.    Stop*/

    //1. Start
    
    //2. Declare variables
    const int numDays = 7;
    float maxTempArray[numDays] = {};
    float minTempArray[numDays] = {};
    const char* days[7] ={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    float maxTemp, minTemp, aveTemp;
    
    //3. Ask user for the weeks daily temperature
    cout << "Please enter this weeks temperature: " << endl;
    
    //3.1. Get input from user
    for(int i = 0; i < 7; i++){
    cout << days[i] << ": " << endl;
    cin >> maxTempArray[i] >> minTempArray[i];
    }
    
   //4. Find the maximum temperature of the week
    maxTemp = maxTempArray[0];
    
    for(int i = 1; i < numDays; i++){
        
        if(maxTempArray[i] > maxTemp)
            maxTemp = maxTempArray[i];
    }
    
   //5. Find the minimum temperature of the week
    minTemp = minTempArray[0];
    
    for(int i = 1; i < numDays; i++){
        if(minTempArray[i] < minTemp)
              minTemp = minTempArray[i];
    }
    
    //6. Find the average temperature of the week
    float sum = 0;
    
    for(int i = 0; i < numDays; i++){
        sum = sum + maxTempArray[i] + minTempArray[i];
    }
    
    aveTemp = sum / (numDays*2);
    
    //7.
    cout << "This week:" << endl;
    
    //8. Print the minimum temperature
    cout << "The minimum temperature is: " << minTemp << endl;
    //9. Print the maximum temperature
    cout << "The maximum temperature is: " << maxTemp << endl;
    //10. Print the average temperature
    cout << "The average temperature is: " << fixed << setprecision(2) << aveTemp <<  endl;
    
    //11. Stop
    
            return 0;
    }


