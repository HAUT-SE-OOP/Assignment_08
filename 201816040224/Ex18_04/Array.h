#ifndef ARRAY_CLASS
#define ARRAY_CLASS

#include<iostream>
#include<stdlib.h>

#ifndef NULL
const int NULL = 0;
#endif//NULL

using namespace std;

enum ErrorType
{
	invalidArraySize, memoryAllocationError, indexOutOfRange
};
char *errorMsg[] =
{
	"Invalid array size", "Memory allocation error", "Invalid index:"
};

//数组类模板
template  <class T>
class Array
{
	private:
		T* alist;
		int size;
	//错误处理函数
	void Error(ErrorType error, int badIndex = 0)const;
	public:
		Array(int sz = 50);								//构造函数
		Array(const Array <T> & A);					    //拷贝构造函数
		~Array(void);									//析构函数
		//重载“=”使数组对象可以整体赋值
		Array<T>&operator = (const Array <T>&rhs);
		//重载“[]”使Array对象可以起到C++普通函数的作用
		T&operator[](int i);
		operator T *(void)const;
		int ListSize(void)const;						//取数组的大小
		void Resize(int sz);							//修改数组的大小
 };

//Array.h中的函数实现
//#include"Array.h"
template <class T>
void Array<T>::Error(ErrorType error, int badIndex)const
{
	cout << errorMsg[error];									//根据错误类型，输出相应的错误信息
	if(error == indexOutOfRange)
		cout<<badIndex;
	cout<<endl;
	exit(1); 												//执行这个函数后，程序推出，系统回收资源
}

//构造函数
template <class T>
Array<T>::Array(int sz)
{
	if(sz <= 0)												//sz为数组大小（元素个数）。若小于0，则输出错误信息
		Error(invalidArraySize);
	size = sz;												//将元素个数赋给变量size
	alist = new T[size];					       			//动态分配size个T类型的元素空间
	if(alist == NULL)										//如果分配资源不成功
		Error(memoryAllocationError);
 }

//析构函数
template <class T>
Array<T>::~Array(void)
{
	delete []alist;
 }

//拷贝构造函数
template <class T>
Array<T>::Array(const Array<T>&X)
{
	//从对象X取得数组大小，并赋值给当前对象的成员
	int n = X.size;
	size = n;
	alist = new T[n];										//动态分配n个T类型的元素空间
	if(alist == NULL)										//如果分配内存不存在，输出错误信息
		Error(memoryAllocationError);
	//从对象X复制数组元素到本对象
	T *srcptr = X.alist;									//X.alist是对象X的数组首地址
	T *destptr = alist;										//alist是本对象中的数组首地址
 }

//重载“=”运算符，将对象rhs赋值给本对象，实现对象之间的整体赋值
template <class T>
Array<T>&Array<T>::operator = (const Array<T>& rhs)
{
	int n = rhs.size;		//取rhs的数组的大小
	//如果本对象中数组大小与rhs不同，则删除数组原有内存，然后重新分配
	if(size!=n)
	{
		delete[]alist;		//删除数组原有内存
		alist = new T[n];	//重新分配n个元素的内存
		if(alist == NULL)	//如果分配不成功，输出错误信息
			Error(memoryAllocationError);
		size = n;			//记录本对象的数组大小
	 }
	//从rhs中向本对象复制元素
	T* destptr = alist;
	T* srcptr = rhs.alist;
	while(n--)
		*destptr ++ =  *srcptr ++;
	return *this;
 }

//重载下标操作符，实现与普通数组一样通过下标访问元素，并具有越界检测功能
template <class T>
T& Array<T>::operator[](int n)
{
	//检查下标是否越界
	if(n < 0 || n > size - 1)
		Error(indexOutOfRange, n);
	//返回下标为n的数组元素
	return alist[n];
}

//重载指针转换操作符，将Array类的对象名转换为T类型的指针
//指向当前对象中的私有数组。
//因而可以像使用普通数组首地址一样使用Array类的对象名
template <class T>
Array<T>::operator T*(void)const
{
	//返回当前对象中私有数组的首地址
	return alist;
 }

template <class T>
int Array<T>::ListSize(void)const
{
	return size;
}

//将数组大小改为sz
template <class T>
void Array <T>::Resize(int sz)
{
	//检查是否sz<=0
	if(sz <= 0)
		Error(invalidArraySize);
	//如果指定的大小与原有大小一样，什么也不做
	if(sz == size)
		return;
	//申请新的数组内存，并测试是否申请成功
	T* newlist = new T[sz];
	if(newlist == NULL)
		Error(memoryAllocationError);
	//将sz与size中较小的一个赋值给n
	int n = (sz <= size)?sz:size;
	//将原有数组中的前n个元素复制到新的数组中
	T* srcptr = alist;				//原数组alist的首地址
	T* destptr = newlist;			//新数组newlist的首地址
	while(n--)
		*destptr ++ = *srcptr ++;
	//删除原数组
	delete[] alist;
	//使alist指向新数组，并更新size；
	alist = newlist;
	size = sz;
 }

#endif//ARRAY.CLASS

