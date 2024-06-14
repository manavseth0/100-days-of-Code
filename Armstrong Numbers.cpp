class Solution {
  public:
    string armstrongNumber(int n) {
        int num = n;
        int sum = 0;
        int a;
        for(int i = 0; i < 3; i++)
        {
            a = num % 10;
            sum += pow(a, 3);
            num /= 10;
        }
        if (sum == n)
        {
            return "true";
        }
        else
        {
            return "false";
        }
    }
};
