def ZigZagtraversal(rows, rang):
    if rows == 0:
        return
    
    if rows == 1:
        for i in range(1,rang):
            print(i,end='')
        return
 
    for i in range(0, rang,(rows-1)*2):
        print(i+1,end=' ')
 
    for j in range(1, rows-1):
        down = True
        i = j
        while i < rang:
            print(i+1,end=' ')
            if down:
                i += (rows - j - 1) * 2
            else:
                i += (rows - 1) * 2 - (rows - j - 1) * 2
 
            down = not down
 
    for i in range(rows-1, rang, (rows - 1) * 2):
        print(i+1,end=' ')
 
 
if __name__ == '__main__':
    rows = int(input("Enter number of rows: "))
    rang = int(input("Enter the range of number from 1: "))
    ZigZagtraversal(rows, rang)
