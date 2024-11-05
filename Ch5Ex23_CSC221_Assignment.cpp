/*
Title: Chapter 5 Exercise 23 - Pattern Display
File Name : Ch5Ex23_CSC221_Assignment
Programmer : Brion Blais
Date : 11 / 2024
Requirements :

    Write a program that uses two loops to display patterns, one increasing and one decreasing.
 */


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string column1 = "+";
    int column2Count = 10;

    cout << "------------------------------------------------------------\n";
    cout << "Pattern A \t\t\t" << "Pattern B \n";
    cout << "------------------------------------------------------------\n";
    for (int line = 0; line < 10; line++) {
        string column2Symbol = "+";
        cout << left << setw(10) << column1 << "\t\t\t";
        for (int count = 0; count < column2Count; count++) {
            cout << column2Symbol;
        }
        cout << endl;
        column1 += "+";
        column2Count--;
    }
    cout << "------------------------------------------------------------\n";
    return 0;
}