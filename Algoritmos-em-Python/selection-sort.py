def search_minor(array: int) -> int:
    minor = 0
    for i in range(0, len(array)):
        if array[i] < array[minor]:
            minor = i
    return minor

def selection_sort(array: int) -> int:
    sorted = []
    for e in range(0, len(array)):
        minor = search_minor(array)
        sorted.append(array.pop(minor))
    return sorted

sample = [1, 15, 2, 1, 41, 524, 10, 12, 3, 4, 2, 7, 27, 18, 90, 0, 2, 115, 25, 32, 45, 50]
print(selection_sort(sample))