// tester.h
// defines classes for abstract factory, concrete factory,
// abstract tester, and concrete tester classes
// Implementations are in tester.cpp
#ifndef __TESTER_H__
#define __TESTER_H__
#include <string>

// Abstract tester classes

class PanelTester
{
public:
    PanelTester();
    virtual void test() = 0;
};

class ButtonTester
{
public:
    ButtonTester();
    virtual void test() = 0;
};

class TextboxTester
{
public:
    TextboxTester();
    virtual void test() = 0;
};

//// CONCRETE TESTER CLASSES

// Concrete Panel Tester Classes
class Word90PanelTester : public PanelTester
{
public:
    Word90PanelTester();
    virtual void test();
};
class Word00PanelTester : public PanelTester
{
public:
    Word00PanelTester();
    virtual void test();
};
class Word10PanelTester : public PanelTester
{
public:
    Word10PanelTester();
    virtual void test();
};
class Word20PanelTester : public PanelTester
{
public:
    Word20PanelTester();
    virtual void test();
};

// Concrete Button Tester Classes
class Word90ButtonTester : public ButtonTester
{
public:
    Word90ButtonTester();
    virtual void test();
};
class Word00ButtonTester : public ButtonTester
{
public:
    Word00ButtonTester();
    virtual void test();
};
class Word10ButtonTester : public ButtonTester
{
public:
    Word10ButtonTester();
    virtual void test();
};
class Word20ButtonTester : public ButtonTester
{
public:
    Word20ButtonTester();
    virtual void test();
};

// Concrete Textbox Tester Classes
class Word90TextboxTester : public TextboxTester
{
public:
    Word90TextboxTester();
    virtual void test();
};

// Abstract factory for creating 
class TesterFactory
{
private:
    TesterFactory();

public:
    static TesterFactory * createTester(std::string generation);

    virtual PanelTester * getPanelTester() = 0;
    virtual ButtonTester * getButtonTester() = 0;
    virtual TextboxTester * getTextboxTester() = 0;
};

class Word90TesterFactory : public TesterFactory
{
private:
    Word90TesterFactory();

    static unsigned int numTesters;

public:
    static Word90TesterFactory * createWord90TesterFactory();

    virtual PanelTester * getPanelTester();
    virtual ButtonTester * getButtonTester();
    virtual TextboxTester * getTextboxTester();
};

class Word00TesterFactory : public TesterFactory
{

};

class Word10TesterFactory : public TesterFactory
{

};

class Word20TesterFactory : public TesterFactory
{

};


#endif // __TESTER_H__