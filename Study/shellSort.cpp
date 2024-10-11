
void shellSort(int* data, int len)
{
	int i, j, gap;
	for (gap = len / 2; gap >= 1; gap /= 2)
	{
		for (i = gap; i < len; i++)
		{
			int temp = data[i];
			for (j = i - gap; j >= 0 && data[j] > temp; j -= gap)
			{
				data[j + gap] = data[j];
			}
			data[j + gap] = temp;
		}
	}
} 

