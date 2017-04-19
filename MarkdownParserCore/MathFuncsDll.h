/*
Exemplarische Vorgehensweise: Erstellen und Verwenden einer Dynamic Link Library (C++)
https://msdn.microsoft.com/de-de/library/ms235636.aspx
*/
#ifdef MARKDOWNPARSERCORE_EXPORTS
#define MARKDOWNPARSERCORE_API __declspec(dllexport) 
#else
#define MARKDOWNPARSERCORE_API __declspec(dllimport) 
#endif

namespace MathFuncs
{
	extern "C" MARKDOWNPARSERCORE_API double Add(double a, double b)
	{
		return a + b;
	}
	// This class is exported from the MathFuncsDll.dll
	class MyMathFuncs
	{
	public:
		// Returns a + b
		

		// Returns a - b
		static MARKDOWNPARSERCORE_API double Subtract(double a, double b);

		// Returns a * b
		static MARKDOWNPARSERCORE_API double Multiply(double a, double b);

		// Returns a / b
		// Throws const std::invalid_argument& if b is 0
		static MARKDOWNPARSERCORE_API double Divide(double a, double b);
	};
}