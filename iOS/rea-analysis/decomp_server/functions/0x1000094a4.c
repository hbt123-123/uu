// rea decompile_all
// name: FUN_1000094a4
// address: 0x1000094a4
// body: available
// range: 0x1000094a4-0x100009603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000094a4(long param_1,ulong param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  if (param_2 >> 0x3e == 3) {
    uVar4 = 0;
    if ((((param_1 == 0) && (param_2 == 0xc000000000000000)) && (2 < param_4 >> 0x3e)) &&
       ((uVar4 = 0, param_3 == 0 && (param_4 == 0xc000000000000000)))) {
      return 1;
    }
  }
  else {
    uVar2 = (uint)(param_2 >> 0x3e);
    if (uVar2 == 0) {
      uVar4 = param_2 >> 0x30 & 0xff;
    }
    else if (uVar2 == 1) {
      iVar3 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar3,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100009600);
        (*pcVar1)();
      }
      uVar4 = (ulong)(iVar3 - (int)param_1);
    }
    else {
      uVar4 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
      if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100009604);
        (*pcVar1)();
      }
    }
  }
  uVar2 = (uint)(param_4 >> 0x20);
  uVar5 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar5 == 0) {
      uVar6 = param_4 >> 0x30 & 0xff;
    }
    else {
      iVar3 = (int)((ulong)param_3 >> 0x20);
      if (SBORROW4(iVar3,(int)param_3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000095fc);
        (*pcVar1)();
      }
      uVar6 = (ulong)(iVar3 - (int)param_3);
    }
  }
  else {
    if (uVar5 != 2) {
      return (uint)(uVar4 == 0);
    }
    uVar6 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
    if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000095f8);
      (*pcVar1)();
    }
  }
  if (uVar4 != uVar6) {
    return 0;
  }
  if ((long)uVar4 < 1) {
    return 1;
  }
  FUN_100008184(param_3,param_4);
  FUN_100009264(param_1,param_2,param_3,param_4);
  return (uint)param_1 & 1;
}

