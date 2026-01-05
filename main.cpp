#include <iostream>
#include <cstdlib>

using namespace std;
int main ()
{
srand (time(0));
int dice1 = (rand()% 6) + 1;
int dice2 = (rand()% 6) + 1;
int dice3 = (rand()% 6) + 1;
int dice4 = (rand()% 6) + 1;
int dice5 = (rand()% 6) + 1;
cout << "You rolled: " << dice1 << " " << dice2 << " " << dice3 << " " << dice4 << " " << dice5 << endl;
return 0;



}
