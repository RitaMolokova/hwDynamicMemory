using namespace std;
#include <iostream>
#include <random>

int main()
{
    srand(time(0));
    int size;
    cout << "Enter size: ";
    cin >> size;
    int* ptr = new int[size];
    for (int i = 0; i < size; i++) {
        ptr[i] = 1 + rand() % (100 - 1 + 1);
        cout << ptr[i] << "\t";
    }
    cout << endl;
    int* ptr2 = new int[size + 1];
    for (int i = 0; i < size; i++) {
        ptr2[i] = ptr[i];
    }
    ptr2[size] = 100;
    for (int i = 0; i <= size; i++) {
        cout << ptr2[i] << "\t";
    }
    cout << endl;
    delete[] ptr;
    delete[] ptr2;
}


