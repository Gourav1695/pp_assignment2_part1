#include <bits/stdc++.h>
using namespace std;

    class Person
    {
    private: // Even if notspecified
        char name[20];
        char project[20];
        int C, P;
        char skill[20];
        int D, S, B, R, T, L, Y;

    public:
        void ReadStudentData();
        void PrintStudentData();
    };
        int C, P;
        char project[20];
        int D,S,B,R;
        cin >> C >> P;
        char name[20];
        int T, L,Y;
        char skill[20];
    for (int j = 0; j < C; j++)
    {
        cin >> name >> T;
        for (int i = 0; i < T; i++)
        {
            cin >> skill >> L;
        }
    }
    for (int i = 0; i < P; i++)
    {
        cin>>project>>D>>S>>B>>R;
        for (int j = 0; j < R; j++)
        {
            cin>>skill>>Y;
        }

    }
    void Person::ReadStudentData()
    {
        cout <<   << endl;
        cin >> name;
        cout <<  << endl;
        cin >> age;
        cout <<  << endl;
        cin >> department;
        cout << "enter year :" << endl;
        cin >> ;
    }

int main()
{
    return 0;
}