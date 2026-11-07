// rea decompile_all
// name: FUN_1002b4538
// address: 0x1002b4538
// body: available
// range: 0x1002b4538-0x1002b46af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002b4538(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_68 [24];
  
  uVar6 = *unaff_x20;
  _swift_unownedRetainStrong();
  _swift_unownedRetain();
  _swift_release();
  puVar2 = &DAT_1009acd30;
  _swift_allocObject(&DAT_1009acd30,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  lVar8 = *(long *)((long)unaff_x20 + _TtC9Alamofire7Request::validators);
  uVar6 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10);
  _swift_retain(param_2);
  _os_unfair_lock_lock(uVar6);
  _swift_beginAccess(lVar8 + 0x18,auStack_68,0x21,0);
  puVar3 = &DAT_1009acd58;
  _swift_allocObject(&DAT_1009acd58,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_1002bb440;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  uVar7 = *(ulong *)(lVar8 + 0x18);
  _swift_retain(puVar2);
  uVar4 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar8 + 0x18) = uVar7;
  uVar5 = uVar7;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_100296548(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *(ulong *)(lVar8 + 0x18) = uVar5;
  }
  uVar4 = *(ulong *)(uVar5 + 0x10);
  uVar7 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_100296548(uVar7,uVar4 + 1,1,uVar5);
  }
  *(ulong *)(uVar7 + 0x10) = uVar4 + 1;
  lVar1 = uVar7 + uVar4 * 0x10;
  *(code **)(lVar1 + 0x20) = thunk_FUN_1000f4ed4;
  *(undefined **)(lVar1 + 0x28) = puVar3;
  *(ulong *)(lVar8 + 0x18) = uVar7;
  _swift_endAccess(auStack_68);
  _os_unfair_lock_unlock(uVar6);
  _swift_release(puVar2);
  return;
}

