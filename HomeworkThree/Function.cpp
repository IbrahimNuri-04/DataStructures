#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int z = a; 
    a = b;       
    b = z;
}

int main() {
    int x, y;
    
    cout << "Enter number  One : ";
    cin >> x;
    cout <<"Enter number  Two : ";
    cin >> y;

    cout<<"Number One = "<<x<<endl;
    cout<<"Number Two = "<<y<<endl;
    
    swap(x, y);
    cout<<"After Using swap Function \n"<<endl;
    
    cout<<"Number One = "<<x<<endl;
    cout<<"Number Two = "<<y<<endl;
    
    return 0;
}