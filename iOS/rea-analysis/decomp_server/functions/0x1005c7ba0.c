// rea decompile_all
// name: FUN_1005c7ba0
// address: 0x1005c7ba0
// body: available
// range: 0x1005c7ba0-0x1005c7c57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005c7ba0(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_2;
      lVar4 = param_2 >> 0x20;
      goto LAB_1005c7bf4;
    }
    if ((param_3 & 0xff000000000000) == 0) goto LAB_1005c7c2c;
  }
  else {
    if (uVar2 != 2) goto LAB_1005c7c2c;
    lVar3 = *(long *)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x18);
LAB_1005c7bf4:
    if (lVar3 == lVar4) goto LAB_1005c7c2c;
  }
  (**(code **)(param_7 + 0x78))(param_2,param_3,1,param_6,param_7);
  if (unaff_x21 != 0) {
    return;
  }
LAB_1005c7c2c:
  FUN_10056301c(param_1,param_4,param_5,param_6,param_7);
  return;
}

