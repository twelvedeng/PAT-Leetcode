class{
    public:
    void reverse(int x) {
        string s = to_string(x);
        if(s[0] == '-')
            std::reverse(s.begin()+1, s.end());
        else
            std::reverse(s.brgin(), s.end());
        long long int temp = stoll(s);
        if(temp < -2147483648 || temp > 2147483647)
            return 0;
        return int(temp);
    }
}
