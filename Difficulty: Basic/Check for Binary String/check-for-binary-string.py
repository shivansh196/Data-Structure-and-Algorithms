# Return true if s is binary, else false
class Solution:
    def isBinary(self, s):
        #code here
        m = list(s)
        for i in m:
            if i != '0' and i != '1':
                return False
            
        return True

#{ 
 # Driver Code Starts
# Your code goes here
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        str = input().strip()
        if Solution().isBinary(str):
            print("true")
        else:
            print("false")
        print("~")

# } Driver Code Ends