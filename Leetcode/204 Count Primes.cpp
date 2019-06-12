class Solution {
public:
    bool isprime(int n) {
        if(n <= 1) return false;
        int m = floor(sqrt(n) + 0.5);	//floorÈ¡Õû±ÜÃâ¸¡µãÎó²î
        for (int i = 2; i <= m; i++)
            if (n % i == 0) return false;
        return true;
}
    int countPrimes(int n) {
        int cnt = 0;
        for (int i = 0; i < n; i++) 
            if(isprime(i)) cnt++;
        return cnt;
    }
};
