#include<cstdio>
#include<iostream>
#include<cstdio>

#define MAX 40

using namespace std;

struct SNode_Num
{
	int datas[MAX];
	int top;
};
typedef struct SNode_Num OperateNum;

struct SNode_Symbol
{
	char symbol[MAX];
	int top;
};
typedef struct SNode_Symbol OperateSymbol;

void InitOperateNum(OperateNum* StackNum)
{

	StackNum->top = -1;
}
void InitOperateSymbol(OperateSymbol* StackSymbol)
{
	StackSymbol->top = -1;
}
void PushOperateNum(OperateNum* StackNum, int x)
{
	StackNum->top++;
	StackNum->datas[StackNum->top] = x;
}
void PushOperateSymbol(OperateSymbol* StackSymbol, char ch)
{
	StackSymbol->top++;
	StackSymbol->symbol[StackSymbol->top] = ch;
}

int PopOperateNum(OperateNum* StackNum)
{
	int num;
	num = StackNum->datas[StackNum->top];
	StackNum->top--;
	return num;
}

char PopOperateSymbol(OperateSymbol* StackSymbol)
{
	char ch;
	ch = StackSymbol->symbol[StackSymbol->top];
	StackSymbol->top--;
	return ch;
}
int GetOperateNum(OperateNum* StackNum)
{
	return StackNum->datas[StackNum->top];
}
char GetOperateSymbol(OperateSymbol* StackSymbol)
{
	return StackSymbol->symbol[StackSymbol->top];
}
short IsOperateSymbolOrNum(char ch)
{
	if (ch == '+' || ch == '-' || ch == '*'
		|| ch == '/' || ch == '(' || ch == ')' || ch == '\n') return 1;

	else return 0;
}

char Priority(char inputnum, char ch)
{
	switch (inputnum)
	{
		//加减在同一个优先级上 
	case '+':
	case '-':
	{
		if (ch == '+' || ch == '-') return '>';
		else if (ch == '*' || ch == '/') return '<';
		else if (ch == '(') return '<';
		else if (ch == ')') return '>';
		else return '>';
	}
	break;

	//乘除在同一优先级 
	case '*':
	case '/':
	{
		if (ch == '+' || ch == '-') return '>';
		else if (ch == '*' || ch == '/') return '>';
		else if (ch == '(') return '<';
		else if (ch == ')') return '>';
		else return '>';
	}
	break;

	//括号在所有优先级以上 
	case '(':
	{
		if (ch == ')') return '=';
		else return '<';
	}
	break;
	case ')':
	{
		return '>';
	}
	break;
	case '\n':
	{
		if (ch == '\n') return '=';
		else return '<';
	}
	break;
	}
}

int Calculate(int num1, char ch, int num2)
{
	int result;
	switch (ch)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
	}
	return result;
}

int MainCalc()
{
	//主函数进行计算 
	OperateNum datas;
	OperateSymbol symbol;
	int num1, num2, result, num;
	char ch, sign;

	InitOperateNum(&datas);
	InitOperateSymbol(&symbol);


	//把回车计算的操作符放在栈中 
	PushOperateSymbol(&symbol, '\n');
	ch = getchar();
	while ((ch != '\n') || (GetOperateSymbol(&symbol) != '\n'))
	{
		if (!IsOperateSymbolOrNum(ch))
		{
			num = atoi(&ch);  //将字符转换为整数
			ch = getchar();   //获取输入
			while (!IsOperateSymbolOrNum(ch))
			{
				num = num * 10 + atoi(&ch);
				ch = getchar();   //当没有输入回车时，继续获取输入
			}
			PushOperateNum(&datas, num);
		}
		else
		{
			switch (Priority(GetOperateSymbol(&symbol), ch))
			{
				//判断优先级后进行计算 
			case '<':
				PushOperateSymbol(&symbol, ch);
				ch = getchar();
				break;
			case '=':
				sign = PopOperateSymbol(&symbol);
				ch = getchar();  //获取输入
				break;
			case '>':
				sign = PopOperateSymbol(&symbol);
				num2 = PopOperateNum(&datas);
				num1 = PopOperateNum(&datas);
				result = Calculate(num1, sign, num2);
				PushOperateNum(&datas, result);
				break;

			}
		}
	}
	result = GetOperateNum(&datas);
	return result;
}






int main()
{
	int result;
	result = MainCalc();
	printf("%d", result);  //输出结果 

	return 0;

	int pause;
	cin >> pause;
	return 0;


}
