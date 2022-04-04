//
// Created by alper on 4.04.2022.
//
#include <iostream>
using namespace std;

void mightGoWrong() {
    bool error1 = false;
    bool error2 = true;
    if(error1) {
        throw "Something went wrong";
    }

    if(error2) {
        throw string("Something else went wrong");
    }
}

void usesMightGoWrong() {
    mightGoWrong();
}

int main() {
    try {
        usesMightGoWrong();
    } catch(int e) {
        cout << "Exception caught: " << e << endl;
    } catch(const char* msg) {
        cout << "Exception caught: " << msg << endl;
    } catch(string& e) {
        cout << "string error message: " << e << endl;
    }
    cout << "Still running..." << endl;
    return 0;
}