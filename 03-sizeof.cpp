//********************************************************************************
// Author: Ishita Katyal
// Organization: IK TechServe
// Position: Founder
// Aim: To print memory size for fundamental data types in C++
// File: 03-sizeof.cpp
// Creation Date: July 3, 2021
// Updation Date: July 3, 2021 (to learn about sizeof function)
//********************************************************************************

# include <iostream>

using namespace std;

int main()
{
    cout<<"The memory size of a bool type is: "<<sizeof(bool)<<endl;
    cout<<"The memory size of a char type is: "<<sizeof(char)<<endl;
    cout<<"The memory size of an int type is: "<<sizeof(int)<<endl;
    cout<<"The memory size of an unsigned type is: "<<sizeof(unsigned)<<endl;
    cout<<"The memory size of a double type is: "<<sizeof(double)<<endl;
    return(0);
}