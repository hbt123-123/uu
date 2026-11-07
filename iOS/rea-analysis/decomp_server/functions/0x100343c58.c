// rea decompile_all
// name: FUN_100343c58
// address: 0x100343c58
// body: available
// range: 0x100343c58-0x100343da3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100343c58(ulong *param_1,ulong param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100343da4);
    (*pcVar1)();
  }
  uVar7 = (uint)(param_4 >> 0x20);
  uVar6 = uVar7 >> 0x1e;
  uVar5 = param_3 >> 0x20;
  if (uVar7 >> 0x1e < 2) {
    uVar3 = param_4 >> 0x30 & 0xff;
    if (uVar6 != 0) {
      uVar3 = uVar5;
    }
    uVar4 = 0;
    if (uVar6 != 0) {
      uVar4 = (long)(int)param_3;
    }
  }
  else if (uVar6 == 2) {
    uVar3 = *(ulong *)(param_3 + 0x18);
    uVar4 = *(ulong *)(param_3 + 0x10);
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
  }
  uVar2 = uVar4;
  FUN_1001f82b4(uVar4,uVar3,param_3,param_4);
  uVar7 = uVar7 >> 0x1e;
  if ((param_2 == 0) || (param_2 <= uVar2)) {
    FUN_1001f8250(uVar4,param_2,param_3,param_4);
    if (uVar7 < 2) {
      uVar3 = param_4 >> 0x30 & 0xff;
      if (uVar7 != 0) {
        uVar3 = uVar5;
      }
    }
    else if (uVar7 == 2) {
      uVar3 = *(ulong *)(param_3 + 0x18);
    }
    else {
      uVar3 = 0;
    }
    if ((long)uVar3 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100343d60);
      (*pcVar1)();
    }
  }
  else if (uVar7 < 2) {
    uVar4 = param_4 >> 0x30 & 0xff;
    uVar3 = uVar4;
    if (uVar6 != 0) {
      uVar4 = uVar5;
      uVar3 = uVar5;
    }
  }
  else if (uVar6 == 2) {
    uVar4 = *(ulong *)(param_3 + 0x18);
    uVar3 = *(ulong *)(param_3 + 0x18);
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
  }
  __s10Foundation4DataV15_RepresentationOyACSnySiGcig();
  FUN_100006cdc(param_3,param_4);
  *param_1 = uVar4;
  param_1[1] = uVar3;
  return;
}

