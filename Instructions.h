#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#include <bits/stdc++.h>
#include "Register.h"
#include "Memory.h"

using namespace std;

class Instructions {
private:
    vector<string> instruct;

public:
    void startInterface();
    void readFile();
    void apply(Register &registers, Memory &memory, int &Counter, int start, bool printAll);

};

#endif //INSTRUCTIONS_H
