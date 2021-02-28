#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> DynArrNums(3);

    DynArrNums[0] = 300;
    DynArrNums[1] = -100;
    DynArrNums[2] = 155;

    cout << "ilosc elementow w tablicy: " << DynArrNums.size() << endl;

    int AnotherNum = 0;
    cin >> AnotherNum;
    DynArrNums.push_back(AnotherNum);

    cout << " Ilosc elementow w tablicy: " << DynArrNums.size() << endl;
    cout << " Ostatni element w tablicy: ";
    cout << DynArrNums[DynArrNums.size() - 1] << endl;

    return 0;
}