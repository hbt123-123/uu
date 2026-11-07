// rea decompile_all
// name: FUN_100706e2c
// address: 0x100706e2c
// body: available
// range: 0x100706e2c-0x100707043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100706e2c(long param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  code *param_6)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 local_52 [2];
  
  uVar4 = (uint)(param_4 >> 0x3b) & 1;
  if ((param_5 & 0x1000000000000000) == 0) {
    uVar4 = 1;
  }
  uVar6 = 4L << uVar4;
  uVar3 = param_2;
  if ((param_2 & 0xc) == uVar6) {
    FUN_10000caa8(param_2,param_4,param_5);
  }
  if ((param_5 >> 0x3c & 1) == 0) {
    uVar5 = uVar3 >> 0x10;
  }
  else {
    uVar5 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar5 = param_5 >> 0x38 & 0xf;
    }
    if (uVar5 < uVar3 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100707044);
      (*pcVar2)();
    }
    uVar5 = 0xf;
    __sSS8UTF8ViewV16_foreignDistance4from2toSiSS5IndexV_AGtF(0xf,uVar3,param_4,param_5);
  }
  if ((param_2 & 0xc) == uVar6) {
    FUN_10000caa8(param_2,param_4,param_5);
  }
  if ((param_3 & 0xc) == uVar6) {
    FUN_10000caa8(param_3,param_4,param_5);
  }
  if ((param_5 >> 0x3c & 1) == 0) {
    param_2 = (param_3 >> 0x10) - (param_2 >> 0x10);
  }
  else {
    uVar3 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar3 = param_5 >> 0x38 & 0xf;
    }
    if (uVar3 < param_2 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10070703c);
      (*pcVar2)();
    }
    if (uVar3 < param_3 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100707040);
      (*pcVar2)();
    }
    __sSS8UTF8ViewV16_foreignDistance4from2toSiSS5IndexV_AGtF(param_2,param_3,param_4,param_5);
  }
  if (SCARRY8(uVar5,param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100707034);
    (*pcVar2)();
  }
  if ((long)uVar5 <= (long)(uVar5 + param_2)) {
    lVar1 = 0;
    if (param_1 != 0) {
      lVar1 = uVar5 + param_1;
    }
    (*param_6)(local_52,lVar1,(uVar5 + param_2) - uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100707038);
  (*pcVar2)();
}

