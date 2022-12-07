#include <iostream>

class IOperation
{
public:
    int Execute(int a, int b);
};

class SumOperation : public IOperation
{
public:
    int Execute(int a, int b)
    {
        return a + b;
    }
};

class MultOperation : public IOperation
{
public:
    int Execute(int a, int b)
    {
        return a * b;
    }
};

class OperationFactory
{
public:
    IOperation* GetSumOperation()
    {
        return new SumOperation();
    }

    IOperation* GetMultOperation()
    {
        return new MultOperation;
    }
};

int main()
{
    auto operationFactory = new OperationFactory();
    auto sum = operationFactory->GetSumOperation();
    auto result = sum->Execute(2, 3);
    return 0;
}