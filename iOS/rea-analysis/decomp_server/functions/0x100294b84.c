// rea decompile_all
// name: FUN_100294b84
// address: 0x100294b84
// body: available
// range: 0x100294b84-0x100294d6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100294b84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined1 auStack_78 [24];
  
  uVar6 = *unaff_x20;
  puVar2 = &DAT_1009ab2b8;
  _swift_allocObject(&DAT_1009ab2b8,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  puVar3 = &DAT_1009ab380;
  _swift_allocObject(&DAT_1009ab380,0x38,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  *(undefined8 *)(puVar3 + 0x30) = uVar6;
  lVar8 = *(long *)((long)unaff_x20 + _TtC9Alamofire17DataStreamRequest::streamMutableState);
  uVar6 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10);
  _swift_retain(param_3);
  _os_unfair_lock_lock(uVar6);
  _swift_beginAccess(lVar8 + 0x18,auStack_78,0x21,0);
  puVar2 = &DAT_1009ab3a8;
  _swift_allocObject(&DAT_1009ab3a8,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_100297f40;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  uVar7 = *(ulong *)(lVar8 + 0x20);
  _swift_retain(puVar3);
  uVar4 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar8 + 0x20) = uVar7;
  uVar5 = uVar7;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_1002965b8(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7,&DAT_100a83410,FUN_1002a5ba4);
    *(ulong *)(lVar8 + 0x20) = uVar5;
  }
  uVar4 = *(ulong *)(uVar5 + 0x10);
  uVar7 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_1002965b8(uVar7,uVar4 + 1,1,uVar5,&DAT_100a83410,FUN_1002a5ba4);
  }
  *(ulong *)(uVar7 + 0x10) = uVar4 + 1;
  lVar1 = uVar7 + uVar4 * 0x10;
  *(code **)(lVar1 + 0x20) = thunk_FUN_1000826b0;
  *(undefined **)(lVar1 + 0x28) = puVar2;
  *(ulong *)(lVar8 + 0x20) = uVar7;
  _swift_endAccess(auStack_78);
  _os_unfair_lock_unlock(uVar6);
  FUN_10029151c(param_1,param_2,param_3,&DAT_1009aba78,FUN_1002a6124);
  _swift_retain();
  _swift_release(puVar3);
  return;
}

