#include <iostream>
#include <vector>
#include <stdexcept>

class MinHeap {
private:
    std::vector<int> heap;

    void heapifyUp(int index) {
        while (index > 0 && heap[parent(index)] > heap[index]) {
            std::swap(heap[parent(index)], heap[index]);
            index = parent(index);
        }
    }

    void heapifyDown(int index) {
        int smallest = index;
        int leftIndex = leftChild(index);
        int rightIndex = rightChild(index);

        if (leftIndex < heap.size() && heap[leftIndex] < heap[smallest]) {
            smallest = leftIndex;
        }

        if (rightIndex < heap.size() && heap[rightIndex] < heap[smallest]) {
            smallest = rightIndex;
        }

        if (smallest != index) {
            std::swap(heap[index], heap[smallest]);
            heapifyDown(smallest);
        }
    }

    int parent(int i) { return (i - 1) / 2; }
    int leftChild(int i) { return 2 * i + 1; }
    int rightChild(int i) { return 2 * i + 2; }

public:
    void insert(int key) {
        heap.push_back(key);
        int index = heap.size() - 1;
        heapifyUp(index);
    }

    bool search(int key) {
        for (int val : heap) {
            if (val == key) return true;
        }
        return false;
    }


};

int main() {
    MinHeap minHeap;
    minHeap.insert(3);
    minHeap.insert(1);
    minHeap.insert(6);
    minHeap.insert(5);
    minHeap.insert(2);
    minHeap.insert(4);

    std::cout << "Search 4: " << (minHeap.search(4) ? "Found" : "Not Found") << std::endl;
    std::cout << "Search 7: " << (minHeap.search(7) ? "Found" : "Not Found") << std::endl;

    return 0;
}
