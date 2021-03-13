int solution(vector<int>& A)
{
    set<int> S;
    for (size_t i = 0; i < A.size(); i++)
    {
        S.insert(A[i]);
    }
    return S.size();
}
