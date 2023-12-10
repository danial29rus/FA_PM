#include <iostream>
#include <vector>
#include <numeric>
#include <random>

class WeightedRandom {
private:
    std::vector<int> values;
    std::vector<int> accumulatedWeights;

public:
    WeightedRandom(const std::vector<int>& values, const std::vector<int>& weights) {
        if (values.size() != weights.size()) {
            throw std::invalid_argument("Values and weights must be of the same size");
        }

        this->values = values;
        int total = 0;
        for (int weight : weights) {
            total += weight;
            accumulatedWeights.push_back(total);
        }
    }

    int getRandomValue() {
        if (values.empty()) {
            throw std::runtime_error("No values to choose from");
        }

        int randomWeight = rand() % accumulatedWeights.back() + 1;
        auto it = std::lower_bound(accumulatedWeights.begin(), accumulatedWeights.end(), randomWeight);
        return values[it - accumulatedWeights.begin()];
    }
};

int main() {
    std::vector<int> values = {1, 2, 3};
    std::vector<int> weights = {1, 2, 10};

    WeightedRandom weightedRandom(values, weights);

    for (int i = 0; i < 10; i++) {
        std::cout << weightedRandom.getRandomValue() << " ";
    }

    return 0;
}
