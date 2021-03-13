vector<int> solution(int N, vector<int>& A)
{
    vector<int> Counters(N, 0);
    int MaximumValue = 0;
    int Base = 0;


    for (size_t i = 0; i < A.size(); i++)
    {
        if (A[i] != N + 1)
        {
            Counters[A[i] - 1] = max(Counters[A[i] - 1], Base) + 1;
            MaximumValue = max(MaximumValue, Counters[A[i] - 1]);
        }
        else
        {
            Base = MaximumValue;
        }
    }
    // [3, 2, 2, 4, 2]


    for (size_t i = 0; i < Counters.size(); i++)
    {
        if (Counters[i] < Base)
        {
            Counters[i] = Base;
        }
    }

    return Counters;
}
