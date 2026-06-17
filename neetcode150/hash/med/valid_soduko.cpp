#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef unordered_map<int, int> mi;
typedef vector<mi> vi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
#define SQ(a) (a) * (a)

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        mi sum_r;
        vi sum_c(9);
        vector<vi> sum_b(3, vi(3));
        for (int row = 0; row < 9; row++) {
            sum_r.clear(); for (auto m:sum_b) m.clear();
            for (int col = 0; col < 9; col++) {
                char value = board[row][col];
                if (value != '.') {
                    if (++sum_c[col][value]==2) return false;
                    if (++sum_r[value] == 2) return false;
                    if (++sum_b[row/3][col/3][value] == 2) return false;
                }
            }
        }
        return true;
    }
};

// cool problem :) i think my solution is quite good.

// class Solution {
// public:
//     bool isValidSudoku(vector<vector<char>>& board) {
//         int sum_r=0;
//         vi sum_c(9,0), sum_b(3,0);
//         for (int row = 0; row < 9; row++) {
//             sum_r = 0, sum_b = {0,0,0};
//             for (int col = 0; col < 9; col++) {
//                 sum_c[col]+=board[row][col];
//                 sum_r+=board[row][col];
//                 sum_b[col/3]+=board[row][col];
//                 if (row == 8 && sum_c[col] != 45) return false;
//                 if (row%3==2 && row%3==2 && sum_b[col/3] != 45) return false;
//             }
//             if (sum_r != 45) return false;
//         }
//         return true;
//     }
// };

// i misunderstood the question, and thought they wanted me to check if the game is solved or not :(