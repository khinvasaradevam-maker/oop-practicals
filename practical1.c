#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    void accept();
    void display();
};

void Student::accept() {
    cout << "Enter Roll Number: ";
    cin >> rollNo;
    
    cout << "Enter Name: ";
    cin >> name;
    
    cout << "Enter Marks: ";
    cin >> marks;
}

void Student::display() {
    cout << "Roll Number: " << rollNo << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
}

int main() {
    Student s;
    s.accept();
    s.display();
    return 0;
}
