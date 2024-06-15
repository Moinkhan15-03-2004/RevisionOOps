#include<iostream>
using namespace std;
class Student{// user defined data type
    public:
    string name ;
    int rno ;
    float marks;
    Student(string name ,int rno,float marks){ 
        this->name= name;
        this->rno = rno;
        this->marks = marks;
        // this is constructor
        // name = name;// this give an error so use this keyword for solve like this problem 
        // rno = rno;
        // marks = marks;
    }
};
int main(){
    Student s("raghav",76,92.6);
    cout<<s.rno;
}