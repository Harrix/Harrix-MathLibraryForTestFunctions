void HML_DefineTestFunction(TypeOfTestFunction Type)
{
    /*
    Служебная функция определяет тестовую функцию для других функций по работе с тестовыми функциями.
	Вызывать всегда, когда хотите вызвать функции по работе с тестовыми функциями (из одноименного раздела).
    Ответ представляет собой два действительных числа.
    Входные параметры:
     Type - обозначение тестовой функции, которую вызываем.
     Смотреть виды в переменных перечисляемого типа в начале HarrixMathLibrary.h файла.
    Возвращаемое значение:
     Отсутствует.
    */
    VHML_TypeOfTestFunction=Type;
}