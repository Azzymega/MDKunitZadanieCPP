#pragma once
class Calculator {
public:
	static int add(int firstNumber, int secondNumber) {
		return firstNumber + secondNumber;
	}
	static int substract(int firstNumber, int secondNumber) {
		return firstNumber - secondNumber;
	}
	static int multiply(int firstNumber, int secondNumber) {
		return firstNumber * secondNumber;
	}
	static int divide(int firstNumber, int secondNumber) {
		return firstNumber / secondNumber;
	}
};