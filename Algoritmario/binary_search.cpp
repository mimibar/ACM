#pragma

long Binary_search(int *n, long bottom, long top, long key) {
	long center, center_value, min, max, k;

	while(bottom <= top) {
		center = (bottom + top)/2;
		center_value = n[center];

		if(key == center_value)
			return center;

		else if(key < center_value)
			top = center - 1;
		else
			bottom = center + 1;
		}

	return -1;
	}
