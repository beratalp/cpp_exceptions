//
// Created by alper on 4.04.2022.
//

#include <iostream>
using namespace std;
unsigned long long arraySize = 9999999999999999999;

class CanGoWrong {
public:
    CanGoWrong() {
        char* pMemory = new char[arraySize];
        delete[] pMemory;
    }
};

int main() {
    try {
        CanGoWrong wrong;
    } catch (bad_alloc& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    cout << "Still running" << endl;
}