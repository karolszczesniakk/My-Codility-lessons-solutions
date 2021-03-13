int solution(vector<int>& A) {

    if (A.size() == 0)return 1;

    int TotalValue = 0;
    int TotalValueOfIndex = 0;

    for (int i = 0; i <= A.size(); i++)
    {
        TotalValueOfIndex += i;
        TotalValue += A[i];
    }

    TotalValue -= (A.size() + 1);
    return TotalValueOfIndex - TotalValue;
}
 