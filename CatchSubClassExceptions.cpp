//
// Created by alper on 4.04.2022.
//
#include <iostream>
#include <exception>
using namespace std;

void goesWrong() {
    bool error1Detected = true;
    bool error2Detected = false;
    if(error1Detected) {
        throw bad_alloc();
    }
    if(error2Detected) {
        throw exception();
    }
}

int main() {
    try {
        goesWrong();
    } catch(bad_alloc& e) { // always catch subclasses of std::exception first
        cout << "Exception: " << e.what() << endl;
    } catch(exception& e) {
        cout << "Bad Alloc: " << e.what() << endl;
    }
    return 0;
}

