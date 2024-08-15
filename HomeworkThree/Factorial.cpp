#include <iostream>
using namespace std;
int fact(int n) {
    if (n <=0) {
        return 0;
    } 
    if (n = 1) {
        return 1;
    } else {
        return n * fact(n - 1); 
    }
}
int main() {
    int num;
    cout << "Enter number to calculate Fact : ";
    cin >> num;
    
    cout<<"fact for number  "<<num<<"  =  "<<fact(num)<<endl;
    return 0;
}