//type.h

#include <iostream>
#include <string>
using namespace std;

class Number {
	private:
		string input;	//输入
		string output;	//转换后的大写数字
		string letter;	//1-10大写 const
		int length;
		bool flag;
	public:
		void Init_Number();	//输入 letter初始化 输入数据input流
		bool Valid();	//判断是否合法  T/F->flag
		void Trans_Number();	//output
		void Display();//根据位数 output输出（带单位）
};