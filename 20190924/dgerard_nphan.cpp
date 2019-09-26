// Daniella Gerard && Nicholas Phan

#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5;
const int SIZE_2 = 78;

int         binary_search(int array[], int length, int search)
{
    int index = 0;
    int old_index = 0;
    int side = 0;

    index = length / 2;
    while (array[index] != search)
    {
        if (old_index == index - 1 || old_index == index + 1)
            return -1;
        old_index = index;
        else if (array[index] < search)
            index = (length + index) / 2;
        else if (array[index] > search)
            index = (length - index) / 2;
    }
    return index;
}

void        array_fill(int array[], int length)
{
    int random;
    int first = 1;

    srand (time(NULL));

    for (int index = 0; index < length; index++)
    {
        random = rand() % 3 + 1;
        first += random;
        array[index] = first;
    }
}

void        print_array(int array[], int length) {
        for (int index = 0; index < length; index++){
                        cout << array[index];
                        cout << ", ";
                        }
                        cout << endl;
                        }
int         main()
{
    int test_1[SIZE];
    int test_2[SIZE_2];

    array_fill(test_1, SIZE);
    array_fill(test_2, SIZE_2);
    print_array(test_2, SIZE_2);
    cout << binary_search(test_2, SIZE_2, 77) << endl;
}
