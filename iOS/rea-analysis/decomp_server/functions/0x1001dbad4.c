// rea decompile_all
// name: FUN_1001dbad4
// address: 0x1001dbad4
// body: available
// range: 0x1001dbad4-0x1001dbbb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001dbad4(undefined8 param_1,long param_2,dispatch_group_t param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0x21,0);
  uVar3 = *(ulong *)(param_2 + 0x10);
  _swift_bridgeObjectRetain(param_1);
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(param_2 + 0x10) = uVar3;
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1000369c0(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    *(ulong *)(param_2 + 0x10) = uVar2;
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_1000369c0(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar3 + uVar1 * 8 + 0x20) = param_1;
  *(ulong *)(param_2 + 0x10) = uVar3;
  _swift_endAccess(auStack_58);
  _dispatch_group_leave(param_3);
  return;
}

