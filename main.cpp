// main.cpp
// Runs the main program for P1
#include "tester.h"

#include <iostream>
#include <string>

int main()
{
    std::string generation;

    while (std::getline(std::cin, generation))
    {
        TesterFactory * testerFactoryPtr = TesterFactory::createTesterFactory(generation);
        if (testerFactoryPtr != nullptr)
        {
            PanelTester * panelTesterPtr = testerFactoryPtr->getPanelTester();
            panelTesterPtr->test();
            ButtonTester * buttonTesterPtr = testerFactoryPtr->getButtonTester();
            buttonTesterPtr->test();
            TextboxTester * textboxTesterPtr = testerFactoryPtr->getTextboxTester();
            textboxTesterPtr->test();
            delete panelTesterPtr;
            delete buttonTesterPtr;
            delete textboxTesterPtr;

            delete testerFactoryPtr;
        }
    }

    return 0;
}
