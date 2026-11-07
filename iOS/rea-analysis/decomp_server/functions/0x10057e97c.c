// rea decompile_all
// name: FUN_10057e97c
// address: 0x10057e97c
// body: available
// range: 0x10057e97c-0x10057ea0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10057e97c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1005a84c4(0);
    _swift_allocObject();
    FUN_100592400(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x18) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x78);
  *(undefined8 *)(lVar3 + 0x70) = param_1;
  *(undefined8 *)(lVar3 + 0x78) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}

