#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
struct Student{
char name[50];
int age;
float gpa;
};
int main(){
int n;
cout<<"Enter number of students:";
cin>>n;
Student* students=(Student*)malloc(n*sizeof(Student));

if (students==nullptr){
    cout<<"Memory Allocation Failed!"<<endl;
    return 1;
}
for(int i =0;i<n;i++){
    cout<<"Enter name of Student "<<i+1<<":";
    cin.ignore();
    cin.getline(students[i].name,50);
    cout<<"enter Age:";
    cin>>students[i].age;
    cout<<"Enter GPA:";
    cin>>students[i].gpa;
}
cout<<"\n---Student List----\n";
for(int i=0;i<n;i++){
    cout<<students[i].name<<"  Age:"<<students[i].age<<"  GPA:"<<students[i].gpa<<endl;
}
free(students);
return 0;
}
