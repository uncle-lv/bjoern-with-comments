# bjoern-with-comments

![license](https://img.shields.io/github/license/uncle-lv/bjoern-with-comments) 
![stars](https://img.shields.io/github/stars/uncle-lv/bjoern-with-comments) 
![issues](https://img.shields.io/github/issues/uncle-lv/bjoern-with-comments) 
![forks](https://img.shields.io/github/forks/uncle-lv/bjoern-with-comments) 
![python version](https://camo.githubusercontent.com/dd862811fb4a02a05cd4738efdbe1034ac2d98d4702ad3f1ade1eefccc0e6377/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f707974686f6e2d332e382e31302d253233306137386236) 
![bjoern versoin](https://img.shields.io/badge/bjoern-3.2.1-informational)

bjoern是一个由C语言编写的简洁、高性能的WSGI服务器，它仅由16个文件、1553行代码组成，非常适合我们学习、借鉴。

```bash
      16 text files.
      16 unique files.                              
       0 files ignored.

-------------------------------------------------------------------------------
Language                     files          blank        comment           code
-------------------------------------------------------------------------------
C                                8            245            212           1333
C/C++ Header                     8             47              7            220
-------------------------------------------------------------------------------
SUM:                            16            292            219           1553
-------------------------------------------------------------------------------
```

bjoern是基于[libev](https://github.com/enki/libev)和[http-parser](https://github.com/nodejs/http-parser)实现的，并使用CPython的C扩展接口与Python进行交互。所以在注释中，我会默认读者具备以下知识：
- 计算机网络基础（尤其是HTTP协议部分）
- Linux环境/网络编程基础
- WSGI协议
- libev和http-parser的使用
- CPython的C扩展接口的使用

如果你尚未掌握以上知识，建议优先学习，然后再进行源码及注释的阅读，效果会更好。

## 源码结构

```bash
bjoern
├── _bjoernmodule.c
├── common.c
├── common.h
├── filewrapper.c
├── filewrapper.h
├── portable_sendfile.c
├── portable_sendfile.h
├── py2py3.h
├── request.c
├── request.h
├── server.c
├── server.h
├── statsd_tags.c
├── statsd_tags.h
├── wsgi.c
└── wsgi.h
```
