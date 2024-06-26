#include <stack>

#include "../components/components.hpp"

// 00E0
void clearScreen(Display &display);
// 00EE
void retFromSubroutine(Memory &mem, std::stack<uint16_t> &stack);
// 1NNN
void jumpTo(uint16_t instruction, Memory &mem);
// 2NNN
void callSubroutine(uint16_t instruction, Memory &mem,
                    std::stack<uint16_t> &stack);
// 6XNN
void setRegister(uint16_t instruction, components::Registers &variableRegs);
// 7XNN
void addInRegister(uint16_t instruction, components::Registers &variableRegs);
// ANNN
void setIndexRegister(uint16_t instruction, uint16_t indexReg);
// DXYN
void displaySprite(uint16_t instruction, components::Registers &variableRegs,
                   Memory &mem, Display &display);