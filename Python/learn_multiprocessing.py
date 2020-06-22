import multiprocessing as mp
import threading
from queue import Queue
import time

def job(q):
    res = 0
    for i in range(100000):
        res += i + i**2 + i**3
    q.put(res)

def multicore():
    q =mp.Queue()
    p1 = mp.Process(target = job, args = (q,))
    p2 = mp.Process(target = job, args = (q,))
    p1.start()
    p2.start()
    p1.join()
    p2.join()
    res1 = q.get()
    res2 = q.get()
    print("multicore: ", res1 + res2)

def normal():
    res = 0
    for _ in range(2):
        for i in range(100000):
            res += i + i**2 + i**3
    print("normal: ", res)

def multithreading():
    q = mp.Queue()
    t1 = threading.Thread(target = job, args = (q,))
    t2 = threading.Thread(target = job, args = (q,))
    t1.start()
    t2.start()
    t1.join()
    t2.join()
    res1 = q.get()
    res2 = q.get()
    print("multithread: ", res1 + res2)

if __name__ == "__main__":
    st = time.time()
    normal()
    print("normal time: ", time.time() - st)
    st = time.time()
    multithreading()
    print("multithreading time: ", time.time() - st)
    st = time.time()
    multicore()
    print("multicore time: ", time.time() - st)