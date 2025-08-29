//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 12

#include <iostream>
using namespace std;

class fetch{
    public:
    int a,b;
    fetch(){
        a=3;
        b=4;
    }
    fetch(int m, int n){
        a=m;
        b=n;
    }
    fetch(fetch &obj){
        a=obj.a;
        b=obj.b;
    }
    void disp(){
        cout<<"a is "<<a<<endl;
        cout<<"b is "<<b<<endl;
    }
};

int main(){
    fetch f1;
    fetch f2(2,3);
    fetch f3(f2);
    cout<<"Object f1: Default constructor"<<"\n";
    f1.disp();
    cout<<"Object f2: Parameterised Constructor"<<"\n";
    f2.disp();
    cout<<"Object f1: Copy coonstructor of 2"<<"\n";
    f3.disp();
    return 0;
}

/*Output

Object f1: Default constructor
a is 3
b is 4
Object f2: Parameterised Constructor
a is 2
b is 3
Object f1: Copy coonstructor of 2
a is 2
b is 3
*/

