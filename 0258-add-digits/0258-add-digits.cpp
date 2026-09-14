class Solution {
public:
    int addDigits(int num) {
        while( num >= 10 ){
        int add = 0 ;
        while(num > 0 ){
                add += num % 10 ;
                num /= 10 ;
        }
        num = add ;
        }
        return num ;
    }
};