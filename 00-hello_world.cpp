//********************************************************************************
// Author: Ishita Katyal
// Organization: IK TechServe
// Position: Founder
// Aim: To introduce Cpp and learn about escape characters and style_guides
// File: 00-hello_world.cpp
// Creation Date: July 3, 2021
// Updation Date: July 3, 2021 (print 'Hello, World')
//********************************************************************************

# include <iostream>
/* instructs the compiler to include standard stream I/O declarations from 
iostream header file
*/ 

using namespace std;
// makes functions from iostream visible without an std or else: std::cout<<"";

int main()
// precursor function from where compiler starts
{
    // cout is a function to print the string literal to the terminal
    cout<<"Hello, World";
    //anything in double-quotes is a string literal in c++
    // '<<' is put operator that puts the argument (/string literal) second 
    // onto first 
    cout<<"Hello, Ishita!\n";
    //'\n' introduces a new line in the terminal output
    cout<<"Ishita replies back saying: Hi!"<<endl;
    //'endl' introduces a new line in the terminal output
    cout<<"The lesson is over for today...";
    return (0);
    // return statement with parantheses
}
