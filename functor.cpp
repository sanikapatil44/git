#include<iostream>
using namespace std;

class Student{
    public:
    int marks;
    string name;

    Student(){

    }

    Student(int m,string n){
        this->marks = m;
        this->name = n;
    }
};

//functor
class StudentComparator{
    public:
      bool operator()(Student a,Student b){
        return a.marks < b.marks;
      }
};

int main(){

    Student s1;
    Student s2;

    s1.marks = 93;
    s1.name = "babbar";

    s2.marks = 94;
    s2.name = "sanika";

    StudentComparator cmp;

    if(cmp(s1,s2)){
        cout<<"love ke marks sanika se kam hai";
    }
    else{
        cout<<"sanika ke marks love se kaam hai";
    }
    
    
    }