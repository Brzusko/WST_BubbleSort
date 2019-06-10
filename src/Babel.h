#pragma once
template<typename T, int size>
void BubbleSort(T* outArray) {
	for (int i = 1; i < size; i++) {
		for (int j = 0; j < size - i; j++) {
			if (outArray[j] > outArray[j + 1])
				std::swap(outArray[j], outArray[j + 1]);
		}
	}
};


