#include <iostream>
#include <cmath>
using namespace std;

int main() {
int oldestPeople[5];
int nthPerson;
int personAge;

// Died 1997 in France
oldestPeople[0] = 122;

// Died in 1999 in U.S.
oldestPeople[1] = 119;

// Died 1993 in U.S.
oldestPeople[2] = 117;

// Died 1998 in Canada
oldestPeople[3] = 117;

// Died 2006 in Equador.
oldestPeople[4] = 116;

cout << "Enter a number:";
cin >> nthPerson;

if (((nthPerson >= 1) and (nthPerson <= 5))) {
   personAge = oldestPeople[nthPerson - 1];
   cout << nthPerson;
   cout << "th oldest person died at age ";
   cout << personAge;
}

return 0;
}