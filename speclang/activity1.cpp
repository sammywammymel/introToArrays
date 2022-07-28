#include <iostream>
#include <cmath>
using namespace std;

int main() {
int itemCount[3];

cout << "Enter a number: ";
cin >> itemCount[0];
itemCount[1] = 99;
itemCount[2] = itemCount[0] * 2;

cout << itemCount[2];

return 0;
}