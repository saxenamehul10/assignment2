#include <iostream>

class Cricketer {
protected:
    std::string name;

public:
    void inputData() {
        std::cout << "Enter name: ";
        std::cin >> name;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    void inputData() {
        Cricketer::inputData();
        std::cout << "Enter total runs: ";
        std::cin >> totalRuns;
        std::cout << "Enter average runs: ";
        std::cin >> averageRuns;
        std::cout << "Enter best performance: ";
        std::cin >> bestPerformance;
    }

    void displayData() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Total Runs: " << totalRuns << std::endl;
        std::cout << "Average Runs: " << averageRuns << std::endl;
        std::cout << "Best Performance: " << bestPerformance << std::endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputData();
    batsman.displayData();

    return 0;
}
