// Questions: https://leetcode.com/problems/first-bad-version/description/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long low = 0, high = n;
        long long mid = (low + high) / 2;
        while(low < high)
        {
            // cout<<mid<<"    bad? "<<isBadVersion(mid)<<endl;
            if(isBadVersion(mid))
                high = mid;
            else
                low = mid + 1;

            mid = (low + high) / 2;
        }
        return high;
    }
};