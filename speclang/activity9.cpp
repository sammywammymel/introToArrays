#include <iostream>
#include <cmath>
using namespace std;

int main() {
int userVals[4];
int i;
int sumVal;

i = 0;

while (i < 5) {
    cout << "Enter a number: ";
    cin >> userVals[i];
   i = i + 1;
}

return 0;
}