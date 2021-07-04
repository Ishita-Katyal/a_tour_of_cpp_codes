//********************************************************************************
// Author: Ishita Katyal
// Organization: IK TechServe
// Position: Founder
// Aim: To print identity, square and cube function of user inputted number
// File: 02-nums_squares_cubes.cpp
// Creation Date: July 3, 2021
// Updation Date: July 3, 2021 (take user input number and print square or cube 
//   or num itself by choice)
//********************************************************************************

# include <iostream>

using namespace std;

int main()
{
    // variable declarations
    float num;
    int choice;

    // number input asked for
    cout<<"Enter the number: ";
    cin>>num;

    // choices given
    cout<<"Apply the following functions to the number input:\n";
    cout<<"1. Identity Function\n";
    cout<<"2. Square Function\n";
    cout<<"3. Cube Function\n";
    cout<<"Enter the choice option: ";
    cin>>choice;

    // if conditional for choice
    if(choice == 1){
        cout<<"The function chosen is 'Identity Function'. The result is: "<<num;
    }
    else if(choice == 2){
        cout<<"The function chosen is 'Square Function'. The result is: "<<num*num;
    }
    else if(choice == 3){
        cout<<"The function chosen is 'Cube Function'. The result is: "<<num*num*num;
    }
    // error handling for other options of choice numbers
    else
    {
        cout<<"Your choice is not in our consideration... OOPS!";
    }
    return (0);
}