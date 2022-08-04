class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
       sort(arr2.begin(), arr2.end());

		int larr1 = arr1.size();
		int larr2 = arr2.size();
		int res = 0;

		for(int i=0; i<larr1; ++i)
		{
			int closest = INT_MAX;
			int val;
			int start = 0;
			int end = larr2 - 1;
			int mid = 0;
			while( start <= end )
			{
				mid = start + ( end - start )/2;
				if( arr1[i] == arr2[mid])
				{
					closest = 0;
					break;
				}
				else if ( arr1[i] < arr2[mid])
					end = mid - 1;
				else if ( arr1[i] > arr2[mid])
					start = mid + 1;
				closest = min(closest, abs(arr1[i] - arr2[mid]));
			}
			if(closest > d)
				++res;
		}
		return res;
    }
};