// Advanced Calulator Made By Using Simple And Basic Programming Terminologies

/**** It might show some erro at some point and might may be less accurate at some point ****/

#include <iostream>
#include <conio.h> //Using getch() so that its .exe file does not exit immediately
#include <cmath>
#include <string>
using namespace std;

void arithmetic();
void add();
void sub();
void mul();
void div();
void sqr();
void sqrt();
void trigonometric();
void invtrigo();
void exponential();
void cho_exp();
void logarithmic();
void cho_log();
void quad_equ();
void cho_quad();
void cubic_equ();
void cho_cub();
void conversion();
string Bin_Dec (string binary);
string Oct_Dec (string octal);
string Hex_Dec (string hexa);
string Dec_Bin (string decimal);
string Dec_Oct (string decimal);
string Dec_Hex (string decimal);
string Oct_Hex (string octal);
string Hex_Oct (string hexa);
string Bin_Hex (string binary);
string Hex_Bin (string hexa);
string Bin_Oct (string binary);
string Oct_Bin (string octal);
void operation_number_system();

int main(){
    int opt1;
    
    cout << "\nOperations of Advanced Calculator"
    "\n1. Arithmetic"
    "\n2. Trigonometric"
    "\n3. Inverse Trigonometric"
    "\n4. Exponential"
    "\n5. Logarithmic"
    "\n6. Finding Roots of Quadratic Equaation"
    "\n7. Finding Roots of Cubic Equation"
    "\n8. Special Number System & Operations "
    "\n9. Exit\n\n";
    
    cout << "Enter the type of operation you want to Perform (Use Numbers Only): ";
    cin >> opt1;

    switch(opt1){
    case 1:
        arithmetic();
        break;
    case 2:
        trigonometric();
        break;
    case 3:
        invtrigo();
        break;
    case 4:
        exponential();
        break;
    case 5:
        logarithmic();
        break;
    case 6:
        quad_equ();
        break;
    case 7: 
        cubic_equ();
        break;
    case 8:
        conversion();
        break;
    case 9:
        cout << "\nThank You! For using this Software." << endl;
        cout << "\npress any key to close the program" << endl;
        getch();
        break;
    default:
        cout << "\n''Invalid Operation''" << endl << endl;
        main();
        break;
    }
    return 0;
}

void conversion(){
    cout << "\nCONVERSION AVAILABLE: "
    "\n1. Conversion from Binary to Decimal"  
    "\n2. Conversion from Octal to Decimal"
    "\n3. Conversion from Hexadecimal to Decimal"
    "\n4. Conversion from Decimal to Binary"
    "\n5. Conversion from Decimal to Octal"
    "\n6. Conversion from Decimal to Hexadecimal"
    "\n7. Conversion from Octal to Hexadecimal"
    "\n8. Conversion from Hexadecimal to Octal"
    "\n9. Conversion from Binary to Hexadecimal"
    "\n10. Conversion from Hexadecimal to Binary"
    "\n11. Conversion from Binary to Octal"
    "\n12. Conversion from Octal to Binary"
    "\n13. Arithmetic Operations (+, -, *, /) On Special Number System"
    "\n14. Back"
    "\n15. EXIT\n";
    
    int option;
    cout << "Choose the option: ";
    cin >> option;

    if (option == 1){
        string binary;
        cout << "Enter the Binary Number: ";
        cin >> binary;
        cout << "Decimal Number = " << Bin_Dec(binary) << endl;
        cout << "\n*******************************************************************************\n";
        conversion();
    }
    else if (option == 2){
        string octal;
        cout << "Enter the Octal Number: ";
        cin >> octal;
        cout << "Decimal Number = " << Oct_Dec(octal) << endl;
        cout << "\n*******************************************************************************\n";
        conversion();
    }
    else if (option == 3){
        string hexa;
        cout << "Enter the Hexadecimal Number: ";
        cin >> hexa;
        cout << "Hexadecimal Number = " << Hex_Dec(hexa) << endl;
        cout << "\n*******************************************************************************\n";
        conversion();
    }
    else if (option == 4){
        string decimal;
        cout << "Enter the Decimal Number: ";
        cin >> decimal;
        cout << "Binary Number = " << Dec_Bin(decimal);
        cout << "\n*******************************************************************************\n";
        conversion();
    }
    else if (option == 5){
        string decimal;
        cout << "Enter the Decimal Number: ";
        cin >> decimal;
        cout << "Octal Number = " << Dec_Oct(decimal);
        cout << "\n*******************************************************************************\n";
        conversion();
    }
    else if (option == 6){
        string decimal;
        cout << "Enter the Decimal Number: ";
        cin >> decimal;
        cout << "Hexadecimal Number = " << Dec_Hex(decimal);
        cout << "\n*******************************************************************************\n";
        conversion();
    }
    else if (option == 7){
        string octal;
        cout << "Enter the Octal Number: ";
        cin >> octal;
        cout << "Hexadecimal Number = " << Oct_Hex(octal);
        cout << "\n*******************************************************************************\n";
        conversion();
    }
    else if (option == 8){
        string hexa;
        cout << "Enter the Hexadecimal Number: ";
        cin >> hexa;
        cout << "Octal Number = " << Hex_Oct(hexa);

        cout << "\n*******************************************************************************\n";
        conversion();
    }
    else if (option == 9){
        string binary;
        cout << "Enter the Binary Number: ";
        cin >> binary;
        cout << "Hexadecimal Number = " << Bin_Hex(binary);

        cout << "\n*******************************************************************************\n";
        conversion();
    }
    else if (option == 10){
        string hexa;
        cout << "Enter the Hexadecimal Number: ";
        cin >> hexa;
        cout << "Binary Number = " << Hex_Bin(hexa);

        cout << "\n*******************************************************************************\n";
        conversion();
    }
    else if (option == 11){
        string binary;
        cout << "Enter the Binary Number: ";
        cin >> binary;
        cout << "Octal Number = " << Bin_Oct(binary);

        cout << "\n*******************************************************************************\n";
        conversion();
    }
    else if (option == 12){
        string octal;
        cout << "Enter the Octal Number: ";
        cin >> octal;
        cout << "Binary Number = " << Oct_Bin(octal);

        cout << "\n*******************************************************************************\n";
        conversion();
    }
    else if (option == 13){
        operation_number_system();
    }
    else if (option == 14){
        main();
    }
    else if (option == 15){
        cout << "\nThank You! For using this Software." << endl;
        cout << "\npress any key to close the program" << endl;
        getch();
    }
    else {
        cout << "Error! WRONG INPUT " << endl;
        conversion();
    }

    return ;
}

