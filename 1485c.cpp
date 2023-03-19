for t in range(int(input())):
    a,b = [int(x) for x in input().split()]; lst = []; bcount = 0
    acopy = a
    bplus = b + 10
    if a<b:
        print(1)
    elif a == b:
        print(2)
    else:
        while True:
            if b == bplus:
                break
            else:
                count = 0
                if b == 1:
                    b += 1
                    bcount += 1
                a = acopy
                while True:
                    if int(a) == 0:
                        break
                    else:
                        a = a/b
                        count += 1

                b += 1
                lst.append(count+bcount)
                bcount += 1

        print(min(lst))
