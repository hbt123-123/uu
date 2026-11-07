// rea decompile_all
// name: FUN_1006bd298
// address: 0x1006bd298
// body: available
// range: 0x1006bd298-0x1006bd32f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006bd298(uint *param_1,ulong param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)param_4;
  uVar3 = 1;
  if (0x1f < param_4) {
    uVar3 = 2;
  }
  if (0xfff < param_4) {
    uVar3 = uVar3 + 1;
  }
  uVar1 = uVar3 + param_4;
  if (param_2 < uVar1) {
    return 0xffffffffffffffba;
  }
  if (uVar3 == 3) {
    *param_1 = iVar2 << 4 | 0xc;
  }
  else if (uVar3 == 2) {
    *(ushort *)param_1 = (ushort)(iVar2 << 4) | 4;
  }
  else {
    *(char *)param_1 = (char)(iVar2 << 3);
  }
  _memcpy((void *)((long)param_1 + (ulong)uVar3),param_3,param_4);
  return uVar1;
}

