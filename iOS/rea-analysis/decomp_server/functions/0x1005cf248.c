// rea decompile_all
// name: FUN_1005cf248
// address: 0x1005cf248
// body: available
// range: 0x1005cf248-0x1005cf38f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005cf248(ulong *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005cf38c);
    (*pcVar1)();
  }
  uVar7 = (uint)(param_4 >> 0x20);
  uVar6 = uVar7 >> 0x1e;
  uVar5 = param_3 >> 0x20;
  if (uVar7 >> 0x1e < 2) {
    lVar4 = 0;
    uVar3 = param_4 >> 0x30 & 0xff;
    if (uVar6 != 0) {
      lVar4 = (long)(int)param_3;
      uVar3 = uVar5;
    }
  }
  else if (uVar6 == 2) {
    lVar4 = *(long *)(param_3 + 0x10);
    uVar3 = *(ulong *)(param_3 + 0x18);
  }
  else {
    lVar4 = 0;
    uVar3 = 0;
  }
  uVar2 = uVar3;
  FUN_1001f82b4(uVar3,lVar4,param_3,param_4);
  uVar7 = uVar7 >> 0x1e;
  if (((long)uVar2 < 1) && (-param_2 < (long)uVar2)) {
    if (uVar7 < 2) {
      if (uVar6 == 0) {
        uVar3 = (ulong)uVar7;
        uVar5 = param_4 >> 0x30 & 0xff;
      }
      else {
        uVar3 = (ulong)(int)param_3;
      }
    }
    else {
      if (uVar6 != 2) {
        uVar3 = 0;
        uVar5 = 0;
        goto LAB_1005cf344;
      }
      uVar3 = *(ulong *)(param_3 + 0x10);
LAB_1005cf32c:
      uVar5 = *(ulong *)(param_3 + 0x18);
    }
  }
  else {
    FUN_1001f8250(uVar3,-param_2,param_3,param_4);
    if (uVar7 < 2) {
      if (uVar6 == 0) {
        uVar5 = param_4 >> 0x30 & 0xff;
      }
    }
    else {
      if (uVar7 != 3) goto LAB_1005cf32c;
      uVar5 = 0;
    }
  }
  if ((long)uVar5 < (long)uVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005cf390);
    (*pcVar1)();
  }
LAB_1005cf344:
  __s10Foundation4DataV15_RepresentationOyACSnySiGcig();
  FUN_100006cdc(param_3,param_4);
  *param_1 = uVar3;
  param_1[1] = uVar5;
  return;
}