void arithmetic(){
    int opt2;

    cout << "\nThis Arithmetic Software can perform following Operation : "
    "\n1. Addition"  
    "\n2. Subtraction"  
    "\n3. Multiplication"  
    "\n4. Division"  
    "\n5. Square"  
    "\n6. Square Root"  
    "\n7. Back"
    "\n8. Exit the WHOLE program\n" 

    "\nSelect any Operation : ";
    cin >> opt2;

    switch (opt2){
    case 1:
        add();
        arithmetic();
        break;
    case 2:
        sub();
        arithmetic();
        break;
    case 3:
        mul();
        arithmetic();
        break;
    case 4:
        div();
        arithmetic();
        break;
    case 5:
        sqr();
        arithmetic();
        break;
    case 6:
        sqrt();
        arithmetic();
        break;
    case 7:
        cout << endl;
        main();
        break;
    case 8:
        cout << "\nThank You! For using this Software." << endl;
        cout << "\npress any key to close the program" << endl;
        getch();
        break;
    default:
        cout << "\n''You have given WRONG Input.''" << endl;
        arithmetic();
        break;
    } 
    return;
}

void trigonometric(){
    int opt3, ty;
    double val;
    double temp;
    const long double pi = 3.1415926535897932384626433832795;

    cout << "\nTrigonometric Functions : "
    "\n1. Sine"
    "\n2. Cosine"
    "\n3. Tangent"
    "\n4. Cosecant"
    "\n5. Secant"
    "\n6. Cotangent"
    "\n7. Back"
    "\n8. Exit\n\n";

    cout << "Select any Function : ";
    cin >> opt3;

    // Below 'IF' Command will not be run for 7th and 8th option
    if ((opt3 == 1) || (opt3 == 2) || (opt3 == 3) || (opt3 == 4) || (opt3 == 5) || (opt3 == 6)) {

        cout << "\nIf you would like to give input as Radian, type '1' or for Degree, type '2'." << endl;
        cin >> ty;
        
        if (ty == 1) {      
            cout << "Enter value (only in radian) : ";
            cin >> val;
            temp = val;
        }

        else if (ty == 2) {
            cout << "Enter value (only in degree) : ";
            cin >> val;
            temp = val*(pi/180);
        }
        
        else {
            cout << "''You have given WRONG Input.''";
            trigonometric();
        }
    }

    switch(opt3) {
       
    case 1:
        if ( (int(val)) % 90 == 0 ){
            cout << "Sin (" << val << ") = " << int (sin(temp)) << endl; // i.e., 0
            trigonometric();
        }
        else {
            cout << "Sin (" << val << ") = " << sin(temp) << endl;
            trigonometric();
        }
        break;
    case 2:
        if ( ((int(val)) % 90 == 0) ){
            cout << "Cos (" << val << ") = " << int (cos(temp)) << endl; /* i.e., 0*/
            trigonometric();
        }
        else {
            cout << "Cos (" << val << ") = " << cos(temp) << endl;
            trigonometric();
        }
        break;
    case 3:
        if (ty == 2){
            if ((int(val)) % 90 == 0){
                if (int (cos(temp)) == 0){
                    cout << "Tan (" << val << ") = Not Defined" << endl;
                    trigonometric();
                }
                else {
                    cout << "Tan (" << val << ") = " << int(tan(temp)) << endl;
                    trigonometric();
                }
            }
            else {
                cout << "Tan (" << val << ") = " << tan(temp) << endl;
                trigonometric();
            }
        }
        
        else {
            cout << "Tan (" << val << ") = " << tan(temp) << endl;
            trigonometric();
        }
        break;
    case 4:
        if (ty == 2){
            if ((int(val)) % 90 == 0){
                if (int (sin(temp)) == 0){
                    cout << "Cosec (" << val << ") = Not Defined" << endl;
                    trigonometric();
                }
                else {
                    cout << "Cosec (" << val << ") = " << int(1/sin(temp)) << endl;
                    trigonometric();
                }
            }
            else {
                cout << "Cosec (" << val << ") = " << 1/sin(temp) << endl;
                trigonometric();
            }
        }
        else{
            cout << "Cosec (" << val << ") = " << 1/sin(temp) << endl;
            trigonometric();
        }
        break;
    case 5:
        if (ty == 2){
            if ((int(val)) % 90 == 0){
                if (int (cos(temp)) == 0){
                    cout << "Sec (" << val << ") = Not Defined" << endl;
                    trigonometric();
                }
                else {
                    cout << "Sec (" << val << ") = " << int(1/cos(temp)) << endl;
                    trigonometric();
                }
            }
            else {
                cout << "Sec (" << val << ") = " << 1/cos(temp) << endl;
                trigonometric();
            }
        }
        else {
            cout << "Sec (" << val << ") = " << 1/cos(temp) << endl;
            trigonometric();
        }
        break;
    case 6:
        if (ty == 2){
            if ((int(val)) % 90 == 0){
                if (int (sin(temp)) == 0){
                    cout << "Cot (" << val << ") = Not Defined" << endl;
                    trigonometric();
                }
                else {
                    cout << "Cot (" << val << ") = " << int(1/tan(temp)) << endl;
                    trigonometric();
                }
            }
            else {
                cout << "Cot (" << val << ") = " << 1/tan(temp) << endl;
                trigonometric();
            }
        }
        else{
            cout << "Cot (" << val << ") = " << 1/tan(temp) << endl;
            trigonometric();
        }
        break;
    case 7:
        main();
        break;
    case 8:
        cout << "\nThank You! For using this Software." << endl;
        break;
    default:
        cout << "\n''You have given WRONG Input.''" << endl;
        trigonometric();
        break;
    }
    return;
}

