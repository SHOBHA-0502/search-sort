#include <iostream>
using namespace std;
void rotate(int *input, int d, int n)
{ 
    
    int arr[n];
    for(int i =0 ;i<n; i++){
        arr[i]=input[i];
    
    }
    for(int i =0 ; i<n ;i++){
        int k = (i+d)%n;
        input[i]=arr[k];
    }
}
int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}