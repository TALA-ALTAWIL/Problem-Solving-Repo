
#include<iostream>
using namespace std;

class clsCalculator{
	enum enOperations {
		eAdd, eSubtract, eMultiply, eDivide, eClear, eCancelLastOperation
	};
	float _FinalResult = 0;
	float _ParameterUsed;
	enOperations _lastOperationDone;
	float _PreviousResult = 0;
	string _getOperationText(const enOperations operation) {
		switch (operation) {
		case enOperations::eAdd: return "Adding";
		case enOperations::eSubtract: return "Subtracting";
		case enOperations::eMultiply: return "Multiplying by";
		case enOperations::eDivide: return "Dividing by";
		case enOperations::eClear: return "Clearing";
		default: return "[Unknown Operation Type]";
		}
	}
public:

	void Add(float Number) {
		_lastOperationDone = enOperations::eAdd;
		_ParameterUsed = Number;
		_PreviousResult = _FinalResult;
		_FinalResult += _ParameterUsed;
	}	
	void Subtract(float Number) {
		_lastOperationDone = enOperations::eSubtract;
		_ParameterUsed = Number;
		_PreviousResult = _FinalResult;
		_FinalResult -= _ParameterUsed;
	}	
	void Divide(float Number) {
		_ParameterUsed = Number;
		_PreviousResult = _FinalResult;
		_lastOperationDone = enOperations::eDivide;
		if (_ParameterUsed == 0)
			_ParameterUsed = 1;
		_FinalResult /= _ParameterUsed;
	
	}	
	void Multiply(float Number) {
		_ParameterUsed = Number;
		_PreviousResult = _FinalResult;
		_lastOperationDone = enOperations::eMultiply;
		_FinalResult *= _ParameterUsed;
	}	
	void Clear() {
		_FinalResult = 0;
		_lastOperationDone = enOperations::eClear;
	}	
   void CancelLastOperation() {     
	   _lastOperationDone = enOperations::eCancelLastOperation;
	   _FinalResult = _PreviousResult; 
   }
   void PrintFinalResult() {
	   switch (_lastOperationDone) {
	   case enOperations::eClear:
		   cout << "Result after Clearing is:" << _FinalResult << "\n";
		   break;
	   case enOperations::eCancelLastOperation:
		   cout << "Result after Cancelling last operation is: " << _FinalResult << '\n';
		   break;
	   default:
		   cout <<
			   "Result after " << _getOperationText(_lastOperationDone) << ' ' <<
			   _ParameterUsed << " is: " << _FinalResult << '\n';
	   }
   }
};

int main() {
	clsCalculator Calculator1;
	Calculator1.Add(100);
	Calculator1.PrintFinalResult();	
	
	Calculator1.Multiply(10);
	Calculator1.PrintFinalResult();	

	Calculator1.CancelLastOperation();
    Calculator1.PrintFinalResult();
	
	Calculator1.Subtract(70);
	Calculator1.PrintFinalResult();	
	
	Calculator1.Clear();
	Calculator1.PrintFinalResult();	
	
	Calculator1.Add(80);
	Calculator1.PrintFinalResult();
	
	Calculator1.Divide(0);
	Calculator1.PrintFinalResult();
}

