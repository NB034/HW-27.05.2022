#pragma once
#include <iostream>
using namespace std;

class String112 {
	char* str{ nullptr };
	int len{ 0 };
public:
	String112() {
		this->str = new char[1]{ '\0' };
	}
	String112(const char* str) {
		this->len = strlen(str);
		this->str = new char[this->len + 1];
		strcpy_s(this->str, this->len + 1, str);
	}
	String112(int cnt, char s) {
		if (cnt < 0) {
			cnt = 0;
		}
		this->len = cnt;
		this->str = new char[this->len + 1];
		for (int i = 0; i < this->len; i++) {
			this->str[i] = s;
		}
		this->str[this->len] = '\0';
	}
	String112(const char* str, int cnt) {
		if (cnt < 0) {
			cnt = 0;
		}
		else if (cnt > strlen(str)) {
			cnt = strlen(str);
		}
		this->len = cnt;
		this->str = new char[this->len + 1];
		for (size_t i = 0; i < this->len; i++) {
			this->str[i] = str[i];
		}
		this->str[this->len] = '\0';
	}
	String112(const String112& str) {
		this->len = str.len;
		this->str = new char[this->len + 1];
		strcpy_s(this->str, this->len + 1, str.str);
	}
	~String112() {
		delete[] str;
	}

	void setString112(const char* str) {
		delete[] this->str;
		this->len = strlen(str);
		this->str = new char[this->len + 1];
		strcpy_s(this->str, this->len + 1, str);
	}
	void clear() {
		delete[] this->str;
		this->len = 0;
		this->str = new char[1];
		this->str[0] = '\0';
	}
	void print() {
		cout << this->str;
	}
};