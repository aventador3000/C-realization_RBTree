////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief     Unit tests for some xi::RBTree private implementation
/// \author    Sergey Shershakov
/// \version   0.1.0
/// \date      01.05.2017
///            This is a part of the course "Algorithms and Data Structures" 
///            provided by  the School of Software Engineering of the Faculty 
///            of Computer Science at the Higher School of Economics.
///
/// Gtest-based unit test.
/// The naming conventions imply the name of a unit-test module is the same as 
/// the name of the corresponding tested module with _test suffix
///
/// Тестирование закрытых методов, что считается плохим подходом, т.к. 
/// unit-тестирование должно работать с тестируемым материалом, как с черным
/// ящиком. Однако в специальных случаях тестирование закрытой реализации
/// допустимо, как, например, в случае со сложными методами вращения поддеревьев,
/// которые (методы) через интерфейсные методы вызываются многократно и 
/// отследить корректность их выполнения по посткондиции довольно затруднительно.
/// https://github.com/google/googletest/blob/master/googletest/docs/AdvancedGuide.md#testing-private-code
///
////////////////////////////////////////////////////////////////////////////////
