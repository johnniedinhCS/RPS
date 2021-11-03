#include <cstdlib>
#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <ctime>
#include <Windows.h>
using namespace std;

int main () {
using namespace std;

srand (time(NULL));
string answer;
bool willContinue = false;
int cpuValue = 3;
string rpsChoice;
string cpuChoice;

cout << "Rock-Paper-Scissors? ";
getline(cin, answer);
cout << endl;
Sleep(1000);

if (answer == "N" || answer == "No" || answer == "no" || answer == "n") {
    cout << "That's too bad :(" << endl;
    return 0;
}
else if (answer == "Y" || answer == "Yes" || answer == "yes" || answer == "y" || answer == "sure" || answer == "Sure") {
    willContinue = true;
    cout << "Yay ! :D" << endl;
    Sleep(1500);
    cout << "Ready ? ?" << endl;
    Sleep(1500);
    while (willContinue) {
        cout << "Rock";
        cout << "...";
        Sleep(1000);
        cout << "Paper";
        cout << "...";
        Sleep(1000);
        cout << "Scissors!!" << endl;
        Sleep(1000);
        cout << "Choose Rock, Paper, or Scissors: ";
        cin >> rpsChoice;
        Sleep(1000);
        
        cpuValue = rand() % 3;
        cout << rand() % 3 << endl;
        if (cpuValue == 0) {
            cpuChoice = "Rock";
        }
        else if (cpuValue == 1) {
            cpuChoice = "Paper";
        }
        else if (cpuValue == 2) {
            cpuChoice = "Scissors";
        }
        
        cout << "CPU Choice: " << cpuChoice << endl;
        Sleep(1000);
        cout << "Your Choice: " << rpsChoice << endl;
        Sleep(1500);

        if (rpsChoice == cpuChoice) {
            cout << "Draw!" << endl;
        }
        else if (rpsChoice == "Rock" && cpuChoice == "Paper") {
            cout << "I won ! :)" << endl;
        }
        else if (rpsChoice == "Rock" && cpuChoice == "Scissors") {
            cout << "You won... :(" << endl;
        }
        else if (rpsChoice == "Paper" && cpuChoice == "Rock") {
            cout << "You won ! D:" << endl;
        }
        else if (rpsChoice == "Paper" && cpuChoice == "Scissors") {
            cout << "I won ! :D" << endl;
        }
        else if (rpsChoice == "Scissors" && cpuChoice == "Rock") {
            cout << "I won ! >:)" << endl;
        }
        else if (rpsChoice == "Scissors" && cpuChoice == "Paper") {
            cout << "You won ? :O" << endl;
        }

        Sleep(1000);

        cout << "Play again? (Quit/Q or Yes/Y): ";
        cin >> answer;

        if (answer == "Quit" || answer == "Q" || answer == "quit" || answer == "q") {
            willContinue = false;
            Sleep(1000);
            cout << "Aw shucks...";
            Sleep(1000);
            cout << "See you next time!" << endl;
        }
        else {
            cout << "Okay, let's play again! :)" << endl << endl;
            Sleep(2000);
        }
    }
}

return 0;
}