#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> books(n); 
    
    for (int i = 0; i < n; ++i) {
        cin >> books[i];
    }
    
    int target; 
    cin >> target;
    
   
    for (int i = 0; i < n; ++i) {
        if (books[i] == target) {
            cout << i << endl; 
            return 0;
        }
    }
    cout << -1 << endl;
    
    return 0;
}