void invtrigo(){
    int opt4;
    double val;

    cout <<"\nInverse Trigonometric Functions : "
    "\n1. Arcsine."
    "\n2. Arccosine."
    "\n3. Arctangent."
    "\n4. Arccosecant."
    "\n5. Arcsecant."
    "\n6. Arccotangent"
    "\n7. Back"
    "\n8. Exit\n\n";

    cout << "Select any Function: ";
    cin >> opt4;
    
    // Below 'IF' Command will not be run for 7th and 8th option
    if ((opt4 == 1) || (opt4 == 2) || (opt4 == 3) || (opt4 == 4) || (opt4 == 5) || (opt4 == 6)){
        cout << "Enter value : ";
        cin >> val;
    }

    switch(opt4){
    case 1:
        cout << "ArcSin ( " << val << " ) = " << asin(val) << endl;
        invtrigo();
        break;
    case 2:
        cout << "ArcCos ( " << val << " ) = " << acos(val) << endl;
        invtrigo();
        break;
    case 3:
        cout << "ArcTan ( " << val << " ) = " << atan(val) << endl;
        invtrigo();
        break;
    case 4:
        cout << "ArcCosec ( " << val << " ) = " << asin(1/val) << endl;
        invtrigo();
        break;
    case 5:
        cout << "ArcSec ( " << val << " ) = " << acos(1/val) << endl;
        invtrigo();
        break;
    case 6:
        cout << "ArcCot ( " << val << " ) = " << atan(1/val) << endl;
        invtrigo();
        break;
    case 7:
        main();
        break;
    case 8:
        cout << "\nThank You! For using this Software." << endl;
        break;
    default:
        cout << "''You have given WRONG Input.''" << endl;
        invtrigo();
        break;
    }
    return;
}

void exponential(){
    float base;
    float exp;

    cout << "\nEnter base : ";
    cin >> base;
    cout << "Enter exponent : ";
    cin >> exp;

    cout << "The " << base << " to the power " << exp << " = " <<  pow(base, exp) << endl << endl;

    cho_exp();
    return;
}

