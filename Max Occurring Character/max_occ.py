str = "Monday is first day in a week"
num_arr = []
list_of_occ = []
finalist = []
count = 0
for i in str:
	if(i==" "):
		continue
	for j in str:
		if(i==j):
			count+=1

	if(i not in list_of_occ):
		list_of_occ.append(i)
		num_arr.append(count)

	count=0

max_value = max(num_arr)
max_index = num_arr.index(max_value)

for k in range (0,len(num_arr)):
	if(num_arr[k] == max_value):
		finalist.append(list_of_occ[k])
		
str1 = " "
print(f"Max occurance is of letter/s = {str1.join(finalist)}")