//********************************************************************************
// Author: Ishita Katyal
// Organization: IK TechServe
// Position: Founder
// Aim: To take user input - name and age of user
// File: 01-user_input.cpp
// Creation Date: July 3, 2021
// Updation Date: July 3, 2021 (take user input)
//********************************************************************************

# include <iostream>

using namespace std;

int main()
{
    // variables declaration
    char person_first_name[10];
    char person_last_name[10];
    int person_age;

    // 1st interview question - first name
    cout<<"Good morning, what's your first name?\n";
    cin>>person_first_name;

    // 2nd interview question - last name
    cout<<"And your last name, "<<person_first_name<<"?\n";
    cin>>person_last_name;
    
    // 3rd interview question and first and last names combined....
    cout<<"What's your age, "<<person_first_name<<" "<<person_last_name<<"?\n";
    cin>>person_age;

    //3rd answer put in right placeholder
    cout<<"Hey, you're "<<person_age<<" years old!"<<endl;
    
    return (0);
}
