#include <iostream>
#include <fstream>
#include "ForwardList.h"
using namespace std;

/* Примеры тестовых последовательностей для input.txt: 
 * 10 9 8 -24 2 28 15 3 1 9 7 5 38 10 0 - много чётных, последнее в конце
 * 1 9 7 3 11 21 - нет чётных
 * 3 11 4 9 5 13 23 - 1 чёткое в начале
 */
int main()
{
	try
	{
		ForwardList list;
		ifstream input("input.txt");
		ofstream output("output.txt");

		if (!input.is_open())
		{
			throw exception("Input file is not found");
		}

		int data, lastEven = 1;

		while (input.good())
		{
			input >> data;
			if (data % 2 == 0 && (lastEven == 1 || lastEven < data))
			{
				lastEven = data;
			}
			list.pushByPriorityAsc(data);
		}
		input.close();

		bool isFound = false;
		while (!list.isEmpty())
		{
			data = list.front();
			list.popFront();
			if (lastEven != 1)
			{
				if (data == lastEven)
				{
					isFound = true;
					if (list.isEmpty())
					{
						output << data << ' ';
						output << 777 << ' ';
						break;
					}
				}
				else if (isFound == true)
				{
					output << 777 << ' ';
					isFound = false;
				}
			}
			output << data << ' ';
		}
		output.close();
	}
	catch (const exception& ex)
	{
		cout << endl << "Error: " << ex.what() << endl;
	}
	return 0;
}
