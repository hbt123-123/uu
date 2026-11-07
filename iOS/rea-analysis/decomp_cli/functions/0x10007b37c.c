// rea decompile_all
// name: FUN_10007b37c
// address: 0x10007b37c
// body: available
// range: 0x10007b37c-0x10007b497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007b37c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  
  lVar5 = *(long *)(unaff_x20 + 8);
  lStack_50 = param_3;
  local_48 = param_4;
  FUN_100060d88(&local_68);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))();
  local_78 = param_2;
  uStack_70 = param_4;
  _swift_beginAccess(lVar5 + 0x48,auStack_90,0x21,0);
  uVar4 = *(ulong *)(lVar5 + 0x48);
  uVar1 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar5 + 0x48) = uVar4;
  uVar2 = uVar4;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_10006f390(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *(ulong *)(lVar5 + 0x48) = uVar2;
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_10006f390(uVar4,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  lVar3 = uVar4 + uVar1 * 0x38;
  *(undefined8 *)(lVar3 + 0x50) = local_48;
  *(undefined8 *)(lVar3 + 0x38) = uStack_60;
  *(undefined8 *)(lVar3 + 0x30) = local_68;
  *(long *)(lVar3 + 0x48) = lStack_50;
  *(undefined8 *)(lVar3 + 0x40) = local_58;
  *(undefined8 *)(lVar3 + 0x28) = uStack_70;
  *(undefined8 *)(lVar3 + 0x20) = local_78;
  *(ulong *)(lVar5 + 0x48) = uVar4;
  _swift_endAccess(auStack_90);
  return;
}

