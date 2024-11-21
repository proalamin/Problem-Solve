/*
Question: Create three static objects with the help of the constructor of the following class.
Student
{
	name;
	roll;
	section;
	math_marks;
	cls;
}
Then compare those 3 objects and print who got the highest math_marks and print his/her name.
*/


#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
	int roll;
	string section;
	int math_marks;
	int cls;

    Student(string n, int r, string s, int m, int c){
        name=n;
        roll=r;
        section=s;
        math_marks=m;
        cls=c;
    }
};

int main(){

    Student stu1("alamin", 1, "h", 99, 14);
    Student stu2("alamin2", 1, "h", 98, 14);
    Student stu3("alamin3", 1, "h", 97, 14);


    if(stu1.math_marks>stu2.math_marks && stu1.math_marks>stu3.math_marks){
        cout << stu1.name<<endl;

    }else if(stu2.math_marks>stu1.math_marks && stu2.math_marks>stu3.math_marks){
        cout << stu2.name<<endl;

    }else if(stu3.math_marks>stu1.math_marks && stu3.math_marks>stu2.math_marks){
        cout << stu3.name<<endl;
    }

    return 0;
}