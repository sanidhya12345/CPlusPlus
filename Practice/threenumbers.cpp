#include<iostream>
using namespace std;
int main()
{
     int k, s;
    cin >> k >> s;
    int count = 0;
    // Iterate over all possible values of X and Y
    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            int z = s - x - y; // Calculate Z
            if (z >= 0 && z <= k) {
                count++; // Increment count if Z is within the range
            }
        }
    }
    cout<<count;
    return 0;
}