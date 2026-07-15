typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef unordered_map<int, int> mi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
#define SQ(a) (a) * (a)


class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // int right = numerical_limits<int>::min();
        // but question says piles[i] >= 1 so i just use 0;
        int right = 0, left = 1, mid;
        for (auto p:piles) {
            right = max(right, p); 
        }
        bool solved;
        int  curr;
        while (left < right) {
            mid = left + (right -left)/2;
            curr = 0;
            solved = true;
            for (auto p : piles) {
                curr += p/mid;
                curr += (p%mid) ? 1:0;
                if (curr > h) {solved = false; break;}
            }
            if (solved) right = mid; else left = mid + 1;
        }
        return left;

    }
};