#include<bits/stdc++.h>
using namespace std;

int main() 
{
    double x, y, z;
    cin >> x >> y >> z;
    double A = x / (1 - y / 100.0);
    double B = A * (1 + z / 100.0);
    cout << fixed << setprecision(2) << B << endl;

    return 0;
}
// #include <iostream>
// #include <iomanip>

// using namespace std;

// double calculateSellingPrice(double X, double Y, double Z) {
//     // Calculate the original cost price
//     double costPrice = X / (1 - Y / 100);
    
//     // Calculate the new selling price for Z% profit
//     double sellingPrice = costPrice * (1 + Z / 100);
    
//     // Return the selling price rounded to two decimal places
//     return sellingPrice;
// }

// int main() {
//     double X, Y, Z;
//     // Read input values
//     cin >> X >> Y >> Z;
    
//     // Calculate the selling price
//     double result = calculateSellingPrice(X, Y, Z);
    
//     // Print the result rounded to two decimal places
//     cout << fixed << setprecision(2) << result << endl;
    
//     return 0;
// }
