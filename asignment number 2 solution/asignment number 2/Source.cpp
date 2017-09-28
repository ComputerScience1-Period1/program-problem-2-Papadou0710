/*
Mamadou Diallo- 9/26/17 P= 1st
Take_in_Data
This assignment is asking me to use information giving to me to make  an output to the user
*/

//Library
#include <iostream>
#include <conio.h>
using namespace std;  //*

// function()

void pause() {
cout  <<"Press any key to continue...";
while (!_kbhit());
_getch();
cout << '/n';
}


// Main

void main() {

//variable 
int  fries ;

int meal;

int meals;

float burger ;

bool  ranch = true ; // asume everyone has ranch

char frisk ;


// display text

cout << " How much does fries cost at  inandout \n ";
cin >> fries;

cout <<  " How much does a burger cost at inandout \n";
cin >> burger;

// assign variable
meal = burger + fries;
cout << " The cost of a meal at inandout is meal  " << meal << endl;



// assign variable
meals = ((burger * 2) + (fries * 2));
cout << " The cost of two meals at inandout is " << meals << endl;



pause();
}

