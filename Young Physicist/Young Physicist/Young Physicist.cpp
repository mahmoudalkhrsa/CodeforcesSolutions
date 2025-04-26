#include<iostream>
using namespace std;
int ReadNumber()
{
    int number;
    cin >> number;
    return number;
}
void ReadMatrix(int arr[100][3], int NumberOfRows)
{
    for (int i = 0; i < NumberOfRows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
}
bool isEquilibrium(int arr[100][3], int NumberOfRows)
{
    int sumX = 0, sumY = 0, sumZ = 0;
    for (int i = 0; i < NumberOfRows; i++)
    {
        sumX += arr[i][0];
        sumY += arr[i][1];
        sumZ += arr[i][2];
    }
    if (sumX == 0 && sumY == 0 && sumZ == 0)
        return true;
    return false;
}
int main()
{
    int arr[100][3];
    int NumberOfRows = ReadNumber();
    ReadMatrix(arr, NumberOfRows);
    if (isEquilibrium(arr, NumberOfRows))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}