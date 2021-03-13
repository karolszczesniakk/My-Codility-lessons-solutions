int solution(int X, int Y, int D)
{
    if (X == Y) return 0;

    Y -= X;

    int NumberOfJumps = Y / D;
    if (Y % D != 0)NumberOfJumps++;

    return NumberOfJumps;
}
