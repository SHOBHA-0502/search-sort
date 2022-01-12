#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{
    for(int i =0 ; i<n-1 ;i++){
        for(int j = i+1;j<n-1;j++){
            if(input[i]>input[j]){
                int temp = input[i];
                input[i]=input[j];
                input[j]=temp;
                
            }
        }
    }
    // for(int i =0 ; i<n ; i++){
    //     cout<<
    //     input[i]<< " ";
    // }
    for(int j =n-1;j>=0;j--){
        if(input[j-1]<input[j]){
            return input[j-1];
        }
    }
    return -2147483648;
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}
