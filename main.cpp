#include <iostream>

using namespace std;
void showArray();
const int number = 5;
int arr[number];
int main()
{
    for(int i = 0; i < number; i++)
    {
        cout << "Type "<<i+1<<". number: ";
        cin >> arr[i];
        cin.ignore();
    }
    showArray();

    int k, t;
    for(int i  = 0; i < number - 1; i++)
    {

        k=i;
        for(int j = i + 1; j < number; j++)
        {
            if(arr[j] < arr[k])
                k=j;
        }
        t = arr[i];
        arr[i] = arr[k];
        arr[k] = t;
    }

    showArray();
    return 0;
}
void showArray()
{
    cout << "\nThis is our array: \n";
    for(int i = 0; i < number; i++)
    {

        cout << i+1 << ". number: " << arr[i] << endl;
    }
}
