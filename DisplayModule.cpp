#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <mutex>
#include "typedef.h"
#include "simulator.h"
#include "macro.h"
#include "DisplayModule.h"
#include "Bus.h"

using namespace Simulator;

DisplayModule::DisplayModule() : Block()
{
}

DisplayModule::~DisplayModule()
{
}

TINT DisplayModule::Exec()
{
    // TODO
    TW32U r0, r1;
    m_ParentBus->get_reg(D_MODULEID_CPU, 0, r0);	// r0
    printf("r0:%lx\n", r0);
    m_ParentBus->get_reg(D_MODULEID_CPU, 1, r1);	// r1
    printf("r1:%lx\n", r1);

    // TODO
    // read a value of address $0200
    m_ParentBus->set_address(ADDRESS_DISPLAY);
    m_ParentBus->access_read();
    printf("$%lx:%lx\n", r1, m_ParentBus->get_data());

    return D_ERR_OK;
}

TINT   DisplayModule::GetReg(TINT addr, TW32U &value)
{
    // TODO
    return D_ERR_OK;
}

TINT    DisplayModule::SetReg(TINT addr, TW32U value)
{
    // TODO
    return D_ERR_OK;
}

TINT   DisplayModule::GetMem(TW32U addr, TW32U &value, TW32U &valid)
{
    // TODO
    return D_ERR_OK;
}

TINT    DisplayModule::SetMem(TW32U addr, TW32U value)
{
    // TODO
	return D_ERR_OK;
}

TW32U*	DisplayModule::MemPtr(TW32U addr)
{
	return NULL;
}