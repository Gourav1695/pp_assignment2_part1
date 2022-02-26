// 2020CSB010 GOURAV KUMAR SHAW
#include <bits/stdc++.h>
#include <time.h>

using namespace std;
struct node
{
    int player_id;
    struct node *next;
};
struct node *start, *ptr, *ptr1, *new_node, *beginn;

int main()
{
    int v2;
    srand(time(NULL));

    int n, k, i, count;
    cout << "enter the no.of player : " << endl;
    cin >> n;
    v2 = rand() % n + 1;
    cout << v2 << endl;
    cout << "enter the value of k (person position that is to be eliminated player) : " << endl;

    cin >> k;
    start = new struct node;
    beginn = new struct node;
    beginn->player_id = v2;
    start->player_id = 1;
    ptr = start;
    ptr1 = beginn;
    for (i = v2 + 1; i <= n; i++)
    // for (i = 2; i <= n; i++)/
    {
        new_node = new struct node;
        ptr->next = new_node;
        new_node->player_id = i;
        new_node->next = start;
        ptr = new_node;
    }
    for (count = n; count > v2; count--)
    // for (count = n; count > 1; count--)
    {
        for (int j = v2; j < v2 + k; ++j)
            // for (i = 1; i < k; ++i)

            ptr = ptr->next;
        cout << " " << ptr->next->player_id << " "
             << "deleted";
        ptr->next = ptr->next->next;
    }
    cout << "\n"
         << "The winner is " << ptr->player_id;

    return 0;
}