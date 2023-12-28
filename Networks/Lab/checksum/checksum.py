def ones_complement(data):
    res = ""
    for ele in data:
        if ele == '1':
            res += '0'
        else:
            res += '1'
    k = int(res, 2)
    if k <= 9:
        k = str(k)
    else:
        k = str(chr(55+k))
    return k


def calculate_checksum(data):
    initial = 0
    for ele in data:
        if ele in 'Aa' :
            initial+=10
        elif ele in 'Bb' :
            initial+=11
        elif ele in 'Cc' :
            initial+=12
        elif ele in 'Dd' :
            initial+=13
        elif ele in 'Ee' :
            initial+=14
        elif ele in 'Ff':
            initial += 15
        else:
            initial += int(ele)
    if initial <= 15:
        initial = bin(initial)[2:].zfill(4)
        return ones_complement(str(initial))
    else:
        last = int(bin(initial)[-4:], 2)
        first = int(bin(initial)[2:][:-4], 2)
        final = bin(first + last)[2:].zfill(4)
        return ones_complement(str(final))
    return ""
n = int(input("Enter the number of characters in the data : "))
st = ""
for i in range(n):
    st += input(f"Enter the Data {i+1}: ")
print("The calculated checksum is : ", calculate_checksum(st))