// Vector of vectors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;



int main()
{
	vector< vector<int> >stf;

	for (int i = 0; i < 8; i++) {
		vector<int>temp;
		for (int j = 0; j < 25; j++) {
			temp.push_back(i);
		}
		stf.push_back(temp);
	}

	for (int i = 0; i < stf.size(); i++) {
		for (int j = 0; j < stf[i].size(); j++) {
			cout << stf[i][j];
		}
		cout << endl;
	}



    return 0;
}

