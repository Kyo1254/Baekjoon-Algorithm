#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

char array[11];

int main()
{
	cin >> array;
	
	sort(array, array+strlen(array),greater<int>());
	
	for(int i=0; i<strlen(array); i++){
		cout << array[i];
	}
}