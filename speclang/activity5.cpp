#include <iostream>
#include <cmath>
using namespace std;

int main() {
int swapList[5];
int placeholder;

swapList[0] = 0;
swapList[1] = 1;
swapList[2] = 2;
swapList[3] = 3;
swapList[4] = 4;

cout << swapList[0];
cout << swapList[1];
cout << swapList[2];
cout << swapList[3];
cout << swapList[4];

cout << "\n";

placeholder = swapList[0];
swapList[0] = swapList[4];
swapList[4] = placeholder;
placeholder = swapList[1];
swapList[1] = swapList[3];
swapList[3] = placeholder;

cout << swapList[0];
cout << swapList[1];
cout << swapList[2];
cout << swapList[3];
cout << swapList[4];

return 0;
}