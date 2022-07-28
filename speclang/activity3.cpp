#include <iostream>
#include <cmath>
using namespace std;

int main() {
int userVals[5];
int i;

i = 0;

while (i < sizeof(userVals) / sizeof(5)) {
    cout << "Enter a number: ";
    cin >> userVals[i];
   i = i + 1;
}

i = 0;

while (i < sizeof(userVals) / sizeof(5)) {
   cout << userVals[i];
   cout << " ";
   i = i + 1;
}

return 0;
}