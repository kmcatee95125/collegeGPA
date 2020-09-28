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
    double gpa = 0.0;
    int counter{0};
    double finalGPA{0.0};
    double credVal{0.0};
    char sign;
    
    do {
        
    cout << "Enter a grade between A and F. Enter z if you have no more grades to enter.";
    cin >> grade;
    sign = cin.peek();
    grade = toupper(grade);
        if(grade == 'Z'){
            cout << "Your final GPA is " << finalGPA << ".";
            break;
        }
    switch(grade) {
        case 'A':
            gpa = 4.0;
            counter++;
            break;

        case 'B':
            gpa = 3.0;
            counter++;
            break;

        case 'C':
            gpa = 2.0;
            counter++;
            break;

        case 'D':
            gpa = 1.0;
            counter++;
            break;
            
        case'F':
            gpa = 0.0;
            counter++;
            break;
        default:
            cout << "Invalid grade entered" << endl;
            break;
            
        }
        
        switch (sign){
            case '-':
                gpa = gpa - 0.33;
                break;
            case '+':
                gpa = gpa + 0.33;
                break;
        }
        
        double tester{0};
           cout << "Enter the credit value for this course.";
           cin >> tester;

           if( tester >= 0.5 && tester <= 45.0){
               credVal = tester + credVal;
           }
           else {
               cout << "That's an invalid credit value. Please make sure your value is between 0.5 and 45.0" << endl;
           }

         
        finalGPA = (credVal * gpa) / (counter * credVal);
    }
    while(grade != 'Z');
    return 0;

}
