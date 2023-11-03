
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
        unordered_set<int> s;
	    for(int i = 0;i<n;i++) s.insert(arr[i]);
	    for(int i = 1;i<=1000;i++) {
	        for(int j = i+1;j<=1000;j++) {
	            int k = i*i + j*j;
	            int p = sqrt(k);
	            if(p*p == k && p <= 1000) {
	                if(s.find(i) != s.end() && s.find(j) != s.end() && s.find(p) != s.end()) return true;
	            }
	        }
	    }
	    return false;
	}
};
