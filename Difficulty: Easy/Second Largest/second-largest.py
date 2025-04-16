class Solution:
    def getSecondLargest(self, arr):
        # Code Here

        unique_elements = list(set(arr))
    
        if(len(unique_elements)<2):
            return -1
    
        unique_elements.sort(reverse=True)
    
        return unique_elements[1]
    
#{ 
 # Driver Code Starts
# Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        arr = list(map(int, input().split()))
        ob = Solution()
        ans = ob.getSecondLargest(arr)
        print(ans)
        print("~")
# } Driver Code Ends