class Solution {
public:
    double myPow(double x, long long n) {
        if (n == 0) return 1;
        if (n<0) return 1/myPow(x,-n);
        return (n%2) ? x*myPow(x*x,n/2) : myPow(x*x,n/2);
    }
};


// trivial, just consider binary conversion
// 200 = 1 1 0 0 1 0 0 0
// p(x,200)
// p(x^2,100)
// p(x^4,50)
// p(x^8,25)
// p(x^16,12)*x^8
// p(x^32,6)*x^8
// p(x^64,3)*x^8
// p(x^128,1)*x^64*x^8
// x^128*x^64*x^8