#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    std::vector<double> arr(n);

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << n << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << std::fixed << std::setprecision(3) << arr[i] << " ";
    }
    std::cout << std::endl;

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    arr.push_back(sum);
    arr.push_back(sum / n);

    for (int i = 0; i < arr.size(); i++) {
        std::cout << std::fixed << std::setprecision(3) << arr[i] << " ";
    }
    std::cout << std::endl;

    double firstOddAbsolute = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (static_cast<int>(std::abs(arr[i])) % 2 == 1) {
            firstOddAbsolute = arr[i];
            break;
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        arr[i] += firstOddAbsolute;
    }

    for (int i = 0; i < arr.size(); i++) {
        std::cout << std::fixed << std::setprecision(3) << arr[i] << " ";
    }
    std::cout << std::endl;

    int choice;
    std::cin >> choice;

    while (choice != 0) {
        if (choice == 1) {
            double newElement;
            std::cin >> newElement;
            arr.push_back(newElement);
            std::cout << "+: " << arr.size() << std::endl;
        }
        else if (choice == 2) {
            if (!arr.empty()) {
                arr.pop_back();
                std::cout << "-: " << arr.size() << std::endl;
            }
            else {
                //std::cout << "Массив пустой, невозможно удалить элемент." << std::endl;
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            std::cout << std::fixed << std::setprecision(3) << arr[i] << " ";
        }
        std::cout << std::endl;

        sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
        }
        arr.push_back(sum);
        arr.push_back(sum / (arr.size() - 1));

        for (int i = 0; i < arr.size(); i++) {
            std::cout << std::fixed << std::setprecision(3) << arr[i] << " ";
        }
        std::cout << std::endl;

        firstOddAbsolute = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (static_cast<int>(std::abs(arr[i])) % 2 == 1) {
                firstOddAbsolute = arr[i];
                break;
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            arr[i] += firstOddAbsolute;
        }

        for (int i = 0; i < arr.size(); i++) {
            std::cout << std::fixed << std::setprecision(3) << arr[i] << " ";
        }
        std::cout << std::endl;

        std::cin >> choice;
    }

    return 0;
}
