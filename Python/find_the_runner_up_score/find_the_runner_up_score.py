if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())

    # Define the champion position
    champion_pos = n - 1

    # Define the initial runner-up position
    runner_up_pos = champion_pos - 1

    # Order the array
    ordered = sorted(arr)

    # Get the previous value from the max value of the array
    # and checks if it's not equal.
    #
    # If the previous value is equal to the max value of the array,
    # go to the next previous value and check again. Otherwise, this
    # value will be the runner-up.
    while (ordered[runner_up_pos] == ordered[champion_pos]):
       runner_up_pos -= 1

    # Print the runner-up score
    print(ordered[runner_up_pos])
