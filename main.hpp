#include <iostream>
#include <cmath>
//********************
// Declare Function Prototypes
//********************
void getTwoValues(int &, int &);
int getNextPrime(int);
int getPrevPrime(int);
// ******************************
// Implement all your functions here
// ******************************
void getTwoValues(int& n1, int& n2) {
    int& a = n1;
    int& b = n2;
    std::cin >> a >> b;
}

int getNextPrime(int a) {
    int n = a;
    bool isPrime = false;
    while (!isPrime) {
        n++;
        isPrime = true;
        for (int i = 2; i < sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return n;
}

int getPrevPrime(int a) {
    int n = a;
    bool isPrime = false;
    while (!isPrime) {
        n--;
        isPrime = true;
        for (int i = 2; i < sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return n;
}