import F


def Make(ile):

    for count in range(ile):

        file = open(f"TEST{count}.in", 'r')
        OUT = open(f"TEST{count}.out", 'w+')

        s = file.readlines()
        for i in range(len(s)):
            s[i] = s[i][:-1]

        s[1] = s[1].rsplit(" ")

        for i in range(len(s[1])):
            s[1][i] = int(s[1][i])

        tab = []
        for i in range(1, len(s[1])):
            tab.append(s[1][i])

        txt = str(tab)
        txt = txt.replace("[", "")
        txt = txt.replace("]", "")
        txt = txt.replace(",", "")
        OUT.write(txt)
        OUT.write("\n")

        for i in range(2, len(s)):
            f = s[i].rsplit(" ")

            for j in range(1, len(f)):
                f[j] = int(f[j])

            if f[0] == 'S':
                f[1] = f[1] % len(tab)
                if f[2] != 0:
                    tab = F.S(tab, f[1], f[2])
            elif f[0] == 'R':
                f[1] = f[1] % len(tab)
                if f[2] != 0:
                    tab = F.R(tab, f[1], f[2])
            elif f[0] == 'C':
                f[1] = f[1] % len(tab)
                if f[2] != 0:
                    tab = F.C(tab, f[1], f[2], f[3])

        txt = str(tab)
        txt = txt.replace("[", "")
        txt = txt.replace("]", "")
        txt = txt.replace(",", "")
        OUT.write(txt)

        file.close()
        OUT.close()
