/*问题描述：
    商人们可以牢牢地记住电话号码,其中一个小技巧就是用一个单词或短语来记忆号码。例如，你在给Waterloo大学打电话的时候按键顺序为TUT-GLOP,所以你可以用TUT-GLOP来记忆Waterloo大学的号码。有些时候我们仅仅只需要用一部分单词来记忆号码，比如今晚回到酒店的时候你可以拨打310-GINO向Gino店预定一个披萨。另外一个记忆电话号码的技巧就是用一定的顺序来记忆号码。比如Pizza Hut的电话3-10-10-10你可以记成三个十。
    标准格式的电话号码是7位数，其中第三位和第四位数以-连接（比如888-1200）。电话的键盘数字和字母对应关系如下:
A,B,C  对应 2  
D,E,F  对应 3  
G,H,I  对应 4  
J,K,L   对应 5  
M,N,O 对应 6  
P,R,S  对应 7  
T,U,V  对应 8  
W,X,Y  对应 9  
    键盘上没有数字键对应到Q和Z字母。“-”符号不需要打出来，必要的时候可以被添加和删除。例如标准格式TUT-GLOP代表电话888-4567,310-GINO代表电话310-4466,3-10-10-10代表电话310-1010。

输入：
    输入只有一种情况，第一行为输入一个正整数代表输入电话号码的总条数（最大为100000），其余的行数列出电话薄里的电话号码，每一行为一个电话号码，由数字、大写字母（除Q,Z之外）和-组成。

输出：
    列出出现超过一次的电话号码。输出格式为标准格式电话号码 数目。输出以自然序列升序排序，若没有重复出现的电话号码，则输出：No duplicates.

举例：
输入：
12 
4873279 
ITS-EASY 
888-4567 
3-10-10-10 
888-GLOP 
TUT-GLOP 
967-11-11 
310-GINO 
F101010 
888-1200 
-4-8-7-3-2-7-9- 
487-3279 
输出：
310-1010 2 
487-3279 4  
888-4567 3

算法思路：

1、对录入字符串处理，计算录入字符串特征码即电话号码的数值。
2、利用二叉查找树按照自然排序来统计每个电话号码出现的次数。
3、结果输出。
*/

#include <iostream>
#include <map>
#include <string>
using namespace std;
char dMap[] = {'2','2','2','3','3','3','4','4','4','5','5','5','6','6','6',
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;'7','Q','7','7','8','8','8','9','9','9','Z'};

//获取标准电话格式
string getPhoneNum(string);
//字母数字映射
char getNum(char);
//replaceAll
string& replaceAll(string&, const string&, const string&);

int main(){
	map<string,int> phoneMap; 
	map<string,int>::iterator iter;
	int total;
	int cnt = 0;
	cin >> total;
	while(cnt++ < total){
		string phone;
		cin >> phone;
		string phoneNum = getPhoneNum(phone);
		//cout << phoneNum << endl;
		++phoneMap[phoneNum];
	}
	bool flag = false;
	map<string,int>::iterator end = phoneMap.end();

	for(iter = phoneMap.begin(); iter != end; ++iter){
		if(iter->second> 1){
			flag = true;
			cout<<iter->first<<" "<<iter->second<<endl;
		}
	}
	if(!flag){
		cout<<"No duplicates."<<endl;
	}
	return 0;
}

string& replaceAll(string& context, const string& from, const string& to){
	size_t lookHere = 0;
	size_t foundHere;

	while((foundHere = context.find(from, lookHere)) != string::npos) {
		context.replace(foundHere, from.size(), to);
		lookHere = foundHere + from.size();
	}
	return context;
}

string getPhoneNum(string phone){
	//去除首尾空格
	phone.erase(0,phone.find_first_not_of(" "));
    phone.erase(phone.find_last_not_of(" ") + 1);
	//替换掉'-'
	replaceAll(phone,"-","");
	//字符数字转换
	char phoneArr[phone.length() + 2];
	int tmp = 0;
	for (int i = 0; i < phone.length(); i++) {
		if(phone.at(i) == '-'){
			continue;
		}
		if(tmp == 3){
			phoneArr[tmp++] = '-';
		}
		phoneArr[tmp++] = getNum(phone.at(i));
	}
	phoneArr[phone.length()+1] = '\0';
	return string(phoneArr);
}
char getNum(char c){
	if(c >= 'A' && c <= 'Z'){
		int tmp = c - 'A';
		return dMap[tmp];
	}
	return c;
}