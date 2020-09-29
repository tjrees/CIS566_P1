// tester.cpp

// Implementations for the classes defined in tester.h

#include "tester.h"
#include <iostream>

// TesterFactory methods

// public
// Abstract creator method to get a pointer to a concrete creator
TesterFactory * TesterFactory::createTesterFactory(std::string generation)
{
    if (generation == "Word90")
    {
        return Word90TesterFactory::createWord90TesterFactory();
    }
    else if (generation == "Word00")
    {
        return Word00TesterFactory::createWord00TesterFactory();
    }
    else if (generation == "Word10")
    {
        return Word10TesterFactory::createWord10TesterFactory();
    }
    else if (generation == "Word20")
    {
        return Word20TesterFactory::createWord20TesterFactory();
    }
    else
    {
        return nullptr;
    }   
}

// Word90TesterFactory
unsigned int Word90TesterFactory::numTesters = 0;
Word90TesterFactory * Word90TesterFactory::createWord90TesterFactory()
{
    if (Word90TesterFactory::numTesters < 2)
    {
        Word90TesterFactory::numTesters++;
        return new Word90TesterFactory();
    }
    else
    {
        std::cout << "Two instances of Word90TesterFactory have already been created!\n";
        return nullptr;
    }
}
PanelTester * Word90TesterFactory::getPanelTester()
{
    return new Word90PanelTester();
}
ButtonTester * Word90TesterFactory::getButtonTester()
{
    return new Word90ButtonTester();
}
TextboxTester * Word90TesterFactory::getTextboxTester()
{
    return new Word90TextboxTester();
}

// Word00TesterFactory
unsigned int Word00TesterFactory::numTesters = 0;
Word00TesterFactory * Word00TesterFactory::createWord00TesterFactory()
{
    if (Word00TesterFactory::numTesters < 2)
    {
        Word00TesterFactory::numTesters++;
        return new Word00TesterFactory();
    }
    else
    {
        std::cout << "Two instances of Word00TesterFactory have already been created!\n";
        return nullptr;
    }
}
PanelTester * Word00TesterFactory::getPanelTester()
{
    return new Word00PanelTester();
}
ButtonTester * Word00TesterFactory::getButtonTester()
{
    return new Word00ButtonTester();
}
TextboxTester * Word00TesterFactory::getTextboxTester()
{
    return new Word00TextboxTester();
}

// Word10TesterFactory
unsigned int Word10TesterFactory::numTesters = 0;
Word10TesterFactory * Word10TesterFactory::createWord10TesterFactory()
{
    if (Word10TesterFactory::numTesters < 2)
    {
        Word10TesterFactory::numTesters++;
        return new Word10TesterFactory();
    }
    else
    {
        std::cout << "Two instances of Word10TesterFactory have already been created!\n";
        return nullptr;
    }
}
PanelTester * Word10TesterFactory::getPanelTester()
{
    return new Word10PanelTester();
}
ButtonTester * Word10TesterFactory::getButtonTester()
{
    return new Word10ButtonTester();
}
TextboxTester * Word10TesterFactory::getTextboxTester()
{
    return new Word10TextboxTester();
}

// Word20TesterFactory
unsigned int Word20TesterFactory::numTesters = 0;
Word20TesterFactory * Word20TesterFactory::createWord20TesterFactory()
{
    if (Word20TesterFactory::numTesters < 2)
    {
        Word20TesterFactory::numTesters++;
        return new Word20TesterFactory();
    }
    else
    {
        std::cout << "Two instances of Word20TesterFactory have already been created!\n";
        return nullptr;
    }
}
PanelTester * Word20TesterFactory::getPanelTester()
{
    return new Word20PanelTester();
}
ButtonTester * Word20TesterFactory::getButtonTester()
{
    return new Word20ButtonTester();
}
TextboxTester * Word20TesterFactory::getTextboxTester()
{
    return new Word20TextboxTester();
}

// UI Feature Tester (Product) methods

// Panel tests
void Word90PanelTester::test()
{
    std::cout << "Panel Word90\n";
}
void Word00PanelTester::test()
{
    std::cout << "Panel Word00\n";
}
void Word10PanelTester::test()
{
    std::cout << "Panel Word10\n";
}
void Word20PanelTester::test()
{
    std::cout << "Panel Word20\n";
}

// Button tests
void Word90ButtonTester::test()
{
    std::cout << "Button Word90\n";
}
void Word00ButtonTester::test()
{
    std::cout << "Button Word00\n";
}
void Word10ButtonTester::test()
{
    std::cout << "Button Word10\n";
}
void Word20ButtonTester::test()
{
    std::cout << "Button Word20\n";
}

// Textbox tests
void Word90TextboxTester::test()
{
    std::cout << "Textbox Word90\n";
}
void Word00TextboxTester::test()
{
    std::cout << "Textbox Word00\n";
}
void Word10TextboxTester::test()
{
    std::cout << "Textbox Word10\n";
}
void Word20TextboxTester::test()
{
    std::cout << "Textbox Word20\n";
}

