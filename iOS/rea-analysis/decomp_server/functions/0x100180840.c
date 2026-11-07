// rea decompile_all
// name: FUN_100180840
// address: 0x100180840
// body: available
// range: 0x100180840-0x1001808db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100180840(long *param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    uVar3 = 0xf000000000000000;
  }
  else {
    uVar1 = (uint)(param_5 >> 0x20);
    uVar4 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar4 == 0) {
        uVar3 = param_5 >> 0x30 & 0xff;
      }
      else {
        iVar5 = (int)((ulong)param_4 >> 0x20);
        if (SBORROW4(iVar5,(int)param_4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001808dc);
          (*pcVar2)();
        }
        uVar3 = (ulong)(iVar5 - (int)param_4);
      }
    }
    else if (uVar4 == 2) {
      uVar3 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
      if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001808d8);
        (*pcVar2)();
      }
    }
    else {
      uVar3 = 0;
    }
    FUN_1001808dc(param_2,uVar3,param_6,param_7);
  }
  *param_1 = param_2;
  param_1[1] = uVar3;
  return;
}

