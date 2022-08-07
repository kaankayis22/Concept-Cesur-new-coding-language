#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
int random;

srand(unsigned(time(0)));
random = rand()%1+1;

//memory locations
int index[] = {0};
int i = 0;
string choice1;
string input;
string storen;
string stores;
//storage
int store1;
int time = 0;
string name1;
int num1;
int store2;
string name2;
int num2;
int store3;
string name3;
int num3;
int store4;
string name4;
int q1;
int num4;
int store5;
string name5;
int num5;
int times = 0;
int numvar[100] = {};
int stringvar[100] = {};
string yn;
string output;
string s1;
string s2;
string s3;
string s4;
string s5;
string n1;
string n2;
string n3;
string n4;
string n5;


cout << "Please enter (IDE) to start writing Cesur code; or type (HELP) to get a glossary of keywords: ";
cin >> choice1;

if (choice1 == "HELP" or choice1 == "help") {
cout << "Key Terms: " << endl;
cout << "IMPORTANT: Cesur will guide you on how to make vars, enter text ect. Please follow the directions. AS OF NOW, YOU CAN ONLY STORE 5 VARS, AND 5 STRINGS! " << endl;
cout << "storen <enter variable name> <enter number> " << endl;
cout << "stores <enter variable name> <enter string> "<< endl;
cout << "print (press enter) <expression such as text or numbers> " << endl;
cout << "printvar (press enter) <prints variables such as text or numbers> " << endl;
cout << "open <appname> " << endl;
cout << "listapp <lists all available apps> " << endl;
choice1="IDE";
}

if (choice1 == "IDE" or choice1 == "ide"){
  //look i know this isnt professional, but it works =)
  cout << "\n" <<endl;
  cout << "\n" <<endl;
  cout << "\n" <<endl;
  cout << "\n" <<endl;
  cout << "\n" <<endl;
  cout << "\n" <<endl;
  cout << "\n" <<endl;
  cout << "\n" <<endl;
  cout << "\n" <<endl;
  cout << "\n" <<endl;
  cout << "\n" <<endl;

do {
int i=0;
cout << " "<< endl;
cin >> input;
//storen
if (input == "storen" && times == 0) {

  cout << "What will you like to name the variable: ";
  cin >> name1;


  cout << "What is the value of the variable you will like to store: ";
  cin >> store1;


  cout << "Ok. " << store1 << " will be stored in " <<  name1 << " " << endl;

input = "";
times++;
}
if (input == "storen" && times == 1) {

  cout << "What will you like to name the variable: ";
  cin >> name2;


  cout << "What is the value of the variable you will like to store: ";
  cin >> store2;


  cout << "Ok. " << store2 << " will be stored in " <<  name2 << " " << endl;
  
input = "";
times++;
}
if (input == "storen" && times == 2) {

  cout << "What will you like to name the variable: ";
  cin >> name3;


  cout << "What is the value of the variable you will like to store: ";
  cin >> store3;


  cout << "Ok. " << store3 << " will be stored in " <<  name3 << " " << endl;
  
input = "";
times++;
}
if (input == "storen" && times == 3) {

  cout << "What will you like to name the variable: ";
  cin >> name4;


  cout << "What is the value of the variable you will like to store: ";
  cin >> store4;


  cout << "Ok. " << store4 << " will be stored in " <<  name4 << " " << endl;
  
input = "";
times++;
}if (input == "storen" && times == 4) {

  cout << "What will you like to name the variable: ";
  cin >> name5;


  cout << "What is the value of the variable you will like to store: ";
  cin >> store5;


  cout << "Ok. " << store5 << " will be stored in " <<  name5 << " " << endl;
  
input = "";
times++;
}
/////end storen
//print

if (input == "print") {
  cout << "Enter the text you will like to output.. Press enter when you are finished:  ";
  cin.ignore();
  getline(cin, output);
 // cin >> output;
 cout << "\n" << endl;
  cout << output << endl;


input = "";
}
/// end print
/// stores

if (input == "stores" && time == 0) {

  cout << "What will you like to name the variable: ";
  cin >> n1;


  cout << "Please enter the text you will like to store in the variable: ";
  cin.ignore();
  getline(cin, s1);


  cout << "Ok. " << s1 << " will be stored in " <<  n1 << " " << endl;

input = "";
time++;
}
if (input == "stores" && time == 1) {

  cout << "What will you like to name the variable: ";
  cin >> n2;


  cout << "Please enter the text you will like to store in the variable: ";
  cin.ignore();
  getline(cin, s2);


  cout << "Ok. " << s2 << " will be stored in " <<  n2 << " " << endl;

input = "";
time++;
}
if (input == "stores" && time == 2) {

  cout << "What will you like to name the variable: ";
  cin >> n3;


  cout << "Please enter the text you will like to store in the variable: ";
  cin.ignore();
  getline(cin, s3);


  cout << "Ok. " << s3 << " will be stored in " <<  n3 << " " << endl;

input = "";
time++;
}
if (input == "stores" && time == 3) {

  cout << "What will you like to name the variable: ";
  cin >> n4;


  cout << "Please enter the text you will like to store in the variable: ";
  cin.ignore();
  getline(cin, s4);


  cout << "Ok. " << s4 << " will be stored in " <<  n4 << " " << endl;

input = "";
time++;
}
if (input == "stores" && time == 4) {

  cout << "What will you like to name the variable: ";
  cin >> n1;


  cout << "Please enter the text you will like to store in the variable: ";
  cin.ignore();
  getline(cin, s5);


  cout << "Ok. " << s5 << " will be stored in " <<  n5 << " " << endl;

input = "";
time++;
}
// end store var

//apps
if (input == "apps") {

  cout << "What app will you like to enter? 1)Text-Editor 2) not-Space Invaders: ";
  cin >> q1;

  if (q1 == 1) {
    //text
  }

  if (q1 == 2) {
    cout << "Hehh, well, this is still a work in progress. Sorry!!!! " << endl;
  }




input = "";

}


if (input == "listapp") {

  cout << "As of now, we have a Text-Editor, and not-Space Invaders: ";
  
input = "";

}





}
while (i==0);



}
}

