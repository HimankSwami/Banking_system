def central_function(x):
    if x == "1":
        y = int(input("Enter the total amount of numbers : "))
        Sum = 0
        for i in range (y):
            a = int(input (f"Enter the number {i+1}: ")) 
            Sum += a
        print(f"Addition of the numbers are : {Sum}")
    if x == "2":
         y = int(input("Enter the total amount of numbers : "))
         Sub = 0
         first = int(input("Enter the number 1 : "))
         for i in range (y-1):
            a = int(input (f"Enter the number {i+2}: ")) 
            Sub = Sub + first - a
            first = 0
         print(f"Addition of the numbers are : {Sub}")
    if x == "3":
         y = int(input("Enter the divident : "))
         z = int(input("Enter the divisor : "))
         print(f"The answer is : {y/z}")
    if x == "4":
         y = int(input("Enter the total amount of numbers : "))
         Multiply = 1
         for i in range (y):
            a = int(input (f"Enter the number {i+1}: ")) 
            Multiply = Multiply * a
         print(f"Multiplication of the numbers are : {Multiply}")

print("1 for addition")
print("2 for substraction")
print("3 for division")
print("4 for multiplication")
x = input("Choose the function you want to do : ")
central_function(x)



