class{
    public:
    void reverse(int x) {
        string s = to_string(x);
        if(s[0] == '-')
            std::reverse(s.begin()+1, s.end());
        else
            std::reverse(s.begin(), s.end());
        long long int temp = stoll(s);
        if(temp < -pow(2, 31) || temp > pow(2, 31)-1)
            return 0;
        return int(temp);
    }
}
