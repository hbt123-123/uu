// rea decompile_all
// name: FUN_10062f0bc
// address: 0x10062f0bc
// body: available
// range: 0x10062f0bc-0x10062f13f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10062f0bc(ushort *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = param_2 + 0xffff;
  uVar3 = 4;
  if (uVar2 < 0xffff0000) {
    uVar3 = 2;
  }
  if (uVar2 < 0xff0000) {
    uVar3 = 1;
  }
  uVar1 = 0;
  if (0xffff < uVar2) {
    uVar1 = uVar3;
  }
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = (uint)(byte)param_1[1];
    if ((byte)param_1[1] == 0) {
      return 0;
    }
  }
  else if (uVar1 == 2) {
    uVar2 = (uint)param_1[1];
    if (param_1[1] == 0) {
      return 0;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar2 == 0) {
      return 0;
    }
  }
  return ((uint)*param_1 | uVar2 << 0x10) - 0xffff;
}

