#include <iostream>
using namespace std;

int main()
{
    int ThreeRowThreeColumns[3][3] = {{101, 102, 103}, {201, 202, 203}, {301, 302, 303}};

    cout << "Rzad 0: " << ThreeRowThreeColumns[0][0] << " " << ThreeRowThreeColumns[0][1] << " " << ThreeRowThreeColumns[0][2] << endl;
    cout << "Rzad 1: " << ThreeRowThreeColumns[1][0] << " " << ThreeRowThreeColumns[1][1] << " " << ThreeRowThreeColumns[1][2] << endl;
    cout << "Rzad 2: " << ThreeRowThreeColumns[2][0] << " " << ThreeRowThreeColumns[2][1] << " " << ThreeRowThreeColumns[2][2] << endl;
    return 0;
}
