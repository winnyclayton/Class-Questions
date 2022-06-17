#include <iostream>
using namespace std;

//QUESTION 3 FUNCTION DECLARATION
template <class t>
void multiples (t x, int n);


int main() {

    
    /*//----------QUESTION 3----------
         
         Algorithm:
         Step 1.     Start
         Step 2.     Declare a multiples function with two parameters x and n
         Step 3.     Declare two variables with any number value
         Step 4.     Pass numbers through the multiples function
         Step 5.     Display result on screen
         Step 6.     Stop*/
    
    //1. Start
    
    //2. Declare multiples function (displayed above and below main)
    
    //3. Declare two variables with any number value
    float num = 3.3;
    int num2 = 6;
    
    //4. Pass numbers through the multiples function
    //5. Display result on screen
    multiples(num,num2);

    //6. Stop
    return 0;
}

//QUESTION 3 FUNCTION DEFINITION
template <class t>
void multiples (t x, int n){
    t sum = 0;
    for(int i = 1; i <= n; i++){
        sum += (i * x);
    }
    cout << sum << endl;

}
