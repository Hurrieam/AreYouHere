import os
import time
import random

if __name__ == "__main__":

    os.system("color F0")
    os.system("mode con:cols=100 lines=25")
    os.system("title Py点名 copyright © 快速的飓风. 2020")
    
    count = 1
    
    try:
        file = open("名单.txt")
        names = file.read().split("\n")
        file.close
        if names == ['']:
            print("请编辑同级目录下的“名单.txt”文件后使用！（一个名字占一行 编码为ANSI）")
            input()
            # exit()
        else:
            while True:
                print("点按回车键以继续。")
                input()
                os.system("color 0F")
                time.sleep(0.1)
                os.system("color F0")
                time.sleep(0.1)
                os.system("color 0F")
                time.sleep(0.1)
                os.system("color F0")
                name = random.randint(1, len(names))
                print("[" + str(count) + "] " + names[name - 1])
                count += 1
    except:
        print("请在同级目录下新建文件“名单.txt”并编辑名单后使用！（一个名字占一行 编码为ANSI）")
        input()
        # exit()
