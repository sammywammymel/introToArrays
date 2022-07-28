#include <iostream>
#include <cmath>
using namespace std;

int main() {
int userVals[5];
int i;
int sumVal;

i = 0;

while (i < sizeof(userVals) / sizeof(5)) {
    cout << "Enter a number: ";
    cin >> userVals[i];
   i = i + 1;
}
sumVal = 0;
i = 0;

while (i < sizeof(userVals) / sizeof(5)) {
   sumVal = sumVal + userVals[i];
   i = i + 1;
}

cout << "Sum: ";
cout << sumVal;

return 0;
}