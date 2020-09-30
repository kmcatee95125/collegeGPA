//
//  main.cpp
//  CollegeGPACalculator
//
//  Created by katie on 9/27/20.
//  Copyright © 2020 katie. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char grade;
    float gradePoint = 0.0f;
    float finalCredits = 0.0f;
    float finalGPA{0.0f};
    float credVal{0.0f};
    char sign;
    
    
    do {
        
    cout << "Enter a grade between A and F. Enter z if you have no more grades to enter.";
    cin >> grade;
    sign = cin.peek();
    grade = toupper( grade );
        
    if(grade == 'Z'){
        break;
    }
        
    switch(grade) {
        
        case 'A':
            gradePoint = 4.0f;
            if(sign == '+'){
                sign = '\n';
                cout << "Changed A+ to an A. \n";
            }
            break;

        case 'B':
            gradePoint = 3.0f;
            break;

        case 'C':
            gradePoint = 2.0f;
            break;

        case 'D':
            gradePoint = 1.0f;
            break;
            
        case 'F':
            gradePoint = 0.0f;
            if(sign == '-'){
                sign = '\n';
                cout << "Changed F- to an F. \n";
            }
            break;
        default:
            cout << "Invalid grade entered\n" << endl;
            break;
            
        }
    switch (sign){
        case '-':
            gradePoint = gradePoint - 0.33;
            break;
        case '+':
            gradePoint = gradePoint + 0.33;
            break;
        case '\n':
            break;
        }
       
    float inputCred{0};
        cout << "Enter the credit value for this course.";
        cin >> inputCred;

        if( inputCred >= 0.5 && inputCred <= 45.0){
            credVal = inputCred + credVal;
            finalCredits = finalCredits + (inputCred * gradePoint);
        }
        else {
            cout << "That's an invalid credit value. Please make sure your value is between 0.5 and 45.0 \n" ;
        }
        
         
        
    }
    while(grade != 'Z');
    cout << "Your final GPA is: " << finalCredits / credVal << endl;
    return finalGPA;

}
