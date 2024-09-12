#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    vector<int> numbers;
    int num;
    cout << "¬ведите целые числа (в конце любую букву):" << endl;
    while (cin >> num) {
        numbers.push_back(num);
    }

    sort(numbers.begin(), numbers.end());
    cout << "ќтсортированные числа:" << endl;

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
