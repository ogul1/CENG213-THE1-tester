#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)
#define delete file = __FILENAME__, line = __LINE__, func = __func__, delete
#define new new(__FILENAME__, __func__, __LINE__)

