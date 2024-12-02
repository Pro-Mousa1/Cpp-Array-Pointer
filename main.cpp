#include <iostream>
using namespace std;

int main(){
    double numbers [4];
    cout <<"Enter the four numbers"<<endl;

    // For loop to prompt the user to enter the four numbers in the array
    for (int i = 0; i < 4; i++) {
        cin>>numbers[i];
    }
    double sum=0;

    // For loop to add the four numbers in the array
    for (int i = 0; i < 4; ++i) {
        sum+=numbers[i];
    }
    cout<<"The sum of the numbers is: "<<sum<<endl;
    return 0;
}


int main() {
    int num = 10;
    int *ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value at pointer ptr: " << *ptr << endl;

    return 0;
}

int main() {
    int x = 42;
    int *ptr = &x;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    *ptr = 100;
    cout << "Updated value of x: " << x << endl;

    return 0;
}
