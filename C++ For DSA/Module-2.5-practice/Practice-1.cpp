
#include<bits/stdc++.h>
using namespace std;
int * get_arry(int n)
{
    int *arry= new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arry[i];
    }
    sort(arry,arry+n,greater<int>());
    return arry;
}


int main()
{
    int n;
    cin>>n;
    int *arry=get_arry(n);
    for(int i=0;i<n;i++)
    {
        cout<<arry[i] <<" ";
    }
    return 0;
}
// #include <iostream>

// int* get_array(int N) {
//     int* array = new int[N]; // Dynamically allocate array of size N
//     for (int i = 0; i < N; ++i) {
//         std::cin >> array[i];
//     }
//     return array; // Return pointer to the array
// }

// int main() {
//     int N;
//     std::cin >> N;

//     int* array = get_array(N);

//     for (int i = 0; i < N; ++i) {
//         std::cout << array[i] << " ";
//     }
//     std::cout << std::endl;

//     delete[] array; // Free the dynamically allocated memory

//     return 0;
// }