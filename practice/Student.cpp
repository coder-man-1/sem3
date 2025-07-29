#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
 struct Student
 {
 char name[50];
 int age;
 float gpa;
 };
 int main(){
    int n;
    cout<<"enter number of students";
    cin>>n;
    Student*students=(Student*)malloc(n*sizeof(Student));
    if (students==nullptr){
        cout<<"memory allocation failed"<<endl;
     return 1;
    }
    
        /* code */
return 0;
    
 }
 