#ifndef REGISTER_H
#define REGISTER_H

#include <bits/stdc++.h>

using namespace std;

class Register{

private:
    vector <string> Reg;

public:
    Register();
    void setRegister(int i, string s);
    string getRegister(int i);
    void clearRegister();
};

#endif //REGISTER_H
