// rea decompile_all
// name: FUN_1002fe990
// address: 0x1002fe990
// body: available
// range: 0x1002fe990-0x1002fead7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002fe990(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_5;
  _swift_unownedRetainStrong(param_5);
  _swift_unownedRetain(param_5);
  _swift_unownedRetain();
  _swift_release();
  puVar1 = &DAT_1009afd58;
  _swift_allocObject(&DAT_1009afd58,0x30,7);
  *(undefined8 **)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = uVar7;
  puVar2 = &DAT_1009afd80;
  _swift_allocObject(&DAT_1009afd80,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_10030df6c;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar6 = *(ulong *)(param_1 + 8);
  _swift_retain(param_4);
  uVar3 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_10029704c(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar3 = *(ulong *)(uVar4 + 0x10);
  uVar6 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_10029704c(uVar6,uVar3 + 1,1,uVar4);
  }
  *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
  lVar5 = uVar6 + uVar3 * 0x18;
  *(undefined8 *)(lVar5 + 0x20) = param_2;
  *(code **)(lVar5 + 0x28) = FUN_100102840;
  *(undefined **)(lVar5 + 0x30) = puVar2;
  _swift_unownedRelease(param_5);
  *(ulong *)(param_1 + 8) = uVar6;
  return;
}

