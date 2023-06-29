#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int INF =LLONG_MAX >> 1;

signed main() {
    int X, Y;
    std::cin >> X >> Y;
    
    int sum = X + Y;
    int product = X * Y;
    int difference = X - Y;

    std::cout << X << " + " << Y << " = " << sum << std::endl;
    std::cout << X << " * " << Y << " = " << product << std::endl;
    std::cout << X << " - " << Y << " = " << difference << std::endl;

    return 0;
}
