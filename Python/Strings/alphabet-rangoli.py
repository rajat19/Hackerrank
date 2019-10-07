def print_rangoli(size):
    #top pattern
    for i in range(1, size+1):
        print (('-')*(size-i)*2, end="")
        for j in range(i):
            print (chr(size - j + 96), end="")
            if(j!=(i-1)):
                print ('-', end="")
        for j in range(i-1, 0, -1):
            print ('-', end="")
            print (chr(size - j + 97), end="")
        print (('-')*((size-i)*2))
    #bottom pattern
    for i in range(size-1, 0, -1):
        print (('-')*(size-i)*2, end="")
        for j in range(i):
            print (chr(size - j + 96), end="")
            if(j!=(i-1)):
                print ('-', end="")
        for j in range(i-1, 0, -1):
            print ('-', end="")
            print (chr(size - j + 97), end="")
        print (('-')*((size-i)*2))
        