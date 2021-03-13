int solution(vector<int>& A)
{
    if (A.size() == 0) return 0;

    int solonumber = A[0];

    for (int i = 1; i <= A.size(); i++)
    {
        solonumber = solonumber ^ A[i];
    }
    return solonumber;
}
