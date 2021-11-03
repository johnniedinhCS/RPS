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

cout << "Wanna play Rock-Paper-Scissors?" << endl;
cout << "(Yes/Y or No/N): ";
getline(cin, answer);
cout << endl;
Sleep(1000);

if (answer == "N" || answer == "No" || answer == "no" || answer == "n") {
    cout << "That's too bad :(" << endl;
    return 0;
}
else if (answer == "Y" || answer == "Yes" || answer == "yes" || answer == "y" || answer == "sure" || answer == "Sure") {
    willContinue = true;
    cout << "CPU: Yay ! :D" << endl;
    Sleep(1500);
    cout << "CPU: Ready ? ?" << endl;
    Sleep(1500);
    while (willContinue) {
        cout << "CPU: ";
        Sleep(500);
        cout << "Rock";
        cout << "...";
        Sleep(1000);
        cout << "Paper";
        cout << "...";
        Sleep(1000);
        cout << "Scissors!!" << endl << endl;
        Sleep(1000);
        cout << "Choose Rock, Paper, or Scissors: ";
        cin >> rpsChoice;
        cout << endl;
        Sleep(1000);
        
        cpuValue = rand() % 3;
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
        cout << endl;

        if (rpsChoice == cpuChoice) {
            cout << "CPU: Draw!" << endl;
        }
        else if (rpsChoice == "Rock" && cpuChoice == "Paper") {
            cout << "CPU: I won ! :)" << endl;
        }
        else if (rpsChoice == "Rock" && cpuChoice == "Scissors") {
            cout << "CPU: You won... :(" << endl;
        }
        else if (rpsChoice == "Paper" && cpuChoice == "Rock") {
            cout << "CPU: You won ! D:" << endl;
        }
        else if (rpsChoice == "Paper" && cpuChoice == "Scissors") {
            cout << "CPU: I won ! :D" << endl;
        }
        else if (rpsChoice == "Scissors" && cpuChoice == "Rock") {
            cout << "CPU: I won ! >:)" << endl;
        }
        else if (rpsChoice == "Scissors" && cpuChoice == "Paper") {
            cout << "CPU: You won ? :O" << endl;
        }
        
        cout << endl;
        Sleep(1000);

        cout << "Play again? (Quit/Q or Yes/Y): ";
        cin >> answer;
        cout << endl;

        if (answer == "Quit" || answer == "Q" || answer == "quit" || answer == "q") {
            willContinue = false;
            Sleep(1000);
            cout << "CPU: Aw shucks...";
            Sleep(1000);
            cout << "See you next time!" << endl;
        }
        else {
            cout << "CPU: Okay, let's play again! :)" << endl << endl;
            Sleep(2000);
        }
    }
}

return 0;
}