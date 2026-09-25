class Solution {
public:
    int reverse(int x) {
    int lastnum;
    long long reversenum=0;
    while(x!=0){
    lastnum =x%10;
    reversenum=(reversenum*10)+lastnum;
    x=x/10;
    }
    if(reversenum>INT_MAX || reversenum<INT_MIN){
        return 0;
    }
    return reversenum;
    }

        
    }
;