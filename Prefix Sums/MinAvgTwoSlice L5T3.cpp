int solution(vector<int>& A)
{
    int Position = 0;
    float MinimumAverage = 100001;
    for (size_t i = 0; i < A.size() - 1; i++)
    {
        if ((A[i] + A[i + 1]) / 2.f < MinimumAverage)
        {
            MinimumAverage = (A[i] + A[i + 1]) / 2.f;
            Position = (int)i;
        }

        if (i <= A.size() - 3 && ((A[i] + A[i + 1] + A[i + 2]) / 3.f) < MinimumAverage)
        {
            MinimumAverage = (A[i] + A[i + 1] + A[i + 2]) / 3.f;
            Position = (int)i;
        }
    }


    return Position;

}
