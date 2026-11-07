// rea decompile_all
// name: FUN_10057fb24
// address: 0x10057fb24
// body: available
// range: 0x10057fb24-0x10057fbcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10057fb24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  uVar4 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar6 = *(long *)(unaff_x20 + 0x18);
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_1005a84c4(0);
    _swift_allocObject();
    FUN_100592400(lVar6,uVar5);
    *(long *)(unaff_x20 + 0x18) = lVar6;
  }
  _swift_beginAccess(lVar6 + 0xc0,auStack_58,1,0);
  uVar5 = *(undefined8 *)(lVar6 + 0xc0);
  uVar2 = *(undefined8 *)(lVar6 + 200);
  uVar1 = *(undefined8 *)(lVar6 + 0xd0);
  uVar3 = *(undefined8 *)(lVar6 + 0xd8);
  *(undefined8 *)(lVar6 + 0xc0) = param_1;
  *(undefined8 *)(lVar6 + 200) = param_2;
  *(undefined8 *)(lVar6 + 0xd0) = param_3;
  *(undefined8 *)(lVar6 + 0xd8) = param_4;
  FUN_100541944(uVar5,uVar2,uVar1,uVar3);
  return;
}

