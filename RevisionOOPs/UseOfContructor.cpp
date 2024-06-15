#include<iostream>
using namespace std;
class Student{// user defined data type
    public:
    string name ;
    int rno ;
    float marks;
    Student(string n ,int r,float m){ // this is constructor
        name = n;
        rno = r;
        marks = m;
    }
};
int main(){
    Student s("raghav",76,92.6);
    cout<<s.rno;
    
    
    
    
    
    // intialize like this we can use constructor for easy intilize
    // s.name = "Moin khan";
    // s.rno = 76;
    // s.marks = 92.6;
    // cout<<s.name;
}