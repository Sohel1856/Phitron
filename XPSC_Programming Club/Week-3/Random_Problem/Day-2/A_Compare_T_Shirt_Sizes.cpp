// Date: 12-11-2024 at 22:25 BST
// Link: https://codeforces.com/problemset/problem/1741/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        char type_a = a.back();
        char type_b = b.back();

        // cout << type_a << " " << type_b << endl;

        int count_x_a = count(a.begin(), a.end(), 'X');
        int count_x_b = count(b.begin(), b.end(), 'X');

        // cout << count_x_a << " " << count_x_b << endl;

        if (type_a == type_b)
        {
            if (type_a == 'S')
            {

                if (count_x_a > count_x_b)
                    cout << "<" << endl;
                else if (count_x_a < count_x_b)
                    cout << ">" << endl;
                else
                    cout << "=" << endl;
            }
            else if (type_a == 'L')
            {
                if (count_x_a > count_x_b)
                    cout << ">" << endl;
                else if (count_x_a < count_x_b)
                    cout << "<" << endl;
                else
                    cout << "=" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
        else
        {
            if (type_a == 'S' || (type_a == 'M' && type_b == 'L'))
                cout << "<" << endl;
            else
                cout << ">" << endl;
        }
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     while (n--)
//     {
//         string a, b;
//         cin >> a >> b;
//         if (a.size() < b.size() && "S" < "M" || "S" < "L" || "S" < "XL" || "M" < "L" || "M" < "XL" || "L" < "XL")
//         {
//             cout << "<" << endl;
//         }
//         else if (a.size() == b.size() && "S" == "M" || "S" == "L" || "S" == "XL" || "M" == "L" || "M" == "XL" || "L" == "XL")
//         {
//             cout << "=" << endl;
//         }
//         else
//         {
//             cout << ">" << endl;
//         }
//     }
//     return 0;
// }