void cho_exp(){
    // This function is created to use recursion when user gives wrong input from below options.
    int opt5; 
    cout << "1. If you want to continue solving Exponential Function.\n"
            "2. Wants to go to Previous Menu.\n"
            "3. Exit the Whole Program.\n\n";
    
    cout << "Choose : ";
    cin >> opt5;

    if (opt5 == 1){
        exponential();
    }
    else if (opt5 == 2){
        main();
    }
    else if (opt5 == 3){
        cout << "\nThank You! For using this Software." << endl;
    }
    else {
        cout << "''You have given WRONG Input.''" << endl << endl;
        cho_exp();
    }
    return;
}

void logarithmic(){
    float value;

    cout << "\nEnter the value to calculate the log(e) : ";
    cin >> value;
    
    cout << "The value of log(e)(" << value << ") = " << log(value) << endl << endl;

    cho_log();
    return;    
}

void cho_log(){
    // This function is created to use recursion when user gives wrong input from below options.
    int opt6;
    cout << "1. If you want to continue solving Logarithm Function.\n"
            "2. Wants to go to Previous Menu.\n"
            "3. Exit the Whole Program.\n\n";
        
    cout << "Choose : ";
    cin >> opt6;

    if (opt6 == 1){
        logarithmic();
    }
    else if (opt6 == 2){
        main();
    }
    else if (opt6 == 3){
        cout << "\nThank You! For using this Software." << endl;
    }
    else {
        cout << "''You have given WRONG Input.''" << endl << endl;
        cho_log();
    }
    return;
}

void quad_equ(){
    float a, b, c, disc, root1, root2, real_part, imaginary_part;
    

    cout << "\nThe General Quadratic equation is ax2 + bx + c \n";
    cout << "Enter the value of coefficient a, b & c\n";
    cin >> a >> b >> c;

    disc = (b*b - (4*a*c));

    // For Real and Distict Roots
    if (disc > 0){
        cout << "Roots are Real and Unequal.\n";
        root1 = (-b + sqrt(disc))/(2*a);
        root2 = (-b - sqrt(disc))/(2*a);
        cout << "Root 1 = " << root1 <<endl << "Root 2 = " << root2 << endl << endl;
    }
    // For Real and Equal Roots
    else if (disc == 0){
        cout << "Roots are Real and Equal.\n";
        root1 = -b/(2*a);
        cout << "Root 1 = Root 2 = " << root1 << endl << endl;
    }
    // For Unreal Roots
    else {
        cout << "Roots are Unreal.\n";
        real_part = -b/(2*a);
        imaginary_part = sqrt(-disc)/(2*a);
        cout << "Unreal Root 1 = " << real_part << " + (" << imaginary_part << ")i" << endl <<
                "Unreal Root 2 = " << real_part << " - (" << imaginary_part << ")i" << endl << endl;
    }

    cho_quad();
    return;
}

void cho_quad(){
    // This function is created to use recursion when user gives wrong input from below options.

    int opt7;

    cout << "1. If you want to continue solving Quadratic Equation.\n"
            "2. Wants to go to Previous Menu.\n"
            "3. Exit the Whole Program.\n\n";
    
    cout << "Choose : ";
    cin >> opt7;

    if (opt7 == 1){
        quad_equ();
    }
    else if (opt7 == 2){
        main();
    }
    else if (opt7 == 3){
        cout << "\nThank You! For using this Software." << endl;
    }
    else {
        cout << "''You have given WRONG Input.''" << endl << endl;
        cho_quad();
    }
    return;
}

void cubic_equ(){
    double a, b, c, d;
    
    cout << "\nGive the value of a, b, c and d of Cubic Equation ax3 + bx2 + cx + d = 0 \n";
    cin >> a >> b >> c >> d;
    
    b /= a;
    c /= a;
    d /= a;
    
    double disc, q, r, dum1, s, t, term1, r13;
    q = (3.0*c - (b*b))/9.0;
    r = -(27.0*d) + b*(9.0*c - 2.0*(b*b));
    r /= 54.0;
    disc = q*q*q + r*r;
    term1 = (b/3.0);
    
    double x1_real, x2_real, x3_real;
    double x2_imag, x3_imag;
    string x2_imag_s, x3_imag_s;

    if (disc > 0)   {
        // One root real, two are complex
        s = r + sqrt(disc);
        s = s<0 ? -cbrt(-s) : cbrt(s);
        t = r - sqrt(disc);
        t = t<0 ? -cbrt(-t) : cbrt(t);
        x1_real = -term1 + s + t;
        term1 += (s + t)/2.0;
        x3_real = x2_real = -term1;
        term1 = sqrt(3.0)*(-t + s)/2;
        x2_imag = term1;
        x3_imag = -term1;
        x2_imag_s =  " + ("+ to_string(x2_imag) + ")i";
        x3_imag_s =  " - ("+ to_string(x2_imag) + ")i";
    } 
    
    // The remaining options are all real

    else if (disc == 0) { 
    // All roots real, at least two are equal. 
        x3_imag = x2_imag = 0;
        r13 = r<0 ? -cbrt(-r) : cbrt(r);
        x1_real = -term1 + 2.0*r13;
        x3_real = x2_real = -(r13 + term1);
    }

    // Only option left is that all roots are real and unequal (to get here, q < 0)
    
    else {
        x3_imag = x2_imag = 0;
        q = -q;
        dum1 = q*q*q;
        dum1 = acos(r/sqrt(dum1));
        r13 = 2.0*sqrt(q);
        x1_real = -term1 + r13*cos(dum1/3.0);
        x2_real = -term1 + r13*cos((dum1 + 2.0*M_PI)/3.0);
        x3_real = -term1 + r13*cos((dum1 + 4.0*M_PI)/3.0);
    }
    
    cout << "\nRoots:" << endl <<
            "  x1 = " << x1_real << endl <<
            "  x2 = " << x2_real << x2_imag_s << endl <<
            "  x3 = " << x3_real << x3_imag_s << endl << endl;
    
    cho_cub();
    return;
}

