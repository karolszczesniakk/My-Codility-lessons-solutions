#include <algorithm>

using namespace std;

int solution(vector<int>& A)
{
    if (A.size() < 3)return 0;

    sort(A.begin(), A.end());
    for (size_t i = 0; i < A.size() - 2; i++)
    {
        double First = (double)A[i];
        double Second = (double)A[i + 1];
        double Third = (double)A[i + 2];
        if (First + Second > Third)return 1;
    }
    return 0;
}
