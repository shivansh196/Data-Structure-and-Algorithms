#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends

#User function Template for python3
def listTraversal(arr):
    #Write your code below
    
    for i in arr:
        print(i, end=" ")
    #Don't provide the new line


#{ 
 # Driver Code Starts.


def main():
    t=int(input())
    
    while(t>0):
        
        arr=[int(x) for x in input().strip().split()]
        
        listTraversal(arr)
        print() #Newline by the driver code
        t-=1

        print("~")
if __name__ == "__main__": 
    main()
# } Driver Code Ends