#ifndef MACHINE_H
#define MACHINE_H

#include <bits/stdc++.h>
#include "Register.h"
#include "Memory.h"
#include "Instructions.h"

using namespace std;

class Machine {
private:
    Register R;
    Memory M;
    Instructions INSTRUCT;
    int Counter = 0;

public:
    void getInstructions();
    void runInstructions(int start, bool printAll);
    void displayResults(bool printAll);
};

#endif //MACHINE_H
