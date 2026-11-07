// rea decompile_all
// name: FUN_1004355e8
// address: 0x1004355e8
// body: available
// range: 0x1004355e8-0x100435663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1004355e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_3 + 0xd0,auStack_48,0,0);
  uVar3 = *(ulong *)(param_3 + 0xe0) >> 0x3c;
  uVar1 = 0;
  if (uVar3 < 0xf) {
    uVar1 = *(ulong *)(param_3 + 0xd0) & 0xffffffff;
  }
  uVar2 = 0;
  if (uVar3 < 0xf) {
    uVar2 = *(ulong *)(param_3 + 0xd0) & 0xffffffff00000000;
  }
  FUN_100040b80();
  return uVar2 | uVar1;
}

