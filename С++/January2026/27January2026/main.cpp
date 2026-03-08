#include "Header.h"

int main()
{
	vector<int>vect = create_vector(10); 
	print(vect); 
	sort_select(vect); 
	cout << endl; 
	print(vect);
	return 0;
}
