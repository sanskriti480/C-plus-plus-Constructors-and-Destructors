//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 12

#include <iostream>
using namespace std;

class Construct {
    int a, b; 
public:
    // Default Constructor
    Construct() {
        a = 10;   // Assign default values
        b = 20;
    }

    void displayData() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() {
  // Default constructor is called automatically
    Construct obj;
    obj.displayData();

    return 0;
}

/*
Sample Output:
a = 10
b = 20
*/
