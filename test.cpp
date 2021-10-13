/*******************************************************
 *	test.cpp
 *	author:��������
 *	copyright(c) 2015 - ~: ��鿴LICENSE�ļ�
 *	Description(����):����
 ******************************************************/
#include "header.h"
using std::string;
#include <vector>
using std::vector;
//�����������ʽ�ָ��ַ���
void test_token_cpp() {
	RegularExpression::string str = "abcdabcdacbd";
	try {
		regex reg("[ab]{1,2}");
		sregex_token_iterator it(str.begin(), str.end(), reg, -1);
		sregex_token_iterator end;
		while (it != end) {
			cout << *it << endl;
			it++;
		}
	}
	catch (regException e) {
		cout << e.what() << endl;
	}
}

//�����������ʽƥ��
void test_match_cpp() {
	cout<<"test_match_cpp"<<endl;
	string str = "/i-tvbin/sdf234__--";
	std::vector<string> patterns;
	patterns.push_back("/i-tvbin/[-a-z0-9_/]*");
	patterns.push_back("/[-a-z_/]*");
	patterns.push_back("[a-d]*");
	for (size_t i = 0; i < patterns.size(); ++i) {
		string pattern = patterns[i];//"abcd";
		try {
			regex reg(pattern);
			if (regex_match(str, reg)) {
				cout << pattern << ":true" << endl;
			}
			else {
				cout << pattern << ":false" << endl;
			}
		}
		catch (regException e) {
			cout << e.what() << endl;
		}
	}
}

//�����������ʽ����
void test_search_cpp() {
	string str = "abcdabcdacbd";
	try {
		regex reg("abcd");
		if (regex_search(str, reg)) {
			cout << "true" << endl;
		}
		else {
			cout << "false" << endl;
		}
	}
	catch (regException e) {
		cout << e.what() << endl;
	}
}

int main() {
	test_token_cpp();
	test_match_cpp();
	test_search_cpp();
#ifdef _WIN32
	system("pause");
#endif
	return 0;
}
