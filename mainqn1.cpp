

#include <bits/stdc++.h>
using namespace std;
#define MAX 50
#include <cstring>


typedef struct student
{
    char Name[MAX];
    // string Name;
    int Age;
    char Department[MAX];
    int Year;

} students;
void PrintStudentData(struct student ); // function prototype
void ReadStudentData(struct student st[50]);  // function prototype
int main()
{
    students stu[50];
    int i, n;
    cout << "Enter No of students: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ReadStudentData(&stu[i]); // function call
        PrintStudentData(stu[i]);
    }
    return 0;
};
void ReadStudentData(struct student *s) // function declaration
{

    // string Name;
    // char Name[MAX];
    cout << "Enter  name of student" << endl;// arrow operator is used with a pointer variable pointing to a structure or union
    // cin >> s->Name;
    cin >> ws;
    cin.getline(s->Name, MAX);
    // getline(cin, Name);

    cout << "Enter Age  " << endl;
    cin >> s->Age;
    cout << "Enter Department : ";
    cin >> s->Department;
    cout << "Enter Year" << endl;
    cin >> s->Year;
    // return s;
}
void PrintStudentData(struct student st) // function declaration
{
    cout << "Name : " << st.Name << endl;
    cout << "Age : " << st.Age << endl;
    cout << "Department : " << st.Department << endl;
    cout << "Year : " << st.Year << endl;
    // return st;
}
