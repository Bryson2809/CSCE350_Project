#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <array>

using namespace std;

const int MAX_VALUES = 1000;

class HelperFunctions 
{
private:
	int medianOfThree(int first, int middle, int last, array<float, MAX_VALUES> arr)
	{
		if ((arr[first] < arr[last] && arr[first] > arr[middle]) || (arr[first] > arr[last] && arr[first] < arr[middle]))
			return first;
		else if ((arr[middle] < arr[last] && arr[middle] > arr[first]) || (arr[middle] < arr[first] && arr[middle] > arr[last]))
			return middle;
		else
			return last;
	}

public:
	HelperFunctions()
	{

	}

	~HelperFunctions()
	{

	}

	void sort_array(array<float, MAX_VALUES> arr)
	{
		int lastElement = 0;

		while (arr[lastElement + 1] != NULL)
		{
			lastElement++;
			//cout << arr[lastElement] << endl;
		}
		int test = medianOfThree(0, arr.size() / 2, lastElement, arr);

		//cout << test << endl;
	}
};

int main(int argc, char* argv[])
{

	if (argc != 3)
	{
		cout << "Incorrect input, must hve two files" << endl;
		return 1;
	}
	ifstream input(argv[1]);

	if (!input)
	{
		cout << "Can't open input.txt file." << endl;
		return 1;
	}

	//float values[MAX_VALUES];

	array<float, MAX_VALUES> values;

	for (int i = 0; input >> values[i]; i++);

	cout << "Should be 3 4 8 5 1 44 56 73 69 420 32 12" << endl;

	for (int i = 0; values[i + 1] != NULL; i++)
	{
		cout << values[i] << endl;
	}

	input.close();

	HelperFunctions helper;
	helper.sort_array(values);

	ofstream output(argv[2]);

	if (!output)
	{
		cout << "Can't open output.txt file" << endl;
		return 1;
	}

	for (int i = 0; i < 12; i++)
	{
		output << values[i] << " ";
	}

	output.close();
	return 0;
}