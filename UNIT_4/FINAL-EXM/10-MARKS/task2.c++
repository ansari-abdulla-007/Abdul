//2. Write a C++ program to define a class ExamResult with private data members marks1, marks2, and marks3. Create member functions to accept marks and calculate the total and percentage.
#include <iostream>
using namespace std;
class ExamResult{
    private:
    int marks1,marks2,marks3;
    public:
    void setMarks(){
        marks1=75;
        marks2=80;
        marks3=85;
    }
    void calculateResult(){
        int total;
        float percentage;
        total=marks1+marks2+marks3;
        percentage=total/3.0;
        cout<<"Marks 1: "<<marks1<<endl;
        cout<<"Marks 2: "<<marks2<<endl;
        cout<<"Marks 3: "<<marks3<<endl;
        cout<<"Total Marks: "<<total<<endl;
        cout<<"Percentage: "<<percentage<<"%"<<endl;
    }
};
int main(){
    ExamResult e1;
    e1.setMarks();
    e1.calculateResult();
    return 0;
}