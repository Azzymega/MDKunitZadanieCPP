#pragma once
#include "CppUnitTest.h"
#include "Calculator.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(UnitTest1) {
public:
	TEST_METHOD(TestClassInit) {
		int a = 2;
		int b = 2;
		Assert::AreEqual(Calculator::add(a,b),4);
	}
	TEST_METHOD(TestClassInit2) {
		int a = 2;
		int b = 2;
		Assert::AreEqual(Calculator::substract(a, b), 0);
	}
	TEST_METHOD(TestClassInit3) {
		int a = 2;
		int b = 2;
		Assert::AreEqual(Calculator::multiply(a, b), 4);
	}
	TEST_METHOD(TestClassInit4) {
		int a = 2;
		int b = 2;
		Assert::AreEqual(Calculator::divide(a, b), 1);
	}
};