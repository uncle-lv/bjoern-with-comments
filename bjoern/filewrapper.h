#include "common.h"

// 判断类型
#define FileWrapper_CheckExact(x) ((x)->ob_type == &FileWrapper_Type)

PyTypeObject FileWrapper_Type;

typedef struct {
    PyObject_HEAD 
    PyObject *file;
    PyObject *blocksize;
    int fd;
} FileWrapper;

// 初始化FileWrapper类型
void _init_filewrapper(void);
// 获取当前FileWrapper对象的文件描述符
int FileWrapper_GetFd(PyObject *self);
