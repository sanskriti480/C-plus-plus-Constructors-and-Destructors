//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 12

#include <iostream>
#include <string>
using namespace std; 

class student{
  int rno; 
  string name; 
  int fee;
  
  public :
  student(int rn, string nm, int fe){
      rno = rn;
      name = nm; 
      fee = fe; 
  }
  
  student(student &t){
      rno = t.rno; 
      name = t.name; 
      fee = t.fee; 
  }
  
  void display(){
      cout<<rno<<"\t"<<name<<"\t"<<fee<<endl;
  }
};

int main(){
    
    student s(15,"Student 1",10000);
    cout<<"---Parameterised Constructor---"<<endl;
    s.display();
    student student1(s); //Copy constructor called
    cout<<"---Copy Constructor---"<<endl;
    student1.display();

    return 0;
}


/*
Output: 

---Parameterised Constructor---
15	Student 1	10000
---Copy Constructor---
15	Student 1	10000

*/
