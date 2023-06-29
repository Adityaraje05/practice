#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double R;
    std::cin >> R;

    double area = 3.141592653 * std::pow(R, 2);
    std::cout << std::fixed << std::setprecision(9) << area << std::endl;

    return 0;
}
