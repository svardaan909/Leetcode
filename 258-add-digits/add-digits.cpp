class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int ans = 0;

            while(num != 0){
                int lastdigit = num%10;
                num /= 10;
                ans += lastdigit;
            }
            num = ans;
        }

        return num;
    }
};