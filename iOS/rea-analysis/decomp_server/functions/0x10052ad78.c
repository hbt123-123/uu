// rea decompile_all
// name: FUN_10052ad78
// address: 0x10052ad78
// body: available
// range: 0x10052ad78-0x10052aec7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10052ad78(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  uVar4 = *unaff_x20;
  if ((*(byte *)((long)unaff_x20 + 9) & 1) == 0) {
    uVar2 = unaff_x20[1];
    uVar1 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = uVar4;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
      FUN_100506f84(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar1 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_100506f84(uVar4,uVar1 + 1,1,uVar3);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    *(char *)(uVar4 + uVar1 + 0x20) = (char)uVar2;
    *unaff_x20 = uVar4;
  }
  uVar2 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar1 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
    FUN_100506f84(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar4 = *(ulong *)(uVar1 + 0x10);
  uVar2 = uVar1;
  if (*(ulong *)(uVar1 + 0x18) >> 1 <= uVar4) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar1 + 0x18));
    FUN_100506f84(uVar2,uVar4 + 1,1,uVar1);
  }
  *(ulong *)(uVar2 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar2 + uVar4 + 0x20) = 0x22;
  *unaff_x20 = uVar2;
  _swift_bridgeObjectRetain(param_2);
  FUN_1004fa030(param_1,param_2);
  FUN_1004f9e80("\":",2);
  *(undefined2 *)(unaff_x20 + 1) = 0x2c;
  return;
}

