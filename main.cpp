#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i<N; i++)
    {
        string str;
        cin >> str;
        int sum = 1;
        for (int j = 0; j<str.length(); j++)
        {
            sum *= int(str[j] - '0');
        }
        cout << sum << endl;
    }
}