void cho_cub(){
    // This function is created to use recursion when user gives wrong input from below options.

    int opt8;

        cout << "1. If you want to continue solving Cubic Equation.\n"
                "2. Wants to go to Previous Menu.\n"
                "3. Exit the Whole Program.\n\n";
    
    cout << "Choose : ";
    cin >> opt8;

    if (opt8 == 1){
        cubic_equ();
    }
    else if (opt8 == 2){
        main();
    }
    else if (opt8 == 3){
        cout << "\nThank You! For using this Software." << endl;
    }
    else {
        cout << "''You have given WRONG Input.''" << endl << endl;
        cho_cub();
    }
    return;
}

void add(){
    int n, i;
    float sum = 0;
    cout << "How many numbers you want to ADD : ";
    cin >> n;
    float num[n];

    cout << "Enter the numbers :" << endl;
    // Taking Inputs from user
    for (i = 0; i < n; i++){
        cin >> num[i];
        sum += num[i];
    }

    // Printing those Inputs with sign '+' making it more User-Friendly
    cout << "The Sum of ";
    for (i = 0; i < n-1; i++){
        cout << num[i] << " + ";
    }
    
    cout << num[i] << " = " << sum << endl; 
    // Here num[i] represents last number which you gave (as, i=n-1) and it should be printed without printing '+' sign.

    cout << "------------------------------------------------------------------------" << endl;
    return;
}

void sub(){
    float num1, num2;
    cout << "Enter the value of Minued (num1) : ";
    cin >> num1;
    cout << "Enter the value of Sutrahend (num2) : ";
    cin >> num2;

    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << "------------------------------------------------------------------------" << endl;
    return;
}

void mul(){
    int n, i;
    float pro = 1;
    cout << "How many numbers you want to MULTIPLY : ";
    cin >> n;
    float num[n];
    cout << "Enter the numbers :" << endl;
    // Taking Inputs from user
    for (i = 0; i < n; i++){
        cin >> num[i];
        pro *= num[i];
    }
    // Printing those Inputs with sign '*' making it more User-Friendly
    cout << "The Product of ";
    for (i = 0; i < n-1; i++){
        cout << num[i] << " * ";

    }

    cout << num[i] << " = " << pro << endl; 
    // Here num[i] represents last number which you gave (as, i=n-1) and it should be printed without printing '*' sign.

    cout << "------------------------------------------------------------------------" << endl;
    return;
}

void div(){
    float num1, num2;
    cout << "Enter the value of Dividend : ";
    cin >> num1;
    cout << "Enter the value of Divisor : ";
    cin >> num2;
    
    // If denominator is Zero then Answer will be Not Defined 
    if (num2 == 0){
        cout << "''Not Defined''\n" << "Divisor cannot be 'Zero'. You have typed something Wrong.\n\n";
        cout << "Enter the value of Divisor 'Again' : ";
        cin >> num2;
    }
    
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl; 
    cout << "------------------------------------------------------------------------" << endl;  
    return;
}

void sqr(){
    float num; 
    cout << "Enter the Number : ";
    cin >> num;
    cout << "The Square of " << num << " = " << pow (num,2) << endl;
    cout << "------------------------------------------------------------------------" << endl; 
    return;
}

void sqrt(){
    float num; 
    cout << "Enter the Number : ";
    cin >> num;
    cout << "The Square Root of " << num << " = " << sqrt(num) << endl;
    cout << "------------------------------------------------------------------------" << endl; 
    return;
}

