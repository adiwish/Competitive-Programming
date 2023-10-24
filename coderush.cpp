#include <iostream>
#include <string>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, x, y;
    cin >> N >> x >> y;
    
    string s;
    cin >> s;
    
    long long count = 0; // To store the count of well-balanced substrings
    long long zeroes = 0, ones = 0; // To count the number of 0's and 1's in the substring
    map<pair<long long, long long>, long long> ratioCount; // To store ratio counts
    
    ratioCount[{0, 0}] = 1; // Initialize with an empty string
    
    for (char c : s) {
        if (c == '0') {
            zeroes++;
        } else {
            ones++;
        }
        
        long long gcd = __gcd(zeroes, ones);
        long long ratioZeroes = zeroes / gcd;
        long long ratioOnes = ones / gcd;
        
        // Count substrings with the desired ratio
        count += ratioCount[{ratioZeroes - x, ratioOnes - y}];
        
        // Update the ratio count
        ratioCount[{ratioZeroes, ratioOnes}]++;
    }
    
    cout << count << endl;
    
    return 0;
}
