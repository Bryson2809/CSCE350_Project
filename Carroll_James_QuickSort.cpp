#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <array>

using namespace std;

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

	array<float, 5> values;

	for (int i = 0; i < 5; i++)
	{
		input >> values[i];
	}

	input.close();

	ofstream output(argv[2]);

	if (!output)
	{
		cout << "Can't open output.txt file" << endl;
		return 1;
	}

	for (int i = 0; i < 5; i++)
	{
		output << values[i] << " ";
	}

	output.close();
	return 0;
}