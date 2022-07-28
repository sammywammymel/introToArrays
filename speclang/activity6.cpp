#include <iostream>
#include <cmath>
using namespace std;

int main() {
int userVals[5];

int i;

i = 0;

while (i < sizeof(userVals) / sizeof(5)) {
   //Do something with element
   userVals[i] = -1;
   i = i + 1;
}

return 0;
}