// 2020CSB010 GOURAV KUMAR SHAW

#include <bits/stdc++.h>

using namespace std;
 struct swapping
{
     int x;
     int y;
};

template <typename T>

void swap_no(T &a, T &b)
{
     T temp;
     temp = a;
     a = b;
     b = temp;
}

int main()
{
     int a = 10, b = 20;
     float p = 10.13, q = 20.34;
     short int s = 10, r = 20;
     double c = 10.133, d = 20.349;

     swapping p1;
     p1.x = 10;
     p1.y = 20;

     swap_no<int>(a, b);
     swap_no<float>(p, q);
     swap_no<short int>(s, r);
     swap_no<double>(c, d);
     swap_no(p1.x, p1.y);
     cout << a << "\n"
          << b << endl;
     cout << p << "\n"
          << q << endl;
     cout << s << "\n"
          << r << endl;
     cout << c << "\n"
          << d << endl;
     cout << p1.x << "\n"
          << p1.y << endl;

     return 0;
}