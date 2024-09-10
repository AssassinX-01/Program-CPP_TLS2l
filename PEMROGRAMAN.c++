#include <cstdio>      // For scanf and printf
#include <vector>      // For std::vector

// Function to implement Selection Sort
void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int num;
    std::vector<int> numbers;
    
    // Input the numbers from the user
    printf("Enter numbers to sort (input any non-integer to stop (example: 9 8 7 x)): \n");
    
    // Keep reading until scanf fails (user enters a non-integer)
    while (scanf("%d", &num) == 1) {
        numbers.push_back(num);
    }

    // Sort the numbers using Selection Sort
    selectionSort(numbers);

    // Display the sorted numbers
    printf("Sorted numbers: ");
    for (int i = 0; i < numbers.size(); ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
