#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//Bubblesort algorithm, returns total number of swaps
int* bubbleSort(int* pData, int n)
{
    int* swapsArray = (int*) malloc(sizeof(int)*(n-1));
	for (int i = 0; i < n-1; i++)
	{
        int swaps = 0;
		for (int j = 0; j < n-i-1; j++)
		{
			if (pData[j] > pData[j+1]) //Swap adjacent numbers if latter is larger
			{
				int temp = pData[j];
				pData[j] = pData[j+1];
				pData[j+1] = temp;
                swaps++;
			}
		}
        swapsArray[i] = swaps;
	}

    return swapsArray;
}

int main()
{
    int array[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int* swaps;
    
    swaps = bubbleSort(array, 9);

    for (int i = 0; i < 8; i++)
    {
        printf("pass #%d: %d\n", i+1, swaps[i]);
    }
    printf("\n");

    free(swaps);
    return 0;
}