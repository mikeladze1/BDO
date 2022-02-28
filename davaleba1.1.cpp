//=====================================================
#include <iostream>

//=====================================================
int main(void)
{
	int* A 		= NULL;
	int size_a 	= 0;
	int K = 0;

	std::cout << "Enter araay size ";
	std::cin >> size_a;
	A = (int*)malloc(size_a);

	std::cout << "Fill A: ";
	for(int i=0; i<size_a; i++)
	{
		std::cin >> A[i];
	}

	std::cout << "Enter K: ";
	std::cin >> K;

	//
	// Sort A
	//

	int temp;
	int yes_or_no = 1;
	for(int i=0; i<(size_a - 1); ++i)
    {
    	temp = A[i];
        for(int j=(i + 1); j<size_a; ++j)
        {
            if(temp == A[j])
            {
                yes_or_no += 1;
            }
        }

        if(yes_or_no == K)
        {
        	std::cout << "YES";
        	return 0;
        }
        else
        {
        	yes_or_no = 1;
        }
    }

    std::cout << "NO";

    return 0;
}