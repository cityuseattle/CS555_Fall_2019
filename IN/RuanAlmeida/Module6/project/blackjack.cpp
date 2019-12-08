#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

int main() {
	static const int MAX_SIZE = 5;
	static const int TARGET = 7;
	int j, i, currSum, closestTarget, tempResult;
	vector<int> indexA;
	vector<int> indexB;

	int arrayA[MAX_SIZE] = { -1, 2, 10, 16, 2 };
	int arrayB[MAX_SIZE] = { 10, 11, 6, 7, 3 };
	closestTarget = TARGET;

	for (int i = 0; i < MAX_SIZE; i++) { // fixing at one position of arrayA
		for (int j = 0; j < MAX_SIZE; j++) { // running throught all positions of arrayB

		   // save the closest combination so far
			currSum = arrayA[i] + arrayB[j];
			tempResult = abs(TARGET - currSum);
			if (tempResult < closestTarget) {
				closestTarget = tempResult;
			}
		}
	}

	for (int i = 0; i < MAX_SIZE; i++) {
		for (int j = 0; j < MAX_SIZE; j++) {
			if (abs(arrayA[i] + arrayB[j] - TARGET) == closestTarget) {
				indexA.push_back(i);
				indexB.push_back(j);
			}
		}
	}

	for (int i = 0; i < indexA.size(); i++) {
		cout << endl << "Best combination ArrayA["<<indexA[i]<<"]"<<" +ArrayB["<< indexB[i]<<"] => " << arrayA[indexA[i]] << "+" << arrayB[indexB[i]] << endl;
	}
	

	system("pause");
}