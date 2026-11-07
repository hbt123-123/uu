// rea decompile_all
// name: FUN_1006bd330
// address: 0x1006bd330
// body: available
// range: 0x1006bd330-0x1006bd3a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1006bd330(uint *param_1,undefined8 param_2,undefined1 *param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  iVar1 = (int)param_4;
  uVar2 = 1;
  if (0x1f < param_4) {
    uVar2 = 2;
  }
  uVar4 = (ulong)uVar2;
  if (0xfff < param_4) {
    uVar4 = uVar4 + 1;
  }
  iVar3 = (int)uVar4;
  if (iVar3 != 3) {
    if (iVar3 == 2) {
      *(ushort *)param_1 = (ushort)(iVar1 << 4) | 5;
      *(undefined1 *)((long)param_1 + uVar4) = *param_3;
      return 3;
    }
    *(byte *)param_1 = (byte)(iVar1 << 3) | 1;
    *(undefined1 *)((long)param_1 + uVar4) = *param_3;
    return iVar3 + 1;
  }
  *param_1 = iVar1 << 4 | 0xd;
  *(undefined1 *)((long)param_1 + uVar4) = *param_3;
  return 4;
}

