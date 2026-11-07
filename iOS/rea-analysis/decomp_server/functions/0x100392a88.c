// rea decompile_all
// name: FUN_100392a88
// address: 0x100392a88
// body: available
// range: 0x100392a88-0x100392ad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100392a88(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(&DAT_10081ebe8 + (ulong)(param_1 - 1) * 4);
  iVar2 = *(int *)(&DAT_10081ebe8 + (ulong)param_1 * 4);
  uVar4 = 0;
  _time();
  _srand(uVar4);
  uVar5 = _rand();
  uVar4 = iVar2 - iVar1;
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = uVar5 / uVar4;
  }
  return (uVar5 - uVar3 * uVar4) + iVar1;
}

