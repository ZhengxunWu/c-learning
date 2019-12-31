/*c++11的智能指针
unique_ptr: 不允许多个指针共享资源，可以用标准库中的move函数转移指针
shared_ptr: 多个指针共享资源
weak_ptr: 可复制shared_ptr,但其构造或者释放对资源不产生影响
*/