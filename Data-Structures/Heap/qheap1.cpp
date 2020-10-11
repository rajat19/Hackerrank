#include <iostream>
#include <vector>

using namespace std;

/********************************************** MIN-HEAP IMPLEMENTATION **********************************************/
class MinHeap {
    private:
        int heapSize;
        vector<int> heap;
    public:
        MinHeap() {
            heapSize = 0;
        }
        MinHeap(int heapSize, vector<int> heap) {
            this->heapSize = heapSize;
            this->heap = heap;
        }
        // Utility functions
        int parent(int i);
        int leftChild(int i);
        int rightChild(int i);
        void heapify(int i);
        // Operations on heap
        void buildHeap();
        void insertKey(int key);
        int getMin();
        void deleteKey(int key);
};

// Parameters: (Index of current element)
int MinHeap::parent(int i) {
    return (i-1)/2;    // returns index of parent of current element
}

// Parameters: (Index of current element)
int MinHeap::leftChild(int i) {
    return 2*i+1;    // returns index of left child of current element
}

// Parameters: (Index of current element)
int MinHeap::rightChild(int i) {
    return 2*i+2;    // returns index of right child of current element
}

// Parameters: (Index where heapify is to be called)
void MinHeap::heapify(int i) {
    int l = leftChild(i);
    int r = rightChild(i);
    int min;

    if(l < heapSize && heap[l] < heap[i])    // if left child < parent
        min = l;
    else
        min = i;
    if(r < heapSize && heap[r] < heap[min]) // if right child < parent
        min = r;
    if(i != min) {
        swap(heap[i], heap[min]);
        heapify(min);
    }
}

void MinHeap::buildHeap() {
    for(int i = (heapSize/2)-1; i >= 0; --i)
        heapify(i);
}

// Parameters: (Element to insert into heap)
void MinHeap::insertKey(int key) {
    ++heapSize;
    heap.push_back(key);
    int i = heapSize-1;
    while(i > 0 && heap[i] < heap[parent(i)]) {
        swap(heap[i], heap[parent(i)]);    // swap current element with it's parent
        i = parent(i);    // switch to index of parent of current element
    }
}

int MinHeap::getMin() {
    return heap[0];
}

// Parameters: (Element to delete from heap)
void MinHeap::deleteKey(int key) {
    int i;
    for(i = 0; i < heapSize; i++) {
        if(heap[i] == key)
            break;
    }
    heap.erase(heap.begin()+i);
    --heapSize;
    buildHeap();
}

/********************************************************************************************/

int main() {
    MinHeap pq; // Creates a min-heap

    int q;
    cin >> q;
    while(q--) {
        short x;
        long long v;
        cin >> x;
        if(x != 3)
            cin >> v;
        if(x == 1)
            pq.insertKey(v);
        else if(x == 2)
            pq.deleteKey(v);
        else if(x == 3)
            cout << pq.getMin() << endl;
    }
    return 0;
}
