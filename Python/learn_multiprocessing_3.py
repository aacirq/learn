import multiprocessing as mp

value = mp.Value('d', 1)
arr = mp.Array('i', [1, 3, 4])