/*******************************************************
 *	regException.h
 *	author:��������
 *	copyright(c) 2015 - ~: ��鿴LICENSE�ļ�
 *	Description(����):�ַ���
 ******************************************************/
#pragma once
#ifndef DESTINY_EXCEPTION_H
#define DESTINY_EXCEPTION_H

namespace RegularExpression {
	class regException {
	private:
		const char* str;
	public:
		explicit regException(const char* s) :str(s) {}
		virtual ~regException(){}
		inline const char* what() {
			return this->str;
		}
	};
}

#endif