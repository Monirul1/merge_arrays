#include <iostream>
using namespace std;

void fillArray(int arr[], int numOfElements);
void printArray(int arr[], int n);
void mergeArrays(int arr1[], int arr2[], int n1, int n2, int arr3[]);

int main ()
{
    int arr[100], arr2[100], arr3[100], numOfElements;
    
    cout << "How many elemnets you want to insert in each array? ";
    cin >> numOfElements;
    cout << "Enter the elements in array 1 (sorted): ";
    fillArray(arr, numOfElements);
    cout << "Enter the elements in array 2 (sorted): ";
    fillArray(arr2, numOfElements);
    cout << "Your merged arrays are: ";
    mergeArrays(arr, arr2, numOfElements, numOfElements, arr3);
    
    return 0;
}

void fillArray(int arr[], int numOfElements)
{
    for (int i = 0; i < numOfElements; ++i)
        cin >> arr[i];
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void mergeArrays(int arr1[], int arr2[], int n1, int n2, int arr3[])
{
    int a = 0, b = 0, c = 0, n3;
    
    while (a < n1 && b < n2)
    {
        if(arr1[a] < arr2[b])
            arr3[c++] = arr1[a++];
        else
            arr3[c++] = arr2[b++];
    }
    
    if ( a < n1)
    {
        for (int m = a; m < n1; ++m)
            arr3[c++] = arr1[m];
    }
    else
    {
        for (int m = b; m < n2; ++m)
            arr3[c++] = arr2[m];
    }
    n3 = n1+n2;
    printArray(arr3, n3);
}

/* --SAMPLE RUN--
 How many elemnets you want to insert in each array? 4
 Enter the elements in array 1 (sorted): 1 2 5 6
 Enter the elements in array 2 (sorted): 3 4 5 7
 Your merged arrays are: 1 2 3 4 5 5 6 7
 Program ended with exit code: 0
 */



