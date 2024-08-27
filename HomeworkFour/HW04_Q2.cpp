#include <iostream>
#include <string>
using namespace std;

struct student {
    int ID;
    string Name;
    int Age;
};

int main() {
    student* s1 =  new student;
    student* s2 =  new student;
    student* s3 =  new student;
    
    s1->ID = 1001;
    s1->Name = "John Doe";
    s1->Age = 20;

    s2->ID = 1002;
    s2->Name = "Jane Smith";
    s2->Age = 21;

    s3->ID = 1003;
    s3->Name = "Bob Johnson";
    s3->Age = 19;
    
    cout << "First student data: " << endl;
    cout << "ID: " << s1->ID << endl;
    cout << "Name: " << s1->Name << endl;
    cout << "Age: " << s1->Age << "\n" << endl;
    
    cout << "Second student data: " << endl;
    cout << "ID: " << s2->ID << endl;
    cout << "Name: " << s2->Name << endl;
    cout << "Age: " << s2->Age << "\n" << endl;
    
    cout << "Third student data: " << endl;
    cout << "ID: " << s3->ID << endl;
    cout << "Name: " << s3->Name << endl;
    cout << "Age: " << s3->Age << endl;
    
    delete s1;
    delete s2;
    delete s3;

    return 0;
}