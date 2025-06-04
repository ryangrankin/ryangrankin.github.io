/**************************
//
// NAME: Ryan Rankin
//
// HOMEWORK: 8
//
// CLASS: IC212
//
// INSRUCTOR: Ravi Narayan 
//
// DATE: November 11 2024
//
// FILE: homework8.cpp
//
// DESCRIPTION:
//	This file contains the functions needed to collect user input and make a table of whether each number is a multiple of 3 or not.
//
//
**************************/

#include <iostream>
#include <iomanip>

using namespace std;

int user_interface();
void print_table(int max_num);
void is_multiple3(int, int&);

/****************************
//
// Function Name: main
//
// DESCRIIPTION: the main functions which calls the user interface function as well as the print table function
//
// Parameters: none
//
// Return values: 0
//
*****************************/

int main()
{
    int max_num = user_interface();
    print_table(max_num);
    return 0;
}

/************************
//
// Functon name: is_multiple3
//
// DESCRIPTION : checks if each number is evenly divisible by 3
//
// Parameters: input - the user inputted number
//
// Return Values:
//	returns 1 if the number is a multiple of 3
//	returns 0 if number is a zero or if number is not a multiple of 3
//
************************/

void is_multiple3(int input, int& result)
{
    if(input != 0 && input % 3 == 0)
    {
        result = 1;
    }
    else
    {
        result = 0;
    }
}

/************************
//
// Function name: User_interface
//
// DESCRIPTION: creates an inerface for the user to input a number, prompts user for valid input of number is invalid
//
// Parameters: none
//
// Return: max_num which is valid naximm number inputted by the user
//
//
*************************/

int user_interface()
{
    int max_num = -1;
    

    cout << "this program generates a table of numbers from zero to a number dictated by the user and indicates whether on not each is a multiple of 3 " << endl;

    while(max_num <= 0)
    {
        cout << "enter a max number to show: ";
        cin >> max_num;

        if (max_num <= 0)
        {
            cout << "invalid input! please enter something greater than one! " << endl;
            max_num = -1;
        }
    }

    return max_num;
}

/********************************
//
// Function name: print_table
//
// DESCRIPTION: prints and formates a table of numbers from zero to the provided max number and indicates on the right hand column if each number is a multiple of 3
//
// Parameters: max_num - maximum number in the table
//
// Return values: none
//
//
*********************************/

void print_table(int max_num)
{
    cout << " number   multiple of 3?" << endl;
    for (int i = 0; i <= max_num; i++)
    {
        int result;
        is_multiple3(i, result);
        cout << "    " << i << "     " << (result ? "yes" : "no") << endl;
    }
}
