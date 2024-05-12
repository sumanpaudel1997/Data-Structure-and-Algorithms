#include <iostream>
#include <cstdlib>
using namespace std;

void dynamic_calloc()
{
    cout << "************************  Implementing calloc() ********************\n\n";
    float *ptr;
    int n;
    float sum = 0, avg = 0;

    cout << "Enter the size of Array: " << endl;
    cin >> n;
    ptr = (float *)calloc(n, sizeof(float));
    cout << "Enter the elements of array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
        sum += ptr[i];
        avg = sum / n;
    }


    cout << "\nThe elements in the array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << " ";
    }

    cout << "\nThe total sum of elements of array with dynamic size " << n << " is: " << sum << endl;
    cout << "The average of elements of array is: " << avg << endl;

    free(ptr);
}
//
//void dynamic_malloc()
//{
//    cout << "************************  Implementing malloc() ********************\n\n";
//    float *ptr;
//    int n;
//    float sum = 0, avg = 0;
//
//    cout << "Enter the size of Array: " << endl;
//    cin >> n;
//    ptr = (float *)malloc(n * sizeof(float));
//    cout << "Enter the elements of array :" << endl;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> ptr[i];
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        sum += ptr[i];
//        avg = sum / n;
//    }
//    cout << "\nThe elements in the array are: ";
//    for (int i = 0; i < n; i++)
//    {
//        cout << ptr[i] << " ";
//    }
//
//    cout << "\nThe total sum of elements of array with dynamic size " << n << " is: " << sum << endl;
//    cout << "The average of elements of array is: " << avg << endl;
//    free(ptr);
//}
//
//void dynamic_realloc()
//{
//    cout << "************************  Implementing relloc() ********************\n\n";
//    float *ptr, *new_ptr;
//    int n;
//    float sum = 0, avg = 0;
//
//    cout << "Enter the size of Array: " << endl;
//    cin >> n;
//    ptr = (float *)malloc(n * sizeof(float));
//    cout << "Enter the elements of base array :" << endl;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> ptr[i];
//    }
//
//    int new_size;
//    cout << "\nEnter the size of array to resize: " << endl;
//    cin >> new_size;
//    new_ptr = (float *)realloc(ptr, new_size);
//    cout << "Enter the elements to newly resized array :" << endl;
//    for (int i = 0; i < new_size; i++)
//    {
//        cin >> new_ptr[i];
//    }
//
//    for (int i = 0; i < new_size; i++)
//    {
//        sum += new_ptr[i];
//        avg = sum / n;
//    }
//    cout << "\nThe elements in the old array with size " << n << " are: ";
//    for (int i = 0; i < n; i++)
//    {
//        cout << ptr[i] << " ";
//    }
//    cout << "\nThe elements in the new array with size " << new_size << " are: ";
//    for (int i = 0; i < new_size; i++)
//    {
//        cout << new_ptr[i] << " ";
//    }
//
//    cout << "\nThe total sum of elements of array with dynamic size " << new_size << " is: " << sum << endl;
//    cout << "The average of elements of array is: " << avg << endl;
//
//    free(new_ptr);
//}
//
//int main()
//{
//    int choice;
//
//    cout << "\nEnter choices from (1-4) given below.\n";
//    cout << "1. calloc\n";
//    cout << "2. malloc\n";
//    cout << "3. realloc\n";
//    cout << "4. exit\n\n";
//    cin >> choice;
//
//    switch (choice)
//    {
//    case 1:
//        dynamic_calloc();
//        break;
//    case 2:
//        dynamic_malloc();
//        break;
//    case 3:
//        dynamic_realloc();
//        break;
//    case 4:
//        cout << "Program Terminated. Sorry to see you go !!!";
//        exit(1);
//    }
//
//    return 0;
//}
