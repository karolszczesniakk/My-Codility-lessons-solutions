
int solution(vector<int>& A)
{
    int BiggestValue = A.size();
    set<int> Counter;

    for (size_t i = 0; i < A.size(); i++)
    {
        if (BiggestValue < A[i]) return 0;
        Counter.insert(A[i]);
        if (Counter.size() != i + 1) return 0;
    }

    return 1;
}
