#include <iostream>
using namespace std;

int main()
{   
    setlocale(LC_ALL, "ru");
    int array[10] = {1, 2, 8, 5, 12, 6, 1, 9, 7, 3 };
    int count = 0;

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        cout << "Index[" << i << "]" << 
    }

    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        if (array[i] % 2 == 0) {
            count++;
        }
    }
    cout << "Кол-во четных символов в массиве: " << count << endl;
}
