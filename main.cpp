// ------------- FILE HEADER -------------
// Author ✅: August Fabbri
// Assignment ✅:Midterm
// Date ✅:10/25
// Citations: 


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:yes
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: yes
// B. OUTPUT ✅:yes
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:yesGO
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <string>
#include <limits>             
#include <iomanip>
using namespace std;

int main(int argc, char* argv[]) {

  string player1;
  string player2;
  string player3;

  string first_place;
  string second_place;
  string third_place;

  bool tie;

  int player1_rocks = 0;
  int player2_rocks = 0;
  int player3_rocks = 0;

  double average = 0.00;

  
  cout << "Welcome to the Rock Collector Championships!" << endl;
//input
  cout << "\nEnter player one name." << endl;
  getline(cin, player1);
  cout << "How many rocks did " << player1 << " collect?" << endl;
  cin >> player1_rocks;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
 
  if (player1_rocks < 0) {
    cout << "Error! Must enter a postive value. Rocks will be set to zero." << endl;
    player1_rocks = 0;
  }
 
  cout << "\nEnter player two name." << endl;
  getline(cin, player2);
  cout << "How many rocks did " << player2 << " collect?" << endl;
  cin >> player2_rocks;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  
  if (player2_rocks < 0) {
    cout << "Error! Must enter a postive value. Rocks will be set to zero." << endl;
    player2_rocks = 0;
  }

  cout << "\nEnter player three name." << endl;
  getline(cin, player3);
  cout << "How many rocks did " << player3 << " collect?" << endl;
  cin >> player3_rocks;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  
  if (player3_rocks < 0) {
    cout << "Error! Must enter a postive value. Rocks will be set to zero." << endl;
    player3_rocks = 0;
  }
  
  //tie checks
  if (player1_rocks == player2_rocks && player1_rocks == player3_rocks) {
    cout << "\nIts a three way tie!" << endl;
    tie = true;
  }
  else if (player1_rocks == player2_rocks && player1_rocks > player3_rocks) {
    cout << player1 << " and " << player2 << " are tied for 1st place." << endl;
    cout << player3 << " is in second place." << endl;
    tie = true;
  }
  else if (player1_rocks == player3_rocks && player1_rocks > player2_rocks) {
    cout << player1 << " and " << player3 << " are tied for 1st place." << endl;
    cout << player2 << " is in second place." << endl;
    tie = true;
  }
  else if (player2_rocks == player3_rocks && player2_rocks > player1_rocks) {
    cout << player2 << " and " << player3 << " are tied for 1st place." << endl;
    cout << player1 << " is in second place." << endl;
    tie = true;
  }
  //place checks
  else if (player1_rocks > player2_rocks && player1_rocks > player3_rocks) {
    first_place = player1;
    if (player2_rocks > player3_rocks) {
      second_place = player2;
      third_place = player3;
    }
    else  {
      second_place = player3;
      third_place = player2;
    }
    
  }
  else if (player2_rocks > player1_rocks && player2_rocks > player3_rocks) {
    first_place = player2;
    if (player1_rocks > player3_rocks) {
      second_place = player1;
      third_place = player3;
    }
    else {
      second_place = player3;
      third_place = player1;
    }
  }
  else {
    first_place = player3;
    if (player1_rocks > player2_rocks) {
      second_place = player1;
      third_place = player2;
    }
    else {
      second_place = player2;
      third_place = player1;
    }
  }
//place output
  if (!tie) {
    cout << "\n" << first_place << " is in first place!" << endl;
    cout << second_place << " is in second place!" << endl;
    cout << third_place << " is in third place!" << endl;
  }
  
  average = (static_cast<double>(player1_rocks + player2_rocks + player3_rocks) ) / 3.0;
  cout << fixed << setprecision(2);

  cout << "\nThe average number of rocks collected by the top three players is ";
  cout << average << " rocks!"<< endl;

  cout << "\n Congrats!";
  

  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
string player1;
string player2;
string player3;

int player1_rocks;
int player2_rocks;
int player3_rocks;

B. OUTPUT
string first_place;
string second_place;
string third_place;

double average;

C. CALCULATIONS
average = (static_cast<double>(player1_rocks + player2_rocks + player3_rocks) ) / 3.0;

D. LOGIC and ALGORITHMS
OUTPUT "Welcome to the Rock Collector Championships!"

OUTPUT "Welcome to the Rock Collector Championships!"

OUTPUT "Enter player one name."
INPUT player1
OUTPUT "How many rocks did " + player1 + " collect?"
INPUT player1_rocks
IF player1_rocks < 0 THEN
  OUTPUT "Error! Must enter a positive value. Rocks will be set to zero."
  SET player1_rocks = 0

OUTPUT "Enter player two name."
INPUT player2
OUTPUT "How many rocks did " + player2 + " collect?"
INPUT player2_rocks
IF player2_rocks < 0 THEN
  OUTPUT "Error! Must enter a positive value. Rocks will be set to zero."
  SET player2_rocks = 0

OUTPUT "Enter player three name."
INPUT player3
OUTPUT "How many rocks did " + player3 + " collect?"
INPUT player3_rocks
IF player3_rocks < 0 THEN
  OUTPUT "Error! Must enter a positive value. Rocks will be set to zero."
  SET player3_rocks = 0


// tie checks
IF player1_rocks = player2_rocks AND player1_rocks = player3_rocks THEN
  OUTPUT "It's a three way tie!"
  SET tie = true
ELSE IF player1_rocks = player2_rocks AND player1_rocks > player3_rocks THEN
  OUTPUT player1 + " and " + player2 + " are tied for 1st place."
  OUTPUT player3 + " is in second place."
  SET tie = true
ELSE IF player1_rocks = player3_rocks AND player1_rocks > player2_rocks THEN
  OUTPUT player1 + " and " + player3 + " are tied for 1st place."
  OUTPUT player2 + " is in second place."
  SET tie = true
ELSE IF player2_rocks = player3_rocks AND player2_rocks > player1_rocks THEN
  OUTPUT player2 + " and " + player3 + " are tied for 1st place."
  OUTPUT player1 + " is in second place."
  SET tie = true

// place checks
ELSE IF player1_rocks > player2_rocks AND player1_rocks > player3_rocks THEN
  SET first_place = player1
  IF player2_rocks > player3_rocks THEN
    SET second_place = player2
    SET third_place = player3
  ELSE
    SET second_place = player3
    SET third_place = player2
ELSE IF player2_rocks > player1_rocks AND player2_rocks > player3_rocks THEN
  SET first_place = player2
  IF player1_rocks > player3_rocks THEN
    SET second_place = player1
    SET third_place = player3
  ELSE
    SET second_place = player3
    SET third_place = player1
ELSE
  SET first_place = player3
  IF player1_rocks > player2_rocks THEN
    SET second_place = player1
    SET third_place = player2
  ELSE
    SET second_place = player2
    SET third_place = player1


// output results
IF tie = false THEN
  OUTPUT first_place + " is in first place!"
  OUTPUT second_place + " is in second place!"
  OUTPUT third_place + " is in third place!"

SET average = (player1_rocks + player2_rocks + player3_rocks) / 3.0
OUTPUT "The average number of rocks collected by the top three players is " + average + " rocks!"


SAMPLE RUNS

Welcome to the Rock Collector Championships!

Enter player one name.
Gordan Freeman
How many rocks did Gordan Freeman collect?
-9
Error! Must enter a postive value. Rocks will be set to zero.

Enter player two name.
Link
How many rocks did Link collect?
45

Enter player three name.
D.Va
How many rocks did D.Va collect?
45
Link and D.Va are tied for 1st place.
Gordan Freeman is in second place.

The average number of rocks collected by the top three players is 30.00 rocks!

Congrats!

Welcome to the Rock Collector Championships!

Enter player one name.
Mario
How many rocks did Mario collect?
56

Enter player two name.
Master Chief
How many rocks did Master Chief collect?
56

Enter player three name.
Sonic
How many rocks did Sonic collect?
56

Its a three way tie!

The average number of rocks collected by the top three players is 56.00 rocks!

Congrats!

Welcome to the Rock Collector Championships!

Enter player one name.
Kind Dedede
How many rocks did Kind Dedede collect?
57

Enter player two name.
Samus
How many rocks did Samus collect?
102

Enter player three name.
Kirby
How many rocks did Kirby collect?
62

Samus is in first place!
Kirby is in second place!
Kind Dedede is in third place!

The average number of rocks collected by the top three players is 73.67 rocks!

Congrats!
*/