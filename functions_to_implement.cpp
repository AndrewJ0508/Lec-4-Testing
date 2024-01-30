#include <iostream>
#include <vector>

// returns -1 if the number is negative and 1 if positive
int Sign(int num);
int Sign(int num){
	if (num < 0) return -1;
	else return 1;
}

// Adds an double n to each element of a given vector
std::vector<double> VectorPlusN(std::vector<double> v, double n);
std::vector<double> VectorPlusN(std::vector<double> v, double n){
	int size = v.size();
	for (int i = 0; i < size; i++){
		v[i] += n;
	}
	return v;
}