#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <vector>

using namespace std;

const int MAX_VALUE = 100000;

class HelperFunctions 
{
private:
	static int medianOfThree(vector<float> v)
	{
		int first = 0;
		int last = v.size() - 1;
		int middle = v[v.size() / 2];
		int pivot = 0;

		if (v[first] > v[middle])
			HelperFunctions::swap(first, middle, v);
		if (v[middle] > v[last])
			HelperFunctions::swap(middle, last, v);
		if (v[first] > v[last])
			HelperFunctions::swap(first, last, v);

		return pivot;
	}

	static void swap(int leftIndex, int rightIndex, vector<float>& v)
	{
		float temp = 0.0;
		temp = v[leftIndex];
		v[leftIndex] = v[rightIndex];
		v[rightIndex] = temp;
	}

	/*static int findPivot(vector<float>& v)
	{
		float first = v[0];
		float middle = v[v.size() / 2];
		float last = v.size() - 1;
		
		if ((first < middle && middle < last) || (first > middle&& middle > last))
			return middle;
		else if ((middle > first&& first > last) || (middle < first && first < last))
			return first;
		else
			return last;
	}*/

public:
	HelperFunctions()
	{

	}

	~HelperFunctions()
	{

	}

	/*static void sort_Array(vector<float>& v)
	{
		float temp = 0.0;
		for (int i = 0; i < v.size(); i++)
		{
			for (int j = i; j < v.size(); j++)
			{
				if (v[i] > v[j])
				{
					HelperFunctions::swap(i, j, v);
				}
			}
		}
	}*/

	public void quick_sort(vector<float>& v, int part)
	{

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

	float *temp = new float[MAX_VALUE];
	int size = 0;

	for (int i = 0; input >> temp[i]; i++)
		size++;

	vector<float> values (size);

	for (int i = 0; i < size; i++)
	{
		values[i] = temp[i];
	}

	delete[] temp;

	input.close();

	for (int i = 0; i < size; i++)
		cout << values[i] << endl;

	HelperFunctions::sort_Array(values);

	ofstream output(argv[2]);

	if (!output)
	{
		cout << "Can't open output.txt file" << endl;
		return 1;
	}

	for (int i = 0; i < size; i++)
		output << values[i] << endl;
	output.close();
	return 0;
}