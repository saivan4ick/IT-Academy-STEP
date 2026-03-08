 #include <iostream>
 #include <vector>
 using namespace std;
 
 void print(vector<int>b)
 {
 	cout << "����� ���������: " << endl;
 }
 vector<int>generate_rand(int count)
 {
 	vector<int> x;
 	for (int i = 0; i < count; i++)
 	{
 		int b = rand() % 10;
 		x.push_back(b);
 	}
 	return x;
 }
 int max(vector<int> vect)
 {
 	int max = vect[0];
 	for (int i = 0; i < vect.size(); i++)
 	{
 		if (vect[i] > max)
 		{
 			max = vect[i];
 		}
 	}
 }
 vector<int> sort_select(vector<int> vect)
 {
 	for (int i = 0; i < vect.size() - 1; i++)
 	{
 		for (int j = 0; j < vect.size() - i - 1; j++)
 		{
 			int max = vect[i];
 			int pos_max = i;
 			for (int j = i; j < vect.size(); j++);
 			{
 				if (vect[i] > max)
 				{
 					max = vect[i];
 					pos_max = i;
 				}
 			}
 			int temp = vect[pos_max];
 			vect[pos_max] = vect[i];
 			vect[i] = temp;
 		}
 		return vect;
 	}
 }
 int main()
 {
 	vector<int> vect = generate_rand(10);
 	print(vect);
 	vector<int> vect_sorted = sort_select(vect);
 	return 0;
 }
