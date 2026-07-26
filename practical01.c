#include <iostream>
using namespace std;

int num = 100;

int main() {
    int num = 50;

    cout << "Local value: " << num << endl;
    cout << "Global value: " << ::num << endl;

    return 0;
}
