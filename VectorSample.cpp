#include "VectorSample.h"
#include <iostream>
#include <vector>

using namespace std;

VectorSample::VectorSample()
{
	vector<int> v = { 1,2,3,4,5 };


	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		cout << *it << endl;
}

