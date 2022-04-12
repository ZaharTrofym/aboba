#include <iostream>
#include <string>

using namespace std;

int enterNumber(string text) {
    int num;
    cout << text;
    cin >> num;
    return num;
}

int main() {
    int x1 = enterNumber("Введіть перве число: "), x2 = enterNumber("Введіть друге число: ");
    cout << x1 << " + " << x2 << " = " << x1+x2 << endl;
}