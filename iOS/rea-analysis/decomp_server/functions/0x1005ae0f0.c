// rea decompile_all
// name: FUN_1005ae0f0
// address: 0x1005ae0f0
// body: available
// range: 0x1005ae0f0-0x1005ae17f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1005ae0f0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xee < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x11) {
      iVar2 = 4;
    }
    if (param_2 + 0x11 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1005ae16c;
        goto LAB_1005ae150;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1005ae150:
      return ((uint)*param_1 | uVar1 << 8) - 0x11;
    }
  }
LAB_1005ae16c:
  iVar2 = *param_1 - 0x12;
  if (*param_1 < 0x12) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}

