ch = ['&','¬','∧','∨','⊕','→','⇔','x','y','z','a','b','w','(',')']
ch_p = ['and', 'not', 'and', 'or', '!=', '<=', '==','x','y','z','a','b','w','(',')']

#def yyy():


def yy(x,y,z):
    ss=''
    for s in l_s:
        nn = ch.index(s)
        v = ch_p[nn]
        if v=='': v=v
        ss+= v
        ss+= ' '
    ss = ss[:-1]
    return int(eval(ss))

l_s = input('введите лог выражение - ') #x∧y⊕z
print('x','y','z', '  ', l_s)
for x in range(0,2):
    for y in range(0,2):
        for z in range(0,2):
            f = yy(x,y,z)
            print(x,y,z, '  ', f)