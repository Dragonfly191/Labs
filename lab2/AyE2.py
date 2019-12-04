from numpy import *
from math import *
x = int(input("Введите x: "))
a = int(input("Введите а: " ))
p = int(input("1 - вычислить функцию G, 2 - вычислить функцию F, 3 - вычислить функцию Y: "))
b = 0
if p == 1:
    if (x>0) and (a>0):
        g=9*(-2*a*a+3*a*x+2*x*x)
        l=(6*a*a+29*a*x+35*x*x)
    if math.isclose(l, b, abs_tol = 0.0000001):
        print("Ошибка")
    else:
        g = q/l
    print("Переменная G = " + str(g))
elif p == 2:
    f=tan(10*a*a-13*a*x+4*x*x);
    print("Переменная F = " + str(f))
elif p == 3:
    y=atan(2*a*a+25*a*x+63*x*x);
    print("Переменная Y = " + str(y))
else:
    print("Неверный номер функции")

