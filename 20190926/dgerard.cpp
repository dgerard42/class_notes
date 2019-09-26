//Daniella Gerard
#include <iostream>
#include <string>

using namespace std;

const int SIZE_0 = 10;
const int SIZE_1 = 20;
const int SIZE_2 = 21;

int		binary_search(int array[], int length, int search)
{
	int	index = (length) / 2;
	int	front = 0;
	int	end = length;
	int	old_index = 0;	

	while (array[index] != search)
	{	
		if (index == old_index)
			return -1;
		old_index = index;	
		if (array[index] > search)
		{
			index = (index - front) / 2;
			end = old_index; 			
		}
		else if (array[index] < search)
		{	
			index = (index + end ) / 2;
			front = old_index;
		}	
	}
	return index;
}

int		main()
{
	string	test_0[SIZE_0] = {Avita, Brandon, Christian, Daniel, Nick, Rachel, ,8,9};
	string	test_1[SIZE_1] = {0,1,1,2,2,3,4,5,6,9,13,17,20,20,21,22,32,37,41,42};
	string	test_2[SIZE_2] = {-12,-12,-11,-3,1,2,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

	cout << binary_search(test_0, SIZE_0, 0) << "(0)" << endl;
	cout << binary_search(test_0, SIZE_0, 1)  << "(1)" << endl;
	cout << binary_search(test_0, SIZE_0, 2) << "(2)"  << endl;
	cout << binary_search(test_0, SIZE_0, 3) << "(3)"  << endl;
	cout << binary_search(test_0, SIZE_0, 4) << "(4)"  << endl;
	cout << binary_search(test_0, SIZE_0, 5) << "(5)"  << endl;
	cout << binary_search(test_0, SIZE_0, 6) << "(6)"  << endl;
	cout << binary_search(test_0, SIZE_0, 7)  << "(7)" << endl;
	cout << binary_search(test_0, SIZE_0, 8) << "(8)"  << endl;
	cout << binary_search(test_0, SIZE_0, 9) << "(9)"  << endl;
	cout << binary_search(test_0, SIZE_0, 10) << "(-1)"  << endl;
	cout << binary_search(test_0, SIZE_0, -1) << "(-1)"  << endl;
	cout << binary_search(test_2, SIZE_2, -12) << "(0 || 1))"  << endl;
	cout << binary_search(test_2, SIZE_2, 16)  << "(20)" << endl;
	cout << binary_search(test_1, SIZE_1, 32)  << "(16)" << endl;
	return 0;
}
