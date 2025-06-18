#include <iostream>
#include "Heap.h"

int main() {
    // Test 1: Basic functionality
    std::cout << "=== Test 1: Basic Heap Operations ===\n";
    Heap<int> heap(5);
    
    heap.Insert(30);
    heap.Insert(20);
    heap.Insert(40);
    heap.Insert(10);
    heap.Insert(50);
    
    std::cout << "Heap contents: ";
    heap.DisplayHeap();  // Should show in heap order
    
    std::cout << "Max element: " << heap.PeekMax() << "\n";
    std::cout << "Heap size: " << heap.Size() << "\n\n";

    // Test 2: Delete operations
    std::cout << "=== Test 2: Delete Operations ===\n";
    heap.Delete();
    std::cout << "After delete: ";
    heap.DisplayHeap();
    
    heap.Delete();
    std::cout << "After delete: ";
    heap.DisplayHeap();
    std::cout << "New max: " << heap.PeekMax() << "\n\n";

    // Test 3: Edge cases
    std::cout << "=== Test 3: Edge Cases ===\n";
    Heap<int> emptyHeap(3);
    
    std::cout << "Empty heap test:\n";
    emptyHeap.DisplayHeap();  // Should show "Heap Is Empty"
    
    try {
        std::cout << "Attempting to peek empty heap...\n";
        emptyHeap.PeekMax();
    } catch (const std::runtime_error& e) {
        std::cout << "Error caught: " << e.what() << "\n";
    }
    
    std::cout << "\nAttempting to delete from empty heap...\n";
    emptyHeap.Delete();  // Should show "Heap Is Empty" message
    
    // Test 4: Resize test
    std::cout << "\n=== Test 4: Resize Test ===\n";
    Heap<int> smallHeap(2);
    smallHeap.Insert(100);
    smallHeap.Insert(200);
    smallHeap.Insert(300);  // Should trigger resize
    
    std::cout << "Heap after resize: ";
    smallHeap.DisplayHeap();
    std::cout << "Heap size: " << smallHeap.Size() << "\n";

    return 0;
}