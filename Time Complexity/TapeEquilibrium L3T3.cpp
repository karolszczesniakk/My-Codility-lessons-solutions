int solution(vector<int>& A) {

    int TotalLength = 0;
    int TempLength = 0;
    int Difference = 0;

    if (A.size() == 0)return 0;

    for (unsigned int i = 0; i < A.size(); i++)
    {
        TotalLength = TotalLength + A[i];
    }

    int MinDifference = abs(A[0] - (TotalLength - A[0]));


    for (unsigned int i = 0; i < A.size() - 1; i++)
    {
        TempLength = TempLength + (A[i]);
        Difference = abs((TempLength - (TotalLength - TempLength)));
        MinDifference = min(MinDifference, Difference);
    }
    return MinDifference;

}
