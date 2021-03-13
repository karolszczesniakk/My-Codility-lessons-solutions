vector<int> solution(vector<int>& A, int K)
{

	if (A.size() == 0)return A;

	int Temp;
	if (K == A.size())
	{
		return A;
	}

	for (int Push = 0; Push < K; Push++)
	{
		Temp = A.back();
		A.pop_back();
		A.emplace(A.begin(), Temp);
	}


	return A;
}