def print_formatted(n):
    l = len(bin(n)) - 2
    for i in range(1, n+1):
        d = str(i)
        #octal
        o = oct(i)[2:]
        #hexadecimal
        h = hex(i).upper()[2:]
        #binary
        b = bin(i)[2:]
        print(((l-len(d))*' '+d), ((l-len(o))*' '+o), ((l-len(h))*' '+h), ((l-len(b))*' '+b))
