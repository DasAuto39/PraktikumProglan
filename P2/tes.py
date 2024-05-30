def insertion_sort(arr):
    for j in range(1, len(arr)):
        key = arr[j]
        i = j - 1
        while i >= 0 and arr[i] > key:
            arr[i + 1] = arr[i]
            i -= 1
        arr[i + 1] = key

# Example usage:
my_array = [5, 2, 9, 1, 5, 6]
insertion_sort(my_array)
print("Sorted array:", my_array)    