#include <iostream>

using namespace std;

int main() {
    int num_1, num_2, result;
    char work;

    cin >> num_1;
    cin >> work;
    cin >> num_2;
    if (work == '+') {
        result = num_1 + num_2;
        cout << result << endl;
    }
    if (work == '-') {
        result = num_1 - num_2;
        cout << result << endl;
    }
    if (work == '*') {
        result = num_1 * num_2;
        cout << result << endl;
    }
    if (work == '/') {
        result = num_1 / num_2;
        cout << result << endl;
    }


    return 0;
}
