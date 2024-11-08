#include "A1-Task4-S18-20230417-20230621-Memory.h"
#include <bits/stdc++.h>

using namespace std;

Memory::Memory() {
    Mem = vector<string>(256, string("00"));
}

void Memory::setMemory(int i, string &s) {
    Mem[i] = s;
}

string Memory::getMemory(int i) {
    return Mem[i];
}

void Memory::clearCell(const int i) {
    Mem[i] = "00";
}

void Memory::clearMemory() {
    for (string s : Mem) {
        s = "00";
    }
}