#include<iostream>
#include<iomanip>
#include <conio.h>
#include <istream>
#include <sstream>
#include <string>


using namespace std;
int variable =100;
//Can we print this variable here using cout<<?
void calculator(){
    
    cout<<"this is calculator"<<endl;
    cout<<"this is another change in main  branch"<<endl;
    cout<<"change in main branch"<<endl;

 cout<<"this is a change in working branch"<<endl;
    cout<<"4th change in working branch "<<endl;
    cout<<"5th change in working branch "<<endl;
    cout<<"6th change in working branch"<<endl;
    cout<<"7th change in working branch"<<endl;
    cout<<"8th change in working branch "<<endl;
    cout<<"again "<<endl;
    cout<<"another line"<<endl;
    
    int num1,num2;
    cout<<"Enter Two numbers";
    cin>>num1>>num2;
    cout<<"two numbers are "<<num1<<" and "<<num2<<endl;
    int operation=0;
    cout<<"Please enter the operation\n1.Addition\n2.Subtraction\n3.Multiply\n4.Divide\n5.Modulous"<<endl;
    cin>>operation;
    switch(operation){
        case 1:cout<<"Addition is "<<num1+num2<<endl;break;
        case 2: cout<<"Subtraction is "<<num1-num2<<endl;break;
        case 3:cout<<"Multiplication is "<<num1*num2<<endl;break;
        case 4:cout<<"Division is "<<(double(num1)/num2)<<endl;break;
        case 5:cout<<"Modulous is "<<num1%num2<<endl;break;
        default: cout<<"Enter a valid operation"<<endl;
    }

}
int calculateAdvance(int a){
    char op =' ';
    cout<<"Please Enter a mathematical Operator"<<endl;
    op=getch();
    int n;
    switch(op){
        case '+':cout<<"enter a number "<<endl;
                cin>>n;
                cout<<a<<"+"<<n<<" = "<<a+n<<endl;
                 return calculateAdvance(a+n);
                  break;
        case '-': cout<<"enter a number "<<endl;
                    cin>>n;
                cout<<a<<"-"<<n<<" = "<<a-n<<endl;
                return calculateAdvance(a-n);
                break;
        case '*': cout<<"enter a number "<<endl;
                cin>>n;
                cout<<a<<"*"<<n<<" = "<<a*n<<endl;
                return calculateAdvance(a*n);
                break;
        case '/':cout<<"enter a number "<<endl;
                cin>>n;
                cout<<a<<"/"<<n<<" = "<<a/n<<endl;
                return calculateAdvance(a/n);
                break;
        case '%': cout<<"enter a number "<<endl;
                cin>>n;
                cout<<a<<"%"<<n<<" = "<<a%n<<endl;
                return calculateAdvance(a%n);
                break;
        default: cout<<"operation ends "<<endl;break; 
        
    }
    cout<<op<<endl;
    return  a;

}

//For global and local variable task

void localGlobal(){
    cout<<"printing variable outside main function "<<variable<<endl;
}
void globalLocal(int var){
     cout<<"printing variable outside main function "<<var<<endl;
     cout<<"accessing global variable with :: scope resolution "<<::variable<<endl;
     ::variable+=10;
}







int main(){
    //Assignment 1: Create a simple calculator
    //calculator();
    cout<<"Assignment 1."<<endl;
    int number;
    cout<<"Enter number for calculator "<<endl;

    cin>>number;
    int ans=calculateAdvance(number);
    cout<<" final answer "<<ans<<endl;

    //========================================================================================//
    //========================================================================================//
    //Assignment 2: Assignment Operator
    cout<<"Assignment 2."<<endl;
    int assign=10;
    cout<<"variable value "<<assign<<endl;
    assign+=10;
    cout<<"value after += operator "<<assign<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"increment and decrement operator for "<<assign<<endl;
    cout<<"variable prefix increment "<<++assign<<" variable after that "<<assign<<endl;
    cout<<"variable postfix increment "<<assign++<<" variable after that "<<assign<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"assigning variables in single line "<<endl;
    int x,y,z;
    x=y=z=50;
    cout<<"x y and z "<<x<<" "<<y<<" "<<z<<endl;
    //========================================================================================//
    //========================================================================================//
    //Assignment 3: Local and global variable 
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    int variable=10;
    cout<<"printing variable in main function "<<variable<<endl;
    localGlobal();
    globalLocal(variable);
    variable +=10;
    cout<<"global variable after operation "<<::variable<<endl;

    //========================================================================================//
    //========================================================================================//
    //Assignment 4: Manipulators
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"using ws "<<endl;
    istringstream s("       using ws with whitespaces");
    string inp;
    getline(s >>ws,inp);
    cout<<"ws without whitespaces "<<inp<<endl;
    cout<<"using ends\n"<<10<<ends<<ends<<20<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"using setw "<<10<<setw(10)<<20<<setw(20)<<"setw(20)"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"using setprecision for 1.34255 without fixed"<<endl;
    float A = 1.34255;
    cout << setprecision(3) << A << endl;
    cout<<"using setprecision for 1.34255 with fixed"<<endl;
    cout <<fixed<< setprecision(3) << A << endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    //========================================================================================//
    //========================================================================================//
    //========================================================================================//
    //========================================================================================//
    cout<<"Question answers"<<endl;
    cout<<"1. Print the ASCII value of the character 'h'. --> 104 "<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"2. Write a program to find the square of the number 3.9. "<<3.9*3.9<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"3. output of the code"<<endl;
    cout<<"output \n5\n5"<<endl<<endl<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"4. code snippet -->Compilation error"<<endl;   
    string s1="Jaswant";
    string s2=" Sharma";
    string s3=s1+s2;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"5. Concatenate 2 strings "<<endl;
    cout<<"Jaswant+ Sharma = "<<s3<<endl<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"6.Write a program to display hexadecimal and octal value of 100 " <<endl;
    int tochange=100;
    cout<<"Hexadecimal of 100 is "<<setbase(16)<<tochange<<" Octal value of 100 is "<<setbase(8)<<tochange<<endl<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"4th change in main branch"<<endl;
    cout<<"5th change in main branch"<<endl;



}
