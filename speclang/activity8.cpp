#include <iostream>
#include <cmath>
using namespace std;

int main() {
int userVals [4];
int i;
int maxVal;

i = 0;

while (i < sizeof(userVals) / sizeof(4)) { 
   cout << "Enter a number: ";
   cin >> userVals[i];
   i = i + 1;
}

// Largest so far
maxVal = userVals[0];
i = 0;

while (i < sizeof(userVals) / sizeof(4)) {
   if (userVals[i] > maxVal) {
      maxVal = userVals[i];
   }
   i = i + 1;
}

cout << "Max: ";
cout << maxVal;

return 0;
}