#pragma once
#include <iostream>
using namespace std;

template <typename T>
class TDynamicStack
{
	size_t top;
	size_t memSize;
	T* pMem;
public:
	TDynamicStack() :top(-1), memSize(1), pMem(new T[memSize]) {}//����������� �� ���������
	~TDynamicStack() { delete[]pMem; }//����������
	size_t size() const { return top + 1; }//�����, ������������ ������ �������
	bool  IsEmpty()//�������� �������
	{
		if (top == -1) return true;
		else return false;
	}
	bool IsFull()
	{
		if (top == memSize - 1) return true;
		else return false;
	}

	void Pop()//������ ��������� �������
	{
		if (top == -1) throw "out of range";
		top--;
	}
	T Pop() //����� ��������� �������
	{
		if (top == -1) throw "out of range";
		return (pMem[top]);
	}
	void Push(T val)//��������� ������� �� ���� 
	{
		if (top == memSize - 1)
		{
			T* tmpMem = new T[memSize * 2];
			std::copy(pMem, pMem + memSize, tmp);
			delete[] pMem;
			pMem = tmpMem;
			memSize = memSize * 2;
		}
		pMem[++top] = val;
	}
	TDynamicStack(TDynamicStack& st)//����������� ������
	{
		memSize = st.memSize;
		top = st.top;
		pMem = new T[memSize];
		for (size_t i = 0; i < top + 1; i++)
		{
			pMem[i] = st.pMem[i];
		}
	}
	TDynamicStack& operator=(TDynamicStack& st)//������������ ������
	{
		if (this != &st)
		{
			memSize = memSize.st;
			top = st.top;
			delete[]pMem;
			pMem = new T[memSize];
			for (size_t i = 0; i < top + 1; i++)
			{
				pMem[i] = st.pMem[i];
			}
		}
	}
	bool operator==(TDynamicStack& st)//��������� ������
	{
		if (top != st.top) return false;
		for (size_t i = 0; i < top + 1; i++)
		{
			if (pMem[i] != st.pMem[i]) return false;
		}
	}
};