//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 12

#include <iostream>
using namespace std;
int count=0;

class destruct{
    public:
    destruct()
    {
        count++;
        cout<<"no.of objects created: "<<count<<endl;
    }
    ~destruct()
    {
        count--;
        cout<<"no.of objects destroyed: "<<count<<endl;
    }
};

int main(){
    destruct aa,bb,cc;
    {
        destruct dd;
    }
    return 0;
}

/* Output

no.of objects created: 1
no.of objects created: 2
no.of objects created: 3
no.of objects created: 4
no.of objects destroyed: 3
no.of objects destroyed: 2
no.of objects destroyed: 1
no.of objects destroyed: 0
*/
