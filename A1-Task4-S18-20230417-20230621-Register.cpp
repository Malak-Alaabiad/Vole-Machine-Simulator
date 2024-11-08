#include "A1-Task4-S18-20230417-20230621-Register.h"
#include <bits/stdc++.h>

using namespace std;

Register::Register() {
    Reg = vector<string>(16,"00");
}

void Register::setRegister(int i, string s) {
    Reg[i] = s;
}

string Register::getRegister(int i) {
    return Reg[i];
}

void Register::clearRegister() {
    for (string s : Reg) {
        s = "00";
    }
}

