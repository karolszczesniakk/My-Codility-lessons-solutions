vector<int> solution(string& S, vector<int>& P, vector<int>& Q)
{
    vector<int> MinimalImpactVector(P.size(), 0);

    vector<int> SumA(S.size(), 0);
    vector<int> SumC(S.size(), 0);
    vector<int> SumG(S.size(), 0);
    vector<int> SumT(S.size(), 0);

    int AmountA = 0;
    int AmountC = 0;
    int AmountG = 0;
    int AmountT = 0;


    // A = 1, C = 2, G = 3, T = 4;
    for (size_t i = 0; i < S.size(); i++)
    {
        if (S[i] == 'A')AmountA++;
        if (S[i] == 'C')AmountC++;
        if (S[i] == 'G')AmountG++;
        if (S[i] == 'T')AmountT++;
        SumA[i] = AmountA;
        SumC[i] = AmountC;
        SumG[i] = AmountG;
        SumT[i] = AmountT;
    }


    for (size_t i = 0; i < P.size(); i++)
    {
        if (SumA[P[i]] + SumA[Q[i]] != 0 && SumA[P[i]] - SumA[Q[i]] <= 0)
        {
            if (SumA[P[i]] - SumA[Q[i]] < 0)
            {
                MinimalImpactVector[i] = 1;
                continue;
            }
            else if (P[i] != 0 && SumA[P[i]] != SumA[P[i] - 1])
            {
                MinimalImpactVector[i] = 1;
                continue;
            }
            else if (P[i] == 0 && SumA[P[i]] != 0)
            {
                MinimalImpactVector[i] = 1;
                continue;
            }
        }

        if (SumC[P[i]] + SumC[Q[i]] != 0 && SumC[P[i]] - SumC[Q[i]] <= 0)
        {
            if (SumC[P[i]] - SumC[Q[i]] < 0)
            {
                MinimalImpactVector[i] = 2;
                continue;
            }
            else if (P[i] != 0 && SumC[P[i]] != SumC[P[i] - 1])
            {
                MinimalImpactVector[i] = 2;
                continue;
            }

            else if (P[i] == 0 && SumC[P[i]] != 0)
            {
                MinimalImpactVector[i] = 2;
                continue;
            }

        }

        if (SumG[P[i]] + SumG[Q[i]] != 0 && SumG[P[i]] - SumG[Q[i]] <= 0)
        {
            if (SumG[P[i]] - SumG[Q[i]] < 0)
            {
                MinimalImpactVector[i] = 3;
                continue;
            }
            else if (P[i] != 0 && SumG[P[i]] != SumG[P[i] - 1])
            {
                MinimalImpactVector[i] = 3;
                continue;
            }
            else if (P[i] == 0 && SumG[P[i]] != 0)
            {
                MinimalImpactVector[i] = 3;
                continue;
            }
        }

        if (SumT[P[i]] + SumT[Q[i]] != 0 && SumT[P[i]] - SumT[Q[i]] <= 0)
        {
            if (SumT[P[i]] - SumT[Q[i]] < 0)
            {
                MinimalImpactVector[i] = 4;
                continue;
            }
            else if (P[i] != 0 && SumT[P[i]] != SumT[P[i] - 1])
            {
                MinimalImpactVector[i] = 4;
                continue;
            }
            else if (P[i] == 0 && SumT[P[i]] != 0)
            {
                MinimalImpactVector[i] = 4;
                continue;
            }
        }

    }

    return MinimalImpactVector;
}
