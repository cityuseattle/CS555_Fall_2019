// Author @Clark Jason Ngo
// 作者 @蔡丰顺
#include <iostream>
class Array
{
	private:
        int m_nSize;	// array size 数组大小
        int *m_nData;	// pointer-base array 基于指针的数组
	public:
        Array(int nSize = 10);	// default size of 10 默认大小为10

        // overload = to copy elements of an array object to another array object
		// 重载=将一个数组对象的元素复制到另一个数组对象
        Array &operator=(const Array &ArrayCopy);

        // overload [] to assign values into an array object 重载[]将值分配给数组对象
        int &operator[](int nIndex);
        // print the elements of the array 打印数组的元素
        void print();
        // deallocate memory 取消记忆
        ~Array();

        // return the size of array object 返回数组对象的大小
        int len();
        // overload == to compare the values of two array objects
		// 重载==比较两个数组对象的值
        bool operator==(const Array& rhs);
        // add elements of two array objects in their same indices
		// 在两个数组对象的相同索引中添加元素
        Array &add(const Array &ArrayRight);
};
