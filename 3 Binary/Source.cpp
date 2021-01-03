#include <iostream>
#include <stdlib.h>

using namespace std;

// binary search
int binary_search(int* X, int lft, int rgt, int t)
{
	int i;
	// checks error conditions
	if (lft > rgt)
		return -1;

	int it = 1;
	while (lft < rgt)
	{
		i = (lft + rgt) / 2;

		if (t > X[i]) // binary search parameter update
			lft = i + 1;
		else
			rgt = i;

		it++;
	}

	if (t == X[lft])
		return it;//lft;
	else
		return -1;
}

int main()
{
	int max = 1000000;
	int* X = new int[max];

	// Creating array
	for (int i = 0; i < max; ++i)
	{
		X[i] = i;
	}

	int t = 900000;

	// running binary search
	int result = binary_search(X, 0, max - 1, t);
	if (result >= 0)
		std::cout << "With binary search found at " << result << "(th) iteration" << std::endl;
	else
		std::cout << t << " is not found in the array" << std::endl;

	delete[] X;
	system("PAUSE");
}