''' 
	Program to check whether the given number is happy number or not

'''

def isHappy(num):
    rem=Sum=0
    while num>0:
        rem=num%10
        Sum+=(rem*rem)
        num=num//10
    return Sum

N=int(input())
result = N
while result!=1 and result!=4:
    result = isHappy(result)

if result == 1:
    print("Yes")
else:
    print("No")


'''
	Input of Program

		59
'''

'''
	Output of Program
		
		No
'''

'''
	Explanation:

	Sum_of_Square_of_digit(59)  (until it becomes ones)
'''