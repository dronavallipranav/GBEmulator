#include <cpu.h>

void daa(Z80_State* cpu);

void cpl(Z80_State *cpu);

void ccf(Z80_State *cpu);

void scf(Z80_State *cpu);

void rotate(Z80_State* cpu, bool left, bool circular, uint8_t(*getReg)(Z80_State*), void(*setReg)(Z80_State*, uint8_t));

void shift(Z80_State *cpu, bool left, bool keep_msb, uint8_t (*getReg)(Z80_State*), void (*setReg)(Z80_State*, uint8_t));

void handle_manip(Z80_State *cpu, uint8_t opcode);