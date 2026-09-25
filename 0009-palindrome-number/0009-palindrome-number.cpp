class Solution {
public:
    bool isPalindrome(int x) {
    long long reversenum=0;
    int temx=x;
    if(x<0) return 0;
    while(temx>0){
    int lastnum =temx%10;
    reversenum=reversenum*10+lastnum;
    temx=temx/10;
    }
    return (reversenum==x);}
        
    
};