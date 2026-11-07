// rea decompile_all
// name: FUN_1002d0ae0
// address: 0x1002d0ae0
// body: available
// range: 0x1002d0ae0-0x1002d0bbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d0ae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  *(undefined1 *)(param_1 + 0xd8) = 0;
  puVar2 = &DAT_1009ae0d0;
  _swift_allocObject(&DAT_1009ae0d0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  uVar5 = *(ulong *)(param_1 + 0xe0);
  _swift_retain(param_3);
  uVar3 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_100296548(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
  }
  uVar3 = *(ulong *)(uVar4 + 0x10);
  uVar5 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_100296548(uVar5,uVar3 + 1,1,uVar4);
  }
  *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
  lVar1 = uVar5 + uVar3 * 0x10;
  *(code **)(lVar1 + 0x20) = thunk_FUN_100102840;
  *(undefined **)(lVar1 + 0x28) = puVar2;
  *(ulong *)(param_1 + 0xe0) = uVar5;
  return;
}

