// rea decompile_all
// name: FUN_100532d3c
// address: 0x100532d3c
// body: available
// range: 0x100532d3c-0x100532e8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100532d3c(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  undefined1 auStack_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  ushort local_48;
  
  FUN_1004f9e80(":",1);
  if (((*(byte *)(unaff_x20 + 0x23) & 1) == 0) &&
     (FUN_10050f0c4(auStack_68,param_2,param_3), local_48 >> 8 < 0xff)) {
    if ((local_48 >> 8 & 1) != 0) {
      __ss12StaticStringV11descriptionSSvg(local_58,uStack_50);
    }
    FUN_10052aec8();
    _swift_bridgeObjectRelease(uStack_50);
    return;
  }
  (**(code **)(param_3 + 0x28))(param_2,param_3);
  if (param_2 < 0) {
    uVar3 = *(ulong *)(unaff_x20 + 0x18);
    uVar1 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_100506f84(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar3 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      FUN_100506f84(uVar3,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2d;
    *(ulong *)(unaff_x20 + 0x18) = uVar3;
  }
  FUN_10052badc();
  return;
}

