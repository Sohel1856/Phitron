#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int firstB = s.find('B');
        int lastB = s.rfind('B');

        int minLength = lastB - firstB + 1;
        
        cout << minLength << endl;
    }
    
    return 0;
}
