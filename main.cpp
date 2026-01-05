#include <iostream>
#include <cstdlib>

using namespace std;
int main ()
{
srand (time(0));
int dice[5];
bool locked[5] = {false, false, false, false, false};

// avaus heitto 
for (int i = 0; i < 5; i++) {
    dice[i] = (rand() % 6) + 1;

cout << "You rolled a " << dice[i] << " on dice " << (i + 1) << "." << endl;
}


return 0;



}
