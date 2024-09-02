#include <iostream>
#include <string>
using namespace std;
int main() {

    int n, m;
    
    cout << "Enter the number of students : ";
    cin >> n;
    cout << "Enter the number of subjects : ";
    cin >> m;

    string* students = new string[n];
    double** grades = new double*[n];
    for (int i = 0; i < n; i++) {
        grades[i] = new double[m];
    }
    
    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << i + 1<<" : "<<endl;
        cin >> students[i];
        for (int j = 0; j < m; j++) {
            cout << "Enter grade "<<students[i]<<" in subject " << j + 1 << ": ";
            cin >> grades[i][j];
        }
    }

    cout<<"Student Grades : "<<endl;
    cout << "Name\tDS\tMath\tWeb\tAverage"<<endl;
    for (int i = 0; i < n; i++) {
        double sum = 0;
        cout << students[i] << "\t";
        for (int j = 0; j < m; j++) {
            cout << grades[i][j] << "\t";
            sum = sum+grades[i][j];
        }
        double average = sum / m;
        cout << average << endl;
    }
    
    delete[] students;
    delete[] grades;

    return 0;
}