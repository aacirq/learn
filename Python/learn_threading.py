import threading
import time

def thread_job():
    print("T1 start\n")
    for i in range(10):
        time.sleep(0.1)
    print("T1 finish\n")

def T2_job():
    print("T2 start\n")
    print("T2 finish\n")

def main():
    added_thread = threading.Thread(target = thread_job, name = "T1")
    thread2 = threading.Thread(target = T2_job, name = "T2")
    added_thread.start()
    thread2.start()
    thread2.join()   # join作用需要等待当前线程运行完成后
                          # 才运行后面的脚本
    added_thread.join()
    print("all done\n")
    # print(threading.active_count())
    # print(threading.enumerate())
    # print(threading.current_thread())

if __name__ == "__main__":
    main()