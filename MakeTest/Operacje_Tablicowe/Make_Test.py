import random
import Test

ile = 100

for count in range(ile):

    file = open(f"TEST{count}.in", 'w+')

    file.write(f'1\n')

    for cc in range(1):
        x = random.randint(2*10**2, 5*10**2)
        file.write(f'{x} ')
        for i in range(x):
            file.write(f'{str(random.randint(-10**9, 10**9))}')
            if i != x - 1:
                file.write(" ")
        file.write("\n")

        y= random.randint(10**3, 10**4)
        for i in range(y):
            x = random.randint(1, 3)
            if x == 1:
                file.write(f'R {random.randint(-10**9, 10**9)} {random.randint(0, 10**6)}')
            elif x == 2:
                file.write(f'S {random.randint(-10**9, 10**9)} {random.randint(0, 10**6)}')
            elif x == 3:
                file.write(f'C {random.randint(-10**9, 10**9)} {random.randint(0, 10**6)} {random.randint(-10**9, 10**9)}')
            file.write("\n")
        file.write("F\n")

    file.close()

Test.Make(ile)
