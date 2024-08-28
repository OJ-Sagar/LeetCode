bool isHappy(int n) {

        int	s = 0, d = 0;
        unordered_set<int> seen;
        while (n != 1 && seen.find(n) == seen.end())
        {
            seen.insert(n);
            s = 0;
            while (n > 0){
                d = n % 10;
                s += d*d;
                n /= 10;
            }
            n = s;
            cout << s << " \n";
        }
        return n == 1;
}