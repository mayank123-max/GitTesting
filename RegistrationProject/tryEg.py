def solve(s):
    length = len(s)
    if length == 0:
        return -1
    if s[-1].isdigit():
        if length >= 101 or length == 11:
            return -1
        else:
            stlen = str(length)
            return int(stlen[-1]) - 1
    else:
        if length > 9:
            return -1
        else:
            return length

s = input("Enter the string...")
print(solve(s))