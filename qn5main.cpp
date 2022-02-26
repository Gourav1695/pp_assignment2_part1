// 2020CSB010 GOURAV KUMAR SHAW
#include <bits/stdc++.h>
using namespace std;

struct sorting
{
    int x;
};
template <class T>
void sortArray(T a[], int n)
{

    bool b = true;
    while (b)
    {
        b = false;
        for (size_t i = 0; i < n - 1; i++)
        {

            // swapping the variable
            // for sorting order
            if (a[i] > a[i + 1])
            {
                T temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                b = true;
            }
        }
    }
}

template <class T>
void printArray(T a[], int n)
{
    for (size_t i = 0; i < n; ++i)
        cout << a[i] << " ";
    cout << endl;
}
void Readstruct(struct sorting st[50]);
// Driver code
int main()
{
    int n;
    // for int
    cout << "Enter number of elements " << endl;
    cin >> n;
    int intArr[n];
    cout << "Enter"
         << " " << n << " "
         << "elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> intArr[i];
    }

    sortArray(intArr, n);
    printArray(intArr, n);
    // for char
    cout << "Enter number of elements " << endl;
    cin >> n;

    cout << "Enter"
         << " " << n << " "
         << "characters : " << endl;

    char strArr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> strArr[i];
    }
    sortArray(strArr, n);
    printArray(strArr, n);

    // for float
    cout << "Enter number of elements " << endl;
    cin >> n;

    cout << "Enter"
         << " " << n << " "
         << "floating elements : " << endl;

    float floatArr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> floatArr[i];
    }
    sortArray(floatArr, n);
    printArray(floatArr, n);

    // for double
    cout << "Enter number of elements " << endl;
    cin >> n;

    cout << "Enter"
         << " " << n << " "
         << "double elements : " << endl;

    double doubleArr[n];
    for (int i = 0; i < n; i++)
    {

        cin >> doubleArr[i];
    }
    sortArray(doubleArr, n);
    printArray(doubleArr, n);

    // for short
    cout << "Enter number of elements " << endl;
    cin >> n;

    cout << "Enter"
         << " " << n << " "
         << " short elements : " << endl;

    short shortArr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> shortArr[i];
    }

    sortArray(shortArr, n);
    printArray(shortArr, n);
    // structure

    // cout << "Enter number of elements " << endl;
    // cin >> n;

    // cout << "Enter"
    //      << " " << n << " "
    //      << " struct elements : " << endl;

    // sorting structArr[50];
    // for (int i = 0; i < n; i++)
    // {
    //     Readstruct(&structArr[i]); // function call
    // };

    // sortArray(structArr, n);
    // printArray(structArr, n);

    return 0;
}
// void Readstruct(struct sorting *s)
// {
//     cin >> s->x;
// }