string Bin_Dec(string binary){
    string result = ""; // An empty string
    double decimal = 0.0;
    int point = binary.find("."); //Returns index
    int size = binary.length(); //Returns Number of character

    // If point (.) is not present (-1)
    if (point == -1){
        point = size - 1; // starting from the last character
    }
    else {
        point--; // moving to the character before point(.)
    }

    // Instead of using below loop, you can directly calculate decimal number (Only integral value) by using:--- 
    // decimal = stoi(binary, 0, 2); // '2' decides that it is for binary
    // Below Loop is for calculating integral part only
    int n = 0; //power will start from zero and will increase
    for (int i = point; i >= 0; i--){
        // Concatenating '-' character at the beginning of an empty string 'result'
        if (binary[i] == '-'){
            result.push_back('-');
            break;
        }
        // Checking that given input is correct or not before performing calculation
        if (binary[i] == '0' || binary[i] == '1'){
            decimal += (binary[i] - '0')*pow(2,n);
            n++;
        }
        else {
            return "ERROR! Wrong Input";
        }
    }

    // Below Loop is for calculation of part, which is after decimal point only
    n = -1; //power will start from -1 and will decrease
    for (int i = point + 2; i <= size-1; i++){
        // Checking that given input is correct or not before performing calculation
        if (binary[i] == '0' || binary[i] == '1'){
            decimal += (binary[i] - '0')*pow(2,n);
            n--;
        }
        else {
            return "ERROR! Wrong Input";
        }
    }
    result += to_string(decimal);
    return result;
}

string Oct_Dec(string octal){
    string result = ""; // An empty string
    double decimal = 0.0;
    int point = octal.find("."); //Returns index
    int size = octal.length(); //Returns Number of character

    // If point (.) is not present (-1)
    if (point == -1){
        point = size - 1; // starting from the last character
    }
    else {
        point--; // moving to the character before point(.)
    }

    // Instead of using below loop, you can directly calculate decimal number (Only integral value) by using:--- 
    // decimal = stoi(octal, 0, 8); // '8' decides that it is for octal
    // Below Loop is for calculating integral part only
    int n = 0; //power will start from zero and will increase
    for (int i = point; i >= 0; i--){
        // Concatenating '-' character at the beginning of an empty string 'result'
        if (octal[i] == '-'){
            result.push_back('-');
            break;
        }
        // Checking that given input is correct or not before performing calculation
        if (octal[i] >= '0' && octal[i] <= '7'){
            decimal += (octal[i] - '0')*pow(8,n);
            n++;
        }
        else {
            return "ERROR! Wrong Input";
        }
    }
    // Below Loop is for calculation of part, which is after decimal point only
    n = -1; //power will start from -1 and will decrease
    for (int i = point + 2; i <= size-1; i++){
        // Checking that given input is correct or not before performing calculation
        if (octal[i] >= '0' && octal[i] <= '7'){
            decimal += (octal[i] - '0')*pow(8,n);
            n--;
        }
        else {
            return "ERROR! Wrong Input";
        }
    }
    result += to_string(decimal);
    return result;
}

string Hex_Dec(string hexa){
    string result = "";
    double decimal = 0.0;
    int point = hexa.find("."); //Returns index
    int size = hexa.length(); //Returns Number of character

    // If point (.) is not present (-1)
    if (point == -1){
        point = size - 1; // starting from the last character
    }
    else {
        point--; // moving to the character before point(.)
    }

    // Instead of using below loop, you can directly calculate decimal number (Only integral value) by using:--- 
    // decimal = stoi(hexa, 0, 16); // '16' decides that it is for hexa
    // Below Loop is for calculating integral part only
    int n = 0; //power will start from zero and will increase
    for (int i = point; i >= 0; i--){
        // Concatenating '-' character at the beginning of an empty string 'result'
        if (hexa[i] == '-'){
            result.push_back('-');
            break;
        }
        // Condition for number 0-9
        if (hexa[i] >= '0' && hexa[i] <= '9'){
            decimal += (hexa[i] - '0')*pow(16,n);
            n++;
        }
        // Condition for character A-F
        else if (hexa[i] >= 'A' && hexa[i] <= 'F'){
            decimal += (hexa[i] - 'A' + 10)*pow(16,n);
            n++;
        }
        else {
            return "ERROR! Wrong Input";
        }
    }

    // Below Loop is for calculation of part, which is after decimal point only
    n = -1; //power will start from -1 and will decrease
    for (int i = point + 2; i <= size-1; i++){
        // Condition for number 0-9
        if (hexa[i] >= '0' && hexa[i] <= '9'){
            decimal += (hexa[i] - '0')*pow(16,n);
            n--;
        }
        // Condition for character A-F
        else if (hexa[i] >= 'A' && hexa[i] <= 'F'){
            decimal += (hexa[i] - 'A' + 10)*pow(16,n);
            n--;
        }
        else {
            return "ERROR! Wrong Input";
        }
    }
    result += to_string(decimal);
    return result;
}

