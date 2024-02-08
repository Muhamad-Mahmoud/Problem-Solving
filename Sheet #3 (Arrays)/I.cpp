// I. Smallest Pair
#include <iostream>
using namespace std;
int main()
{
    int numOfarrays;
    cin >> numOfarrays;

    for (int z = 0; z < numOfarrays; z++)
    {
    int size;
    cin >> size;
    int arr[size];
    for (int l = 0; l < size; l++)
    {
        cin >> arr[l];
    }

    int result = 0;
    int flage = 0;
    int SmalPossiple = 0;
    for (int i = 1; i < size; i++)
    {
        for (int j = i+1; j <= size; j++)
        {
            result = arr[i - 1] + arr[j - 1] + j - i;
            cout << " result    ==>    " << result << endl;

            if (result < SmalPossiple)
                SmalPossiple = result;
            if (flage == 0)
            {
                SmalPossiple = result;
                flage = 1;
            }
        }
    }

    cout << SmalPossiple << endl;

    }

    return 0;
}