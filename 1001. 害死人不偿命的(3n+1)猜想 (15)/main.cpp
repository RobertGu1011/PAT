#include <iostream>
using namespace std;

int counter = 0;

void callatz(int n)
{
    if (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
            counter ++;
            callatz(n);
        } else {
            n = (3 * n + 1) / 2;
            counter ++;
            callatz(n);
        }
    }
}

int main()
{
    int n = 0;
    cin >> n;
    callatz(n);
    cout << counter << endl;
    return 0;
}