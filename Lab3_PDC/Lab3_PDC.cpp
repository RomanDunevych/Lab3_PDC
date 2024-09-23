#include <iostream>

using namespace std;

int combinations(int n, int r) {
    int result = 1;
    for (int i = 1; i <= r; ++i) {
        result *= (n - i + 1);
        result /= i;
    }
    return result;
}

int main() {
    int n = 13, r = 4; // Задаємо n = 13, r = 4
    cout << "Number of combinations of " << n << " elements taken " << r << " at a time: ";
    cout << combinations(n, r) << endl;
    return 0;
}
