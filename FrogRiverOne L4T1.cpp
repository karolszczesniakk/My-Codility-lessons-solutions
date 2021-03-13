#include <set>

int solution(int X, vector<int>& A) {
    if (A.size() == 0)return 0;

    set<int> Set;
    for (unsigned int i = 0; i < A.size(); i++)
    {
        if (A[i] <= X) Set.insert(A[i]);
        if (Set.size() == X)return i;
    }
    return -1;
}
