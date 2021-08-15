/*

Problem statement: https://leetcode.com/problems/find-pivot-index/

This is a brute force solution and not optimal

*/


#include<bits/stdc++.h>
using namespace std;
#define MAX 256
int pivotIndex(vector<int>& nums) {

        int pivot = 0;
        int sum1 = 0, sum2 = 0;
        if(nums.size() == 1) return 0;
        for(int i=0; i<nums.size() ; i++)
        {
            sum1 = 0;
            sum2 = 0;

            for(int j=0; j<pivot; j++)
            {
                sum1 += nums[j];
            }

            for(int j=pivot+1; j<nums.size(); j++)
            {
                sum2 += nums[j];
            }

            if(sum1 == sum2)
            {
                return pivot;
            }
            pivot++;
        }

        return -1;

}
int main()
{
  vector<int> arr;
  int val,n;

  cout<<"Enter the size of array: ";
  cin>>n;

  cout<<"Enter the elements in array : \n";
  for(int i=0; i<n; i++)
  {
      cin>>val;
      arr.push_back(val);
  }

  int pivot = pivotIndex(arr);

  cout<<"\nPivot is = "<<pivot<<endl;
   return 0;
}

/*

OUTPUT


Enter the size of array: 6
Enter the elements in array :
1 7 3 6 5 6

Pivot is = 3
*/