string Dec_Bin(string decimal){
    if (decimal == "ERROR! Wrong Input"){
        return "ERROR! Wrong Input";
    }
    string binary = ""; // An empty string
    // Solving the integral part (before point)
    int part1 = stoi(decimal); // Storing integral part of decimal value in part1
    int remainder = 0;
    while (part1 != 0){
        if (part1 < 0){
            part1 = -part1; // Changing the sign to positive, if input is negative
        }
        remainder = part1 % 2;
        binary += to_string(remainder);
        part1 /= 2;
    }

    // Concatenating '-' sign if given decimal number is negative
    if (decimal[0] == '-'){
        binary.push_back('-');
    }

    // Reversing the String
    // Can also use 'reverse(binary.begin(), binary.end());' to reverse a string directly by including <bits/stdc++.h>
    string rev_binary;
    int size1 = binary.length();
    for (int i = size1-1; i >= 0; i--){
        rev_binary.push_back(binary[i]);
    }

    binary = rev_binary;
    
    // Extracting value after the point from the string 'decimal' and storing it in part2
    int size2 = decimal.length();
    int point = decimal.find('.');
    if (point == -1){
        return binary;
    }
    int temp = 0;
    for (int i = point+1; i <= size2-1; i++){
        temp = temp*10  + (decimal[i] - '0');
    }
    double part2 = temp / pow(10,size2-1-point);

    double rem;
    // Solving for number after the point
    for (int i = 1; i <= 15 && part2 != 0; i++){
        // Firstly pushing '.' sign at the end of string before starting solving 
        if (i == 1){
            binary.push_back('.');
        }
        rem = part2 * 2;
        binary += to_string(int(rem));
        part2 = rem - int(rem);
    }
    return binary;
}

string Dec_Oct (string decimal){
    if (decimal == "ERROR! Wrong Input"){
        return "ERROR! Wrong Input";
    }
    string octal = ""; // An empty string

    // Solving the integral part (before point)
    int part1 = stoi(decimal); // Storing integral part of decimal value in part1
    int remainder = 0;
    while (part1 != 0){
        if (part1 < 0){
            part1 = -part1; // Changing the sign to positive, if input is negative
        }
        remainder = part1 % 8;
        octal += to_string(remainder);
        part1 /= 8;
    }

    // Concatenating '-' sign if given decimal number is negative
    if (decimal[0] == '-'){
        octal.push_back('-');
    }

    // Reversing the String
    // Can also use 'reverse(octal.begin(), octal.end());' to reverse a string directly by including <bits/stdc++.h>
    string rev_octal;
    int size1 = octal.length();
    for (int i = size1-1; i >= 0; i--){
        rev_octal.push_back(octal[i]);
    }

    octal = rev_octal;
    
    // Extracting value after the point from the string decimal and storing it in part2
    int point = decimal.find('.');
    int size2 = decimal.length();
    if (point == -1){
        return octal;
    }
    int temp = 0;
    for (int i = point+1; i <= size2-1; i++){
        temp = temp*10  + (decimal[i] - '0');
    }
    double part2 = temp / pow(10,size2-1-point);
    
    double rem;
    // Solving for number after the point
    for (int i = 1; i <= 15 && part2 != 0; i++){
        // firstly pushing '.' sign at the end of string before starting solving 
        if (i == 1){
            octal.push_back('.');
        }
        rem = part2 * 8;
        octal += to_string(int(rem));
        part2 = rem - int(rem);
    }
    return octal;
}

string Dec_Hex (string decimal){
    if (decimal == "ERROR! Wrong Input"){
        return "ERROR! Wrong Input";
    }
    string hexa = ""; // An empty string

    // Solving the integral part (before point)
    int part1 = stoi(decimal); // Storing integral part of decimal value in part1
    int remainder = 0;
    while (part1 != 0){
        if (part1 < 0){
            part1 = -part1; // Changing the sign to positive, if input is negative
        }
        remainder = part1 % 16;
        //
        if (remainder >= 0 && remainder <= 9){
            hexa += to_string(remainder);
        }
        else if (remainder >= 10 && remainder <= 15){
            hexa += ('A' + (remainder - 10)); // Bracket part is already a string
        }
        part1 /= 16;
    }

    // Concatenating '-' sign if given decimal number is negative
   if (decimal[0] == '-'){
        hexa.push_back('-');
    }

    // Reversing the String
    // Can also use 'reverse(hexa.begin(), hexa.end());' to reverse a string directly by including <bits/stdc++.h>
    string rev_hexa;
    int size1 = hexa.length();
    for (int i = size1-1; i >= 0; i--){
        rev_hexa.push_back(hexa[i]);
    }

    hexa = rev_hexa;
    
    // Extracting value after the point from the string decimal and storing it in part2
    int point = decimal.find('.');
    int size2 = decimal.length();
    if (point == -1){
        return hexa;
    }
    int temp = 0;
    for (int i = point+1; i <= size2-1; i++){
        temp = temp*10  + (decimal[i] - '0');
    }
    double part2 = temp / pow(10,size2-1-point);
    
    double rem;
    // Solving for number after the point
    for (int i = 1; i <= 15 && part2 != 0; i++){
        // firstly pushing '.' sign at the end of string before starting solving 
        if (i == 1){
            hexa.push_back('.');
        }
        rem = part2 * 16;
        if (rem >= 0.0 && rem <= 9.0){
            hexa += to_string(int(rem));
        }
        else if (rem >= 10.0 && rem <= 15.0){
            hexa += ('A' + (int(rem) - 10));
        }
        part2 = rem - int(rem);
    }
    return hexa;
}

