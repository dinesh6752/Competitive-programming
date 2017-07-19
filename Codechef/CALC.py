for i in range(int(input())):
	N,B= map(int, input().split())
	print(round(N/(2*B))*(N-(B*round(N/(2*B))))) 
