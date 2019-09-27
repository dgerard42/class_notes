//Daniella Gerard
#include <iostream>
#include <string>

using namespace std;

const int SIZE_0 = 10;

int		binary_search(string array[], int length, string search)
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
	string	test_0[SIZE_0] = {"Aang", "Appa", "Azula", "Iroh", "Jet", "Katara", "Sokka", "Suki", "Toph", "Zuko"};

	cout << binary_search(test_0, SIZE_0, "Aang") << "(0)" << endl;
	cout << binary_search(test_0, SIZE_0, "Appa")  << "(1)" << endl;
	cout << binary_search(test_0, SIZE_0, "Azula") << "(2)"  << endl;
	cout << binary_search(test_0, SIZE_0, "Iroh") << "(3)"  << endl;
	cout << binary_search(test_0, SIZE_0, "Jet") << "(4)"  << endl;
	cout << binary_search(test_0, SIZE_0, "Katara") << "(5)"  << endl;
	cout << binary_search(test_0, SIZE_0, "Sokka") << "(6)"  << endl;
	cout << binary_search(test_0, SIZE_0, "Suki")  << "(7)" << endl;
	cout << binary_search(test_0, SIZE_0, "Toph") << "(8)"  << endl;
	cout << binary_search(test_0, SIZE_0, "Zuko") << "(9)"  << endl;
	cout << binary_search(test_0, SIZE_0, "Beatrice") << "(-1)"  << endl;
	return 0;
}
