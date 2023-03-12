- [vector](#vector)
  - [1.for\_each\_vector](#1for_each_vector)
    - [1.1\_vector\_int.cpp](#11_vector_intcpp)
    - [1.2\_vector\_person.cpp](#12_vector_personcpp)
    - [1.3\_vector\_vector.cpp](#13_vector_vectorcpp)
  - [2.vector\_construct.cpp](#2vector_constructcpp)
  - [3.vector\_assign.cpp](#3vector_assigncpp)
  - [4.vector\_capacity\_and\_size.cpp](#4vector_capacity_and_sizecpp)
  - [5.vector\_inset\_erase.cpp](#5vector_inset_erasecpp)
  - [6.vector\_read\_write.cpp](#6vector_read_writecpp)
  - [7.vector\_swap.cpp](#7vector_swapcpp)
  - [8.vector\_reserve.cpp](#8vector_reservecpp)

&emsp;&emsp;黑马程序员的STL学习记录。

# vector

功能：

&emsp;&emsp;vector数据结构和数组非常相似，也称为【单端数组】（后面学的deque是双端数组）。

vector与普通数组的区别：

&emsp;&emsp;不同之处是数组是静态空间，而vector可以动态扩展

动态扩展：

&emsp;&emsp;并不是在源空间之后续接新空间，而是找更大的内存空间，然后将原数据拷贝新空间，释放原空间。
![Image test](./pic/vector_0.png)

## 1.for_each_vector
### 1.1_vector_int.cpp

&emsp;&emsp;记录如何对【内置】数据类型进行遍历，列举了三种遍历方式。

### 1.2_vector_person.cpp

&emsp;&emsp;记录如何对自定义数据类型进行遍历，列举了三种遍历方式。

### 1.3_vector_vector.cpp

&emsp;&emsp;记录嵌套vector容器如何遍历。

## 2.vector_construct.cpp

&emsp;&emsp;记录vector的构造方法，一共有四种构造方法：

![Image test](./pic/vector_2.png)

## 3.vector_assign.cpp

&emsp;&emsp;记录vector的赋值方法，一共有三种赋值方法：
![Image test](./pic/vector_3.png)

## 4.vector_capacity_and_size.cpp

&emsp;&emsp;记录vector的中容量和大小的使用方法。capacity记录容器的容量，size记录容器大小，empty判断容器是否为空，resize重新指定大小。
![Image test](./pic/vector_4.png)

## 5.vector_inset_erase.cpp

&emsp;&emsp;记录容器中插入和删除的方式，插入和删除方法很多，具体参考如下：
![Image test](./pic/vector_5.png)

## 6.vector_read_write.cpp

&emsp;&emsp;记录容器中数据存取的方式，有重载[]的方式和at的方式，可读可写。
![Image test](./pic/vector_6.png)

## 7.vector_swap.cpp

&emsp;&emsp;swap函数的功能与应用，将传入的vector与本身进行交换，可以用来进行空间压缩。

## 8.vector_reserve.cpp

&emsp;&emsp;reserve函数减少vector在动态扩展容量时的扩展次数。
