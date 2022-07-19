/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ahmed Ibrahim
 *
 * Created on June 26, 2022, 4:13 PM
 */
// Q-1
/*3. Write a program that allows the user to enter a number of quarters, dimes, 
and nickels and then outputs the monetary value of the coins in cents. For 
example, if the user enters 2 for the number of quarters, 3 for the number 
of dimes, and 1 for the number of nickels, then the program should 
output that the coins are worth 85 cents
 * */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
      int quarters,dimes,nickels,total_cents;
     cout << "Enter the number of quarters:\n";
     cin >> quarters;
     cout << "Enter the number of dimes:\n";
     cin >> dimes;
     cout << "Enter the number of nickels:\n";
     cin >> nickels;
     total_cents = (quarters * 25) + (dimes * 10) + (nickels * 5);
     cout << total_cents;
     return 0;

    return 0;
}

