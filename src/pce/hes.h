#ifndef __MDFN_PCE_HES_H
#define __MDFN_PCE_HES_H

namespace MDFN_IEN_PCE
{

uint8 ReadIBP(unsigned int A);
void HES_Load(Stream* s) MDFN_COLD;
void HES_Reset(void);
void HES_Update(EmulateSpecStruct *espec, uint16 jp_data);
void HES_Close(void) MDFN_COLD;

};

#endif
