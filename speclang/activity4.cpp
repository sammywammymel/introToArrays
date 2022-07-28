#include <iostream>
#include <cmath>
using namespace std;

int main() {
int x;
int y;
int tmpVal;

cout << "Enter a number: ";
cin >> x;
cout << "Enter a number: ";
cin >> y;

// Swap x and y
tmpVal = x;
x = y;
y = tmpVal;

cout << x;
cout << " ";
cout << y;
cout << "\n";

return 0;
}