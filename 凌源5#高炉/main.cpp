#include"paichan.h"
int main()
{
	ofstream outFile("arrangement.txt");
	ofstream outFile1("epoch.txt");
	if (!outFile.is_open()) {
		cerr << "文件打开失败！" << endl;  // cerr 输出错误信息到控制台
		return 1;  // 异常退出
	}

	paichan project;
	project.initialize();
	project.process(outFile, outFile1);

	outFile.close();
	cout << "此项目道次编排已成功写入epoch.txt文件！" << endl;
	cout << "此项目总编排已成功写入arrangement.txt文件！" << endl;
	return 0;
}