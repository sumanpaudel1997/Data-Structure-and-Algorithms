#include <iostream>
#include <cstdlib>
using namespace std;

void dynamic_calloc()
{
    float *ptr;
    int n;
    float sum = 0, avg = 0;

    cout << "Enter the size of Array: " << endl;
    cin >> n;
    ptr = (float *)calloc(n, sizeof(float));
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += ptr[i];
        avg = sum / n;
    }
    cout << "The elements in the array are:";
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << " ";
    }

    cout << "\nThe total sum of elements of array with dynamic size " << n << " is: " << sum << endl;
    cout << "The average of elements of array is: " << avg << endl;
}

void dynamic_malloc()
{
    float *ptr, *new_ptr;
    int n;
    float sum = 0, avg = 0;

    cout << "Enter the size of Array: " << endl;
    cin >> n;
    ptr = (float *)malloc(n * sizeof(float));
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += ptr[i];
        avg = sum / n;
    }
    cout << "The elements in the array are:";
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << " ";
    }

    cout << "\nThe total sum of elements of array with dynamic size " << n << " is: " << sum << endl;
    cout << "The average of elements of array is: " << avg << endl;
}

int main()
{
    int choice;

    while (true)
    {
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        if (choice < 1 || choice > 3)
        {
            cout << "Enter a valid choice from 1 to 3!!" << endl;
            continue; // Go back to the beginning of the loop
        }

        switch (choice)
        {
        case 1:
            dynamic_calloc();
            break;
        case 2:
            dynamic_malloc();
            break;
        case 3:
            // Do something for choice 3
            break;
        default:
            break;
        }
    }

    return 0;
}
