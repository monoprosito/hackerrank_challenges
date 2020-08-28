if __name__ == '__main__':
    N = int(input())
    arr = []

    for i in range(N):
        input_instruction = input()
        instruction = input_instruction.split()

        if instruction[0] == 'insert':
            arr.insert(int(instruction[1]), int(instruction[2]))
        elif instruction[0] == 'print':
            print(arr)
        elif instruction[0] == 'remove':
            arr.remove(int(instruction[1]))
        elif instruction[0] == 'append':
            arr.append(int(instruction[1]))
        elif instruction[0] == 'sort':
            arr = sorted(arr)
        elif instruction[0] == 'pop':
            arr.pop()
        elif instruction[0] == 'reverse':
            arr = arr[::-1]