string Oct_Hex (string octal){
    return Dec_Hex(Oct_Dec(octal));
}

string Hex_Oct (string hexa){
    return Dec_Oct(Hex_Dec(hexa));
}

string Bin_Hex (string binary){
    return Dec_Hex(Bin_Dec(binary));
}

string Hex_Bin (string hexa){
    return Dec_Bin(Hex_Dec(hexa));
}

string Bin_Oct (string binary){
    return Dec_Oct(Bin_Dec(binary));
}

string Oct_Bin (string octal){
    return Dec_Bin(Oct_Dec(octal));
}

void operation_number_system(){
    cout << "\nArithmetic Operations (+, -, *, /) On Special Number System"
    "\n1. Binary Number System"
    "\n2. Octal Number System"
    "\n3. Hexadecimal Number System"
    "\n4. Back\n";
    int option;
    
    cout << "Choose: ";
    cin >> option;

    string num1, num2;
    char ch;

    if (option == 1){
        cout << "Enter first Binary Number: ";
        cin >> num1;
        cout << "Operation (+ - * /): ";
        cin >> ch;
        cout << "Enter second Binary Number: ";
        cin >> num2;
        if (ch == '+'){
            cout << "Result = " << Dec_Bin(to_string(stod(Bin_Dec(num1))+stod(Bin_Dec(num2))));
        }
        else if (ch == '-'){
            cout << "Result = " << Dec_Bin(to_string(stod(Bin_Dec(num1))-stod(Bin_Dec(num2))));
        }
        else if (ch == '*'){
            cout << "Result = " << Dec_Bin(to_string(stod(Bin_Dec(num1))*stod(Bin_Dec(num2))));
        }
        else if (ch == '/'){
            cout << "Result = " << Dec_Bin(to_string(stod(Bin_Dec(num1))/stod(Bin_Dec(num2))));
        }
        else {
            cout << "Wrong Input!" << endl;
        }
        operation_number_system();
    }

    else if (option == 2){
        cout << "Enter first Octal Number: ";
        cin >> num1;
        cout << "Operation (+ - * /): ";
        cin >> ch;
        cout << "Enter second Octal Number: ";
        cin >> num2;
        if (ch == '+'){
            cout << "Result = " << Dec_Oct(to_string(stod(Oct_Dec(num1))+stod(Oct_Dec(num2))));
        }
        else if (ch == '-'){
            cout << "Result = " << Dec_Oct(to_string(stod(Oct_Dec(num1))-stod(Oct_Dec(num2))));
        }
        else if (ch == '*'){
            cout << "Result = " << Dec_Oct(to_string(stod(Oct_Dec(num1))*stod(Oct_Dec(num2))));
        }
        else if (ch == '/'){
            cout << "Result = " << Dec_Oct(to_string(stod(Oct_Dec(num1))/stod(Oct_Dec(num2))));
        }
        else {
            cout << "Wrong Input!" << endl;
        }
        operation_number_system();
    }

    else if (option == 3){
        cout << "Enter first Hexadecimal Number: ";
        cin >> num1;
        cout << "Operation (+ - * /): ";
        cin >> ch;
        cout << "Enter second Hexadecimal Number: ";
        cin >> num2;
        if (ch == '+'){
            cout << "Result = " << Dec_Hex(to_string(stod(Hex_Dec(num1))+stod(Hex_Dec(num2))));
        }
        else if (ch == '-'){
            cout << "Result = " << Dec_Hex(to_string(stod(Hex_Dec(num1))-stod(Hex_Dec(num2))));
        }
        else if (ch == '*'){
            cout << "Result = " << Dec_Hex(to_string(stod(Hex_Dec(num1))*stod(Hex_Dec(num2))));
        }
        else if (ch == '/'){
            cout << "Result = " << Dec_Hex(to_string(stod(Hex_Dec(num1))/stod(Hex_Dec(num2))));
        }
        else {
            cout << "Wrong Input!" << endl;
        }
        operation_number_system();
    }

    else if (option == 4){
        conversion();
    }
    else {
        cout << "Wrong Input!" << endl;
        operation_number_system();
    }
}