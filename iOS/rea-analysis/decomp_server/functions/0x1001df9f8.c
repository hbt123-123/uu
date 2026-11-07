// rea decompile_all
// name: FUN_1001df9f8
// address: 0x1001df9f8
// body: available
// range: 0x1001df9f8-0x1001dfb33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1001df9f8(ulong *param_1,long param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong local_70;
  ulong uStack_68;
  
  uVar8 = param_5 >> 0x38 & 0xf;
  uVar1 = param_4 & 0xffffffffffff;
  if ((param_5 & 0x2000000000000000) != 0) {
    uVar1 = uVar8;
  }
  if (param_2 == 0) {
    uVar7 = 0;
    lVar5 = 0;
  }
  else if (param_3 == 0) {
    uVar7 = 0;
    lVar5 = param_3;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001dfb34);
      (*pcVar2)();
    }
    lVar9 = 0;
    uVar7 = 0;
    while (lVar5 = lVar9, (long)uVar7 < (long)uVar1) {
      if ((param_5 >> 0x3c & 1) == 0) {
        if ((param_5 >> 0x3d & 1) == 0) {
          uVar6 = param_4 & 0xffffffffffff;
          iVar3 = (int)param_5 + 0x20;
          if ((param_4 >> 0x3c & 1) == 0) {
            uVar4 = param_4;
            uVar6 = param_5;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
            iVar3 = (int)uVar4;
          }
        }
        else {
          iVar3 = (int)&local_70;
          uVar6 = uVar8;
          local_70 = param_4;
          uStack_68 = param_5 & 0xffffffffffffff;
        }
        __ss13_decodeScalar_10startingAts7UnicodeO0B0V_Si12scalarLengthtSRys5UInt8VG_SitF();
      }
      else {
        lVar5 = uVar7 << 0x10;
        uVar6 = param_4;
        __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                  (lVar5,param_4,param_5);
        iVar3 = (int)lVar5;
      }
      uVar7 = uVar6 + uVar7;
      *(int *)(param_2 + lVar9 * 4) = iVar3;
      lVar5 = param_3;
      if (param_3 + -1 == lVar9) break;
      lVar5 = lVar9 + 1;
      lVar9 = lVar9 + 1;
      if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001dfb30);
        (*pcVar2)();
      }
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = uVar7;
  param_1[3] = uVar1;
  return lVar5;
}

