// rea decompile_all
// name: FUN_100293a24
// address: 0x100293a24
// body: available
// range: 0x100293a24-0x100293cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100293a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  local_90 = *unaff_x20;
  lVar8 = *(long *)(param_5 + -8);
  lVar11 = *(long *)(lVar8 + 0x40);
  lVar9 = (long)&local_a0 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_1009ab2b8;
  local_a0 = param_2;
  local_98 = param_4;
  local_88 = param_6;
  local_80 = param_3;
  _swift_allocObject(&DAT_1009ab2b8,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  (**(code **)(lVar8 + 0x10))(lVar9,param_1,param_5);
  uVar6 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar7 = uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff);
  uVar12 = lVar11 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar3 = &DAT_1009ab330;
  _swift_allocObject(&DAT_1009ab330,uVar12 + 0x20,uVar6 | 7);
  *(long *)(puVar3 + 0x10) = param_5;
  *(undefined8 *)(puVar3 + 0x18) = local_88;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  (**(code **)(lVar8 + 0x20))(puVar3 + uVar7,lVar9,param_5);
  uVar1 = local_98;
  *(undefined8 *)(puVar3 + uVar12) = local_a0;
  *(undefined8 *)(puVar3 + uVar12 + 8) = local_80;
  *(undefined8 *)((long)(puVar3 + uVar12 + 8) + 8) = local_98;
  *(undefined8 *)(puVar3 + uVar12 + 0x18) = local_90;
  lVar8 = *(long *)((long)unaff_x20 + _TtC9Alamofire17DataStreamRequest::streamMutableState);
  uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10);
  local_90 = local_a0;
  _swift_retain(local_98);
  _os_unfair_lock_lock(uVar10);
  _swift_beginAccess(lVar8 + 0x18,auStack_78,0x21,0);
  puVar2 = &DAT_1009ab358;
  _swift_allocObject(&DAT_1009ab358,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_100297ecc;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  uVar12 = *(ulong *)(lVar8 + 0x20);
  _swift_retain(puVar3);
  uVar6 = uVar12;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar8 + 0x20) = uVar12;
  uVar7 = uVar12;
  if ((uVar6 & 1) == 0) {
    uVar7 = 0;
    FUN_1002965b8(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12,&DAT_100a83410,FUN_1002a5ba4);
    *(ulong *)(lVar8 + 0x20) = uVar7;
  }
  uVar6 = *(ulong *)(uVar7 + 0x10);
  uVar12 = uVar7;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
    uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_1002965b8(uVar12,uVar6 + 1,1,uVar7,&DAT_100a83410,FUN_1002a5ba4);
  }
  *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
  lVar9 = uVar12 + uVar6 * 0x10;
  *(code **)(lVar9 + 0x20) = thunk_FUN_1000826b0;
  *(undefined **)(lVar9 + 0x28) = puVar2;
  *(ulong *)(lVar8 + 0x20) = uVar12;
  _swift_endAccess(auStack_78);
  _os_unfair_lock_unlock(uVar10);
  uVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,local_88,param_5,0x1008f871c,&TargetProtocolRequirement_1008f8724);
  uVar4 = 0;
  FUN_100277ad0(0);
  puVar5 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  FUN_10029161c(local_90,local_80,uVar1,uVar10,uVar4,puVar5);
  _swift_retain();
  _swift_release(puVar3);
  return;
}

