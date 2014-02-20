void MHL_LeftAndRightBorderOfTestFunction_Real(double *Left, double *Right,int VMHL_N)
{
    /*
    Функция определяет левые и правые границы допустимой области для тестовой функции вещественной оптимизации.
    Более точную информацию ищите в описаниях тестовых функций:
    https://github.com/Harrix/HarrixTestFunctions
    Включает в себя все тестовые функции вещественной оптимизации.
    Обязательно вызвать один раз перед ее использованием функцию MHL_DefineTestFunction,
    в которой определяется конкретный тип задачи оптимизации.
    Входные параметры:
     Left - указатель на массив, куда будет записываться результат левых границ допустимой области;
     Right - указатель на массив, куда будет записываться результат левых границ допустимой области;
     VMHL_N - размер массива x.
    Возвращаемое значение:
     Отсутствует.
    */
    int i;

    if (VMHL_TypeOfTestFunction==TestFunction_Ackley)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-5;
        for (i=0;i<VMHL_N;i++) Right[i]=5;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_AdditivePotential)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=0;
        for (i=0;i<VMHL_N;i++) Right[i]=4;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_MultiplicativePotential)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=0;
        for (i=0;i<VMHL_N;i++) Right[i]=4;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_ReverseGriewank)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-10;
        for (i=0;i<VMHL_N;i++) Right[i]=10;
    }

    if (VMHL_TypeOfTestFunction==TestFunction_ParaboloidOfRevolution)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-2;
        for (i=0;i<VMHL_N;i++) Right[i]=2;
    }

    if (VMHL_TypeOfTestFunction==TestFunction_Rastrigin)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-5;
        for (i=0;i<VMHL_N;i++) Right[i]=5;
    }

    if (VMHL_TypeOfTestFunction==TestFunction_Rosenbrock)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-2;
        for (i=0;i<VMHL_N;i++) Right[i]=2;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_HyperEllipsoid)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-5;
        for (i=0;i<VMHL_N;i++) Right[i]=5;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_RotatedHyperEllipsoid)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-5;
        for (i=0;i<VMHL_N;i++) Right[i]=5;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_Wave)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-2;
        for (i=0;i<VMHL_N;i++) Right[i]=2;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_Multiextremal)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-2;
        for (i=0;i<VMHL_N;i++) Right[i]=2;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_Multiextremal2)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-2;
        for (i=0;i<VMHL_N;i++) Right[i]=2;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_Sombrero)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-10;
        for (i=0;i<VMHL_N;i++) Right[i]=10;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_Himmelblau)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-5;
        for (i=0;i<VMHL_N;i++) Right[i]=5;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_Katnikov)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-5;
        for (i=0;i<VMHL_N;i++) Right[i]=5;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_Multiextremal3)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-5;
        for (i=0;i<VMHL_N;i++) Right[i]=5;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_Multiextremal4)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=0;
        for (i=0;i<VMHL_N;i++) Right[i]=4;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_StepFunction)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-5;
        for (i=0;i<VMHL_N;i++) Right[i]=5;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_Rana)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-512;
        for (i=0;i<VMHL_N;i++) Right[i]=512;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_ShekelsFoxholes)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-50;
        for (i=0;i<VMHL_N;i++) Right[i]=50;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_EggHolder)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-512;
        for (i=0;i<VMHL_N;i++) Right[i]=512;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_RastriginWithChange)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-16;
        for (i=0;i<VMHL_N;i++) Right[i]=16;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_RastriginWithTurning)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-16;
        for (i=0;i<VMHL_N;i++) Right[i]=16;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_Schwefel)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-500;
        for (i=0;i<VMHL_N;i++) Right[i]=500;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_Griewangk)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-16;
        for (i=0;i<VMHL_N;i++) Right[i]=16;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_InvertedRosenbrock)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-5;
        for (i=0;i<VMHL_N;i++) Right[i]=5;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_GaussianQuartic)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-2;
        for (i=0;i<VMHL_N;i++) Right[i]=2;
    }
	
	if (VMHL_TypeOfTestFunction==TestFunction_RastriginNovgorod)
    {
        for (i=0;i<VMHL_N;i++) Left[i]=-2;
        for (i=0;i<VMHL_N;i++) Right[i]=2;
    }
}
//---------------------------------------------------------------------------
void MHL_LeftAndRightBorderOfTestFunction_Real(double *Left, double *Right, int VMHL_N, TypeOfTestFunction Type)
{
    /*
    Функция определяет левые и правые границы допустимой области для тестовой функции вещественной оптимизации.
    Более точную информацию ищите в описаниях тестовых функций:
    https://github.com/Harrix/HarrixTestFunctions
    Включает в себя все тестовые функции вещественной оптимизации.
    Входные параметры:
     NumberOfParts - указатель на массив, куда будет записываться результат;
     VMHL_N - размер массива x;
     Type - тип тестовой функции.
    Возвращаемое значение:
     Точность вычислений.
    */
    VMHL_TypeOfTestFunction = Type;

    MHL_LeftAndRightBorderOfTestFunction_Real(Left, Right, VMHL_N);
}