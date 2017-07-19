name=[]
for x in range(1,int(input())+1):
	
	s=input()
	name=s.split(" ");
	if(len(name)==1):	
		print(name[0].capitalize())	
	if(len(name)==2):	
		print(name[0][0].capitalize(),end=". ")
		print(name[1].capitalize())					
	elif(len(name)==3):	
		print(name[0][0].capitalize(),end=". ")
		print(name[1][0].capitalize(),end=". ")
		print(name[2].capitalize())	
 
