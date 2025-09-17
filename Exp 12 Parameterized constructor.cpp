//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 12

#include <iostream>
using namespace std; 

class construct{
    int a,b; 
    public : 
    construct(int m, int n){
        a = m; 
        b = n;
    }
    void inputdata(){
        cout<<"a = "<<a<<endl<<"b = "<<b;
    }
};

int main(){
    
    construct aa(10,20);
    aa.inputdata();
    
    return 0;
}

/*
Sample Output: 
a = 10
b= 20
*/
