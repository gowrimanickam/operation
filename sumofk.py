N,K=raw_input().split()
N=int(N)
k=int(K)
sum=0
arr=raw_input().split()
for i in range(0,k):
  sum=sum+int(arr[i])
  i+=1
  print sum
