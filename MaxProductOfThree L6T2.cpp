#include <algorithm>

using namespace std;


int solution(vector<int>& A)
{
    sort(A.begin(), A.end());
    int LastPos = A.size() - 1;
    //Result1 = Value of 3 biggest values so most probably positive values
    int Result1 = Result1 = A[LastPos] * A[LastPos - 1] * A[LastPos - 2];
    //Result2 = Value of two smallest values so possibly 2 smallest values below 0 that will make result positive and Biggest value
    //to make that value even bigger or smaller if biggest value is also negative;
    int Result2 = Result2 = A[0] * A[1] * A[LastPos];

    return max(Result1, Result2);
}
