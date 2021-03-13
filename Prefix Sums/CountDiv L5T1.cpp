int solution(int A, int B, int K)
{
    int DividableNumbers = (B - A) / K;
    if ((B - A) % K != 0 && DividableNumbers * (K + 1) < B || A % K == 0)DividableNumbers++;
    return DividableNumbers;
}
