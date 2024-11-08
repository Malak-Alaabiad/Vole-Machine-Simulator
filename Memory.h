#ifndef MEMORY_H
#define MEMORY_H

#include <bits/stdc++.h>

using namespace std;

class Memory {
private:
    vector<string> Mem;
public:
    Memory();
    void setMemory(int i, string &s);
    string getMemory(int i);
    void clearCell(int i);
    void clearMemory();
};

#endif //MEMORY_H
