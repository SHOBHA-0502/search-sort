#include <climits>
int findSecondLargest(int *input, int n)
{

    int frst = INT_MIN , scnd = INT_MIN;
    
    for (int i =0 ;i<n ;i++)
    {
        if (input[i]>frst)
        {
            scnd = frst;
            frst = input[i];
        }else if (input[i]>scnd && input[i]!=frst)
        {
            scnd = input[i];
        }
    }
    
    return scnd;
}
