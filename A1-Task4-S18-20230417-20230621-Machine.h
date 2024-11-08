#ifndef MACHINE_H
#define MACHINE_H

#include <bits/stdc++.h>
#include "A1-Task4-S18-20230417-20230621-Register.h"
#include "A1-Task4-S18-20230417-20230621-Memory.h"
#include "A1-Task4-S18-20230417-20230621-Instructions.h"

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