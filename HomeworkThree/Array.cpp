#include <iostream>
using namespace std;
double avrArray(int arr[], int size) {
    double sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    double average = (sum) / size;
    
    cout << "Average = " << average << endl;
    return average;
}
int main() {
    int size = 10;
    int Array[size];
    cout << "Enter 10 values for your Array"<< endl;
    for (int i = 0; i < size; i++) {
        cin >> Array[i];
    }
    avrArray(Array, size);
    
    return 0;
}