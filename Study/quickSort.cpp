
int partition(int* data, int low, int high)
{
	int pivot = data[low];
	while (low < high)
	{
		while (low < high && data[high] >= pivot)
		{
			high--;
		}
		data[low] = data[high];
		while (low < high && data[low] <= pivot)
		{
			low++;
		}
		data[high] = data[low];
	}
	data[low] = pivot;
	return low;
}

void quickSort(int* data, int low, int high)
{
	if (low < high)
	{
		int pivotPos = partition(data, low, high);
		quickSort(data, low, pivotPos - 1);
		quickSort(data, pivotPos + 1, high);
	}
}
