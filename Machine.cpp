#include "A1-Task4-S18-20230417-20230621-Machine.h"
#include "A1-Task4-S18-20230417-20230621-Instructions.h"
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

void Machine::getInstructions() {
    INSTRUCT.readFile();
}

void Machine::runInstructions(const int start, bool printWhole) {
    bool printAll;
    INSTRUCT.apply(R, M, Counter, start, printAll);
}

void Machine::displayResults(bool printWhole) {
    // Display memory with addresses in 16 rows, 16 values per row
    cout << "\nMEMORY:\n\n";
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "|" << setw(5) << "Address" << setw(2);
    for (int j = 0; j < 16; j++) {
        cout << "|" << " " << hex << uppercase << setw(2) << j << " ";
    }
    cout << " | ";
    cout << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < 256; i += 16) {
        cout << "|" << setw(7) << hex << uppercase << i << " | ";  // Row header with starting address
        for (int j = 0; j < 16; j++) {
            cout << setw(3) << hex << uppercase << M.getMemory(i + j) << " " << "|";
        }
        cout << endl;
        cout << "-------------------------------------------------------------------------------------------" << endl;
    }

    // Display registers with addresses in a table format
    cout << "\n\nREGISTERS:\n\n";
    cout << "--------------------" << endl;
    cout << "| " << setw(8) << "Reg No. " << "|" <<setw(7) << "Value" << " |"<< endl;
    cout << "--------------------" << endl;


    for (int j = 0; j < 16; j++) {
        cout << "|"<< setw(4) << "R" << j << "    |" << setw(5) << R.getRegister(j) << "   |" << endl;
        cout << "--------------------" << endl;
    }
    cout << "\nSCREEN: \n\n";
    string ss = M.getMemory(0);
    cout << "HEXA => " << ss << endl;
    cout << "ASCII => ";

    if (ss.length() == 2) {
        for (char c: ss) {
            int ascii = int(c);
            cout << ascii << " ";
        }
        cout << endl;
    }
}

int main() {
    Machine machine;

    string s;
    int start;
    bool printAll;

    machine.getInstructions();

    cout << "\nPLEASE, ENTER THE START ADDRESS (ex.0A): ";
    cin >> start;

    while (true) {
        cin.ignore();
        cout << endl << "\n-------------------------------------------------------------------" << endl;
        cout << "|| DO YOU WANT TO RUN ALL THE INSTRUCTIONS OR RUN STEP BY STEP?! ||";
        cout << endl << "-------------------------------------------------------------------" << endl;
        cout << "||     1 ) RUN ALL THE INSTRUCTIONS...                           ||";
        cout << "\n||     2 ) RUN STEP BY STEP...                                   ||";
        cout <<         "\n-------------------------------------------------------------------" << endl;
        cout << "\n=> Enter your choice: ";
        string choice;
        cin >> choice;
        if (choice == "1") {
            printAll = true;
            break;
        } else if (choice == "2") {
            printAll = false;
            break;
        } else {
            cin.ignore();
            cout << "\nOops!! INVALID CHOICE, PLEASE TRY AGAIN...";
        }
    }

    machine.runInstructions(start, printAll);
    machine.displayResults(printAll);
    return 0;
}
