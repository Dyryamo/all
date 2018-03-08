#fileObject.seek(offset[, whence])
#offset 偏移量 whence 大致位置，0是头 ， 1是当前位置 ， 2是文件尾

f = open("qmx.html","r")
print(f.tell())
f.seek(5,0)
print(f.readline())

