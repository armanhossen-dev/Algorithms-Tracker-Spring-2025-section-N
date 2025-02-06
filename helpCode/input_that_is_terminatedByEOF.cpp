#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;  // Read the first integer N, which tells us how many numbers to expect.
    std::vector<int> numbers;  // Create a vector (dynamic array) to store the numbers.    
    int num;  // Declare a variable to temporarily hold each number as it's read.    
    for (int i = 0; i < N; ++i) {  // Loop N times to read N numbers.
        if (!(std::cin >> num)) {  // Try to read the next number. If EOF or invalid input, break the loop.
            break;  // Exit the loop if EOF is reached or input is invalid.
        }
        numbers.push_back(num);  // Add the number to the end of the vector.
    }
    //Process the numbers as needed (e.g., print them).
    for (int n : numbers) {
        std::cout << n << " ";  // Print each number in the vector.
    }    
    return 0;
}

/**
N: The first integer read from the input, which tells you how many integers to expect next.

Loop: A loop runs N times to read the next N integers. If EOF is encountered before reading all N integers, the loop breaks.

EOF Handling: The loop checks for EOF (or end of input) and stops reading if EOF is encountered.

This approach ensures that your program correctly handles input terminated by EOF.


#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> numbers;
    int num;
    for (int i = 0; i < N; ++i) {
        if (!(std::cin >> num)) {
            break;  // EOF reached
        }
        numbers.push_back(num);
    }
    
    // Process the numbers as needed
    for (int n : numbers) {
        std::cout << n << " ";
    }
    
    return 0;
}
*/