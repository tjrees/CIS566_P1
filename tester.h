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
    PanelTester() = default;
    virtual ~PanelTester() {}
    virtual void test() = 0;
};

class ButtonTester
{
public:
    ButtonTester() = default;
    virtual ~ButtonTester() {}
    virtual void test() = 0;
};

class TextboxTester
{
public:
    TextboxTester() = default;
    virtual ~TextboxTester() {}
    virtual void test() = 0;
};

//// CONCRETE TESTER CLASSES

// Concrete Panel Tester Classes
class Word90PanelTester : public PanelTester
{
public:
    Word90PanelTester() = default;
    virtual ~Word90PanelTester() {}
    virtual void test();
};
class Word00PanelTester : public PanelTester
{
public:
    Word00PanelTester() = default;
    virtual ~Word00PanelTester() {}
    virtual void test();
};
class Word10PanelTester : public PanelTester
{
public:
    Word10PanelTester() = default;
    virtual ~Word10PanelTester() {}
    virtual void test();
};
class Word20PanelTester : public PanelTester
{
public:
    Word20PanelTester() = default;
    virtual ~Word20PanelTester() {}
    virtual void test();
};

// Concrete Button Tester Classes
class Word90ButtonTester : public ButtonTester
{
public:
    Word90ButtonTester() = default;
    virtual ~Word90ButtonTester() {}
    virtual void test();
};
class Word00ButtonTester : public ButtonTester
{
public:
    Word00ButtonTester() = default;
    virtual ~Word00ButtonTester() {}
    virtual void test();
};
class Word10ButtonTester : public ButtonTester
{
public:
    Word10ButtonTester() = default;
    virtual ~Word10ButtonTester() {}
    virtual void test();
};
class Word20ButtonTester : public ButtonTester
{
public:
    Word20ButtonTester() = default;
    virtual ~Word20ButtonTester() {}
    virtual void test();
};

// Concrete Textbox Tester Classes
class Word90TextboxTester : public TextboxTester
{
public:
    Word90TextboxTester() = default;
    virtual ~Word90TextboxTester() {}
    virtual void test();
};
class Word00TextboxTester : public TextboxTester
{
public:
    Word00TextboxTester() = default;
    virtual ~Word00TextboxTester() {}
    virtual void test();
};
class Word10TextboxTester : public TextboxTester
{
public:
    Word10TextboxTester() = default;
    virtual ~Word10TextboxTester() {}
    virtual void test();
};
class Word20TextboxTester : public TextboxTester
{
public:
    Word20TextboxTester() = default;
    virtual ~Word20TextboxTester() {}
    virtual void test();
};

// Abstract factory for creating 
class TesterFactory
{
protected:
    TesterFactory() = default;

public:
    virtual ~TesterFactory() {}
    // Abstract creator method to get a pointer to a concrete creator
    static TesterFactory * createTesterFactory(std::string generation);

    virtual PanelTester * getPanelTester() = 0;
    virtual ButtonTester * getButtonTester() = 0;
    virtual TextboxTester * getTextboxTester() = 0;
};

class Word90TesterFactory : public TesterFactory
{
private:
    Word90TesterFactory() = default;
    static unsigned int numTesters;

public:
    virtual ~Word90TesterFactory() {}
    static Word90TesterFactory * createWord90TesterFactory();

    virtual PanelTester * getPanelTester();
    virtual ButtonTester * getButtonTester();
    virtual TextboxTester * getTextboxTester();
};

class Word00TesterFactory : public TesterFactory
{
private:
    Word00TesterFactory() = default;
    static unsigned int numTesters;

public:
    virtual ~Word00TesterFactory() {}
    static Word00TesterFactory * createWord00TesterFactory();

    virtual PanelTester * getPanelTester();
    virtual ButtonTester * getButtonTester();
    virtual TextboxTester * getTextboxTester();
};

class Word10TesterFactory : public TesterFactory
{
private:
    Word10TesterFactory() = default;
    static unsigned int numTesters;

public:
    virtual ~Word10TesterFactory() {}
    static Word10TesterFactory * createWord10TesterFactory();

    virtual PanelTester * getPanelTester();
    virtual ButtonTester * getButtonTester();
    virtual TextboxTester * getTextboxTester();
};

class Word20TesterFactory : public TesterFactory
{
private:
    Word20TesterFactory() = default;
    static unsigned int numTesters;

public:
    virtual ~Word20TesterFactory() {}
    static Word20TesterFactory * createWord20TesterFactory();

    virtual PanelTester * getPanelTester();
    virtual ButtonTester * getButtonTester();
    virtual TextboxTester * getTextboxTester();
};


#endif // __TESTER_H__