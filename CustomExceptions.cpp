//
// Created by alper on 4.04.2022.
//
#include <iostream>
#include <exception>
using namespace std;

class MyException: public exception {
public:
    const char* what() const noexcept override { // virtual const char* what() const throw() override {
        return "Something bad happened!";
    }
};

class Test {
public:
    void goesWrong() {
        throw MyException();
    }
};

int main() {
    Test test;
    try {
        test.goesWrong();
    } catch(MyException& e) {
        cout << e.what() << endl;
    }
    return 0;
}
