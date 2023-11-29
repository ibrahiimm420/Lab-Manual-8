// Task 1

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int n;
//    double sum = 0.0;
//
//    cout << "Enter the number of elements in the array: ";
//    cin >> n;
//
//    if (n <= 0) {
//        cerr << "Invalid array size. Please enter a positive integer." <<endl;
//        return 1; 
//    }
//
//    double arr[n];
//
//    cout << "Enter " << n << " numbers:" <<endl;
//    for (int i = 0; i < n; ++i) {
//        cout << "Element " << i + 1 << ": ";
//        cin >> arr[i];
//        sum += arr[i];
//    }
//
//    double average = sum / n;
//
//    cout << "The average of the numbers is: " << average <<endl;
//
//    return 0; 
//}

// Task 2

//#include <iostream>
//using namespace std;
//
//void bubbleSort(int arr[], int n) {
//    for (int i = 0; i < n - 1; ++i) {
//        for (int j = 0; j < n - i - 1; ++j) {
//            if (arr[j] > arr[j + 1]) {
//                swap(arr[j], arr[j + 1]);
//            }
//        }
//    }
//}
//
//int main() {
//    const int size = 5;
//    int arr[size];
//
//    cout << "Enter " << size << " integers:" <<endl;
//    for (int i = 0; i < size; ++i) {
//        cout << "Element " << i + 1 << ": ";
//        cin >> arr[i];
//    }
//
//    bubbleSort(arr, size);
//
//    cout << "Sorted array using Bubble Sort: ";
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}

// Task 3
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
    
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {

    int arr[5];

    cout << "Enter 5 integers for the array:" <<endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
         cout << arr[i] << " ";
    }
    cout <<endl;

    selectionSort(arr, n);


    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout <<endl;

    return 0;
}












