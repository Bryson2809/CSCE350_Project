#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <array>

using namespace std;

const int MAX_VALUES = 100000;

class HelperFunctions 
{
private:
	static int medianOfThree(array<float, MAX_VALUES> arr)
	{
		int first = 0;
		int last = 0;
		int pivot = 0;
		for (int i = 0; arr[i] != NULL; i++)
			last++;
		int middle = last / 2;

		pivot = HelperFunctions::findPivot(arr[first], arr[middle], arr[last]);

		if (arr[first] > arr[middle])
			HelperFunctions::swap(first, middle, arr);
		if (arr[middle] > arr[last])
			HelperFunctions::swap(middle, last, arr);
		if (arr[first] > arr[last])
			HelperFunctions::swap(first, last, arr);
	}

	static void swap(int leftIndex, int rightIndex, array<float, MAX_VALUES>& arr)
	{
		float temp = 0.0;
		temp = arr[leftIndex];
		arr[leftIndex] = arr[rightIndex];
		arr[rightIndex] = temp;
	}

	static int findPivot(float first, float middle, float last)
	{
		if ((first < middle && middle < last) || (first > middle&& middle > last))
			return middle;
		else if ((middle > first&& first > last) || (middle < first && first < last))
			return first;
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

	static void sort_array(array<float, MAX_VALUES>& arr)
	{
		float temp = 0.0;
		for (int i = 0; arr[i] != NULL; i++)
		{
			for (int j = i; arr[j] != NULL; j++)
			{
				if (arr[i] > arr[j])
				{
					HelperFunctions::swap(i, j, arr);
				}
			}
		}
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

	array<float, MAX_VALUES> values;

	for (int i = 0; input >> values[i]; i++);

	input.close();
	
	HelperFunctions::sort_array(values);

	ofstream output(argv[2]);

	if (!output)
	{
		cout << "Can't open output.txt file" << endl;
		return 1;
	}

	for (int i = 0; values[i] != NULL; i++)
		output << values[i] << endl;
	output.close();
	return 0;
}