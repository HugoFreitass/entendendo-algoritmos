def binary_search(array, target) -> int:
    low = 0
    high = len(array) -1
    while(low <= high):
        middle = int((low + high)/2)
        guess = array[middle]
        if guess == target:
            return middle;
        if guess > target:
            high = middle-1
        else:
            low = middle+1  

    return None


sample_array = [1, 2, 5, 10, 25, 31, 32, 57, 63, 99, 115, 225, 300, 543]

print(binary_search(sample_array, 300))