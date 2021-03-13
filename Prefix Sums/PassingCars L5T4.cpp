int solution(vector<int>& A)
{
    vector<int> EastCarsPositions;

    for (size_t i = 0; i < A.size(); i++)
    {
        if (A[i] == 0)EastCarsPositions.push_back(i);
    }

    int Sum = 0;
    vector<int> WestCarsSum(A.size());

    for (size_t i = 0; i < A.size(); i++)
    {
        if (A[i] == 1) Sum++;
        WestCarsSum[i] = Sum;
    }

    int Size = A.size();
    int Pairs = 0;

    for (size_t i = 0; i < EastCarsPositions.size(); i++)
    {
        int EastCarPosition = EastCarsPositions[i];
        int CarWestMax = WestCarsSum[Size - 1];
        Pairs += CarWestMax - WestCarsSum[EastCarPosition];
        if (Pairs > 1000000000)return -1;

    }

    return Pairs;

}
