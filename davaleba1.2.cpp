//=====================================================
#include <iostream>

//=====================================================
int main(void)
{
	int* A 		= NULL;
	int* B 		= NULL;
	int size_a 	= 0;
	int size_b 	= 0;

	std::cout << "Enter size a: ";
	std::cin >> size_a;
	std::cout << "\nEnter size b: ";
	std::cin >> size_b;
	A = (int*)malloc(size_a);
	B = (int*)malloc(size_b);

	std::cout << "Fill A: ";
	for(int i=0; i<size_a; i++)
	{
		std::cin >> A[i];
	}

	//
	// Sort A
	//

	int temp;

	for(int i=0; i<size_a; ++i)
    {
        for(int j=(i + 1); j<size_a; ++j)
        {
            if(A[i] > A[j])
            {
                temp =  A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

	std::cout << "Fill B: ";
	for(int i=0; i<size_b; i++)
	{
		std::cin >> B[i];
	}

	//
	// Sort B
	//

	for(int i=0; i<size_b; ++i)
    {
        for(int j=(i + 1); j<size_b; ++j)
        {
            if(B[i] > B[j])
            {
                temp =  B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    //
    // New array
    //

    int full_size = size_a + size_b;
    int* C = (int*)malloc(full_size);
    for(int i=0; i<size_a; i++)
	{
		C[i] = A[i];
	}

    for(int i=size_a; i<full_size; i++)
	{
		C[i] = B[i - size_a];
	}

    for(int i=0; i<full_size; ++i)
    {
        for(int j=(i + 1); j<full_size; ++j)
        {
            if(C[i] > C[j])
            {
                temp =  C[i];
                C[i] = C[j];
                C[j] = temp;
            }
        }
    }

    for(int i=0; i<full_size; ++i)
    {
    	std::cout << C[i] << " ";
    }

    return 0;
}