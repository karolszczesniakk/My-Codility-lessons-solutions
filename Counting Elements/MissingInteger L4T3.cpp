#include <set>

int solution(vector<int>& A)
{
    set<int> S;

    int SmallestNumber = 1;
    int PreviousValue = 0;

    if (A.empty())return 0;

    for (size_t i = 0; i < A.size(); i++)
    {
        S.insert(A[i]);
    }

    for (auto it = S.begin(); it != S.end(); ++it)
    {
        if (*it < 0)
        {
            PreviousValue = *it;
            continue;
        }

        if (PreviousValue < 0 && *it > 1) return 1;

        if (*it == SmallestNumber)
        {
            PreviousValue = *it;
            SmallestNumber++;
            continue;
        }

        if (*it > SmallestNumber)
        {
            return SmallestNumber;
        }
    }
    return SmallestNumber;

}
