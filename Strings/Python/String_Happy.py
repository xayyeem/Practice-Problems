''' 
	Program to check whether the given string is happy string or not

'''

def isHappy(num):
    rem=Sum=0
    while num>0:
        rem=num%10
        Sum+=(rem*rem)
        num=num//10
    return Sum
String = input()
String = String.upper()
s=''
for i in String:
    s = s + str(ord(i)-64)
result=int(s)
while result!=1 and result!=4:
    result = isHappy(result)

if result == 1:
    print("Yes")
else:
    print("No")


'''
	Input of Program

		vat
'''

'''
	Output of Program
		
		Yes
'''

'''
	Explanation:
	vat = 22120 (according to possition)
	Sum_of_Square_of_digit(22120)  (until it becomes ones)
'''