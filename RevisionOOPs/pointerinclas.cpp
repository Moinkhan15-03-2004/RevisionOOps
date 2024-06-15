#include<iostream>
using namespace std;
class Student{
    public:
    string name ;
    int rno ;
    float marks;
    Student(string name ,int rno,float marks){ 
        this->name= name;
        this->rno = rno;
        this->marks = marks;
      
    }
};
void change(Student &s){
    s.name = "Harsh";
}
int main(){
    Student s("raghav",76,92.6);
    Student* ptr = &s;
    cout<<s.name<<endl;
    //(*ptr).rno = 44;// use of this like this use like this shortcut
    ptr->name = "sanket";// this is sortcut 
    cout<<s.name;
}