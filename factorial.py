def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n-1)
        
num = int(input("Введите число: "))
if num < 0:
    print("Факториал отрицательного числа не определен.")
else:
    print("Факториал", num, "равен", factorial(num))
