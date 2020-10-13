#ifndef PRIMRITYQUEUE_H
#define PRIMRITYQUEUE_H

#include <vector>

using std::vector;

class PriorityQueue {
private:
    typedef bool (*Func)(const int, const int);
    vector<int> pqMax;
    Func comp;  // 大于-大顶堆   小于-小顶堆

    void exch(int i, int j) {
        int t = pqMax[i];
        pqMax[i] = pqMax[j];
        pqMax[j] = t;
    }

    void swim(int k) {
        while (k != 1 && comp(pqMax[k], pqMax[k / 2])) {
            exch(k, k / 2);
            k /= 2;
        }
    }

    void sink(int k) {
        while (2 * k <= pqMax.size() - 1) {
            int index = 2 * k;
            if (2 * k < pqMax.size() - 1 && comp(pqMax[2 * k + 1], pqMax[2 * k])) {
                index++;
            }
            if (comp(pqMax[index], pqMax[k])) {
                exch(index, k);
                k = index;
            }
        }
    }

public:
    PriorityQueue() {
        pqMax.push_back(0);
    }

    PriorityQueue(Func pf) {
        pqMax.push_back(0);
        comp = pf;
    }

    void insert(int value) {
        pqMax.push_back(value);
        swim(pqMax.size() - 1);
    }

    void remove() {
        pqMax[1] = pqMax.back();
        pqMax.pop_back();
        sink(1);
    }

};

#endif