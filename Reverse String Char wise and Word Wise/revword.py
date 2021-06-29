str = "Welcome To Python World"
str = ' ' + str #This is to insert a space in the starting

temp_str="" # Will store the single words before pushing it in final string
final_str="" # This will be our final string

for i in str[::-1]:
	if(i!=' '):
		temp_str+=(i)
	else:
		final_str+=(temp_str[::-1] + ' ')
		temp_str = ""

print(final_str)