import threading
import time
from queue import Queue

def job(l, q):
    length = len(l)
    for i in range(length):
        l[i] = l[i] ** 2
    q.put(l)

def multithreading(data):
    q = Queue()
    threads = []
    for i in range(4):
        t = threading.Thread(target = job, args = (data[i], q))
        t.start()
        threads.append(t)
    for thread in threads:
        thread.join()
    results = []
    for _ in range(4):
        results.append(q.get())
    print(results)

if __name__ == "__main__":
    data = [[1, 2, 3], [3, 4, 5], [4, 4, 4], [5, 5, 5]]
    multithreading(data)