#include <iostream>
using namespace std;

void factorial(int n) {
    int sum = 1;
    while (n > 0) {
        sum = sum * n;
        n--;
    }
    cout << "factorial of number is " << sum;
}

void fibonacci(int terms) {
    int first_term = 0, second_term = 1, sum_term = first_term + second_term;
    if (terms == 1) {
        cout << first_term;
    } else if (terms == 2) {
        cout << first_term << "," << second_term;
    } else {
        cout << first_term << "," << second_term << ",";
        for (int i = 2; i < terms; i++) {
            cout << sum_term << ",";
            first_term = second_term;
            second_term = sum_term;
            sum_term = first_term + second_term;
        }
    }
}

void palindrome(int num) {
    int reverse = 0, temp = num;
    while (temp > 0) {
        int data = temp % 10;
        reverse = reverse * 10 + data;
        temp = temp / 10;
    }
    if (reverse == num) {
        cout << "it's palindrome";
    } else {
        cout << "it's not palindrome";
    }
}

void prime_number(int n) {
    int check = 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            check = 1;
            break;
        }
    }
    if (check) {
        cout << "it's not prime number";
    } else {
        cout << "it's prime number";
    }
}

int main() {
    int choice, num;
    cout << "press\n1.factorial\n2.fibonacci\n3.palindrome\n4.prime number\n";
    cin >> choice;
    cout << "enter the number: ";
    cin >> num;
    switch (choice) {
        case 1:
            factorial(num);
            break;
        case 2:
            fibonacci(num);
            break;
        case 3:
            palindrome(num);
            break;
        case 4:
            prime_number(num);
            break;
        default:
            cout << "wrong choice";
            break;
    }
}
