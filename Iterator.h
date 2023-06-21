#include <iostream>
#include <fstream>
#include<cmath>

const int empty = 96;

using namespace std;

template <class T>
class Iterator{
    protected:
    int current_index;
    T elem;

    public:
    Iterator();
    void display_info();
    void Set_info(int ind, T e);
    int GetIndex();
    T GetElem();
};



