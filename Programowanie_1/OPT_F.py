def NWD(a, b):
    while b != 0:
        c = a % b
        a = b
        b = c
    return a


def R(tab, a, b):
    i = 0
    while (i + 1) * b <= len(tab):
        rtab = []
        for j in range(b):
            rtab.append(tab[(a + i * b + j) % len(tab)])

        rtab.reverse()

        for j in range(b):
            tab[(a + i * b + j) % len(tab)] = rtab[j]

        i += 1

    return tab


def S(tab, a, b):

    i = 0
    while (i + 2) * b <= len(tab):

        t1 = []
        t2 = []

        for j in range(b):
            t1.append(tab[(a + i * b + j) % len(tab)])
            t2.append(tab[(a + i * b + j + b) % len(tab)])

        for j in range(b):
            tab[(a + i * b + j) % len(tab)] = t2[j]
            tab[(a + i * b + j + b) % len(tab)] = t1[j]

        i += 2

    return tab


def C(tab, a, b, c):

    i = 0
    ctemp = c % b
    while (i + 1) * b <= len(tab):

        rotate = []
        for j in range(b - ctemp):
            rotate.append(tab[(a + i * b + j) % len(tab)])

        for j in range(ctemp):
            tab[(a + i * b + j) % len(tab)] = tab[(a + i * b + j + b - ctemp) % len(tab)]

        for j in range(b - ctemp):
            tab[(a + i * b + j + ctemp) % len(tab)] = rotate[j]

        i += 1

    btemp = len(tab) - i * b

    if btemp == 0:
        pass
    else:
        index = (a + i * b) % len(tab)
        ctemp = c % btemp
        rotate = []
        for j in range(btemp - ctemp):
            rotate.append(tab[(index + j) % len(tab)])

        for j in range(ctemp):
            tab[(index + j) % len(tab)] = tab[(index + j + btemp - ctemp) % len(tab)]

        for j in range(btemp - ctemp):
            tab[(index + j + ctemp) % len(tab)] = rotate[j]

    return tab


