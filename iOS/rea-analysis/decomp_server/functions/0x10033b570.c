// rea decompile_all
// name: FUN_10033b570
// address: 0x10033b570
// body: available
// range: 0x10033b570-0x10033ba5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10033ba5c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10033b570(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ID IVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  long unaff_x20;
  ulong uVar15;
  long unaff_x21;
  undefined1 *puVar16;
  long lVar17;
  ID self;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 *local_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar5 = 0;
  __s10Foundation4UUIDVMa();
  local_f0 = *(long *)(lVar5 + -8);
  lVar21 = (long)&local_110 - (*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_f8 = lVar21;
  lStack_e8 = lVar5;
  __s10Foundation3URLVMa();
  lVar17 = *(long *)(lVar6 + -8);
  uVar12 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar21 = lVar21 - uVar12;
  lVar22 = lVar21 - uVar12;
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x10);
  _os_unfair_lock_lock();
  _swift_beginAccess(lVar5 + 0x18,auStack_88,0,0);
  lVar20 = *(long *)(lVar5 + 0x18);
  puVar11 = auStack_a0;
  local_c8 = lVar5;
  _swift_beginAccess(lVar20 + 0x38,puVar11,0,0);
  puVar16 = *(undefined1 **)(lVar20 + 0x38);
  puVar19 = (undefined1 *)((ulong)puVar16 & 0xffffffffffffff8);
  local_110 = param_1;
  local_108 = lVar17;
  lStack_100 = lVar6;
  local_e0 = lVar22;
  local_d8 = lVar22 - uVar12;
  local_d0 = lVar21;
  if ((ulong)puVar16 >> 0x3e == 0) {
    puVar13 = *(undefined1 **)(puVar19 + 0x10);
  }
  else {
    puVar13 = puVar19;
    if ((long)puVar16 < 0) {
      puVar13 = puVar16;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  _swift_retain(lVar20);
  _swift_bridgeObjectRetain(puVar16);
  puVar18 = (undefined1 *)0x0;
  uVar12 = 0;
  while (puVar13 != puVar18) {
    if (((ulong)puVar16 & 0xc000000000000001) == 0) {
      if (*(undefined1 **)(puVar19 + 0x10) <= puVar18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10033ba44);
        (*pcVar3)();
      }
      puVar8 = *(undefined1 **)(puVar16 + (long)puVar18 * 8 + 0x20);
      _swift_retain();
    }
    else {
      puVar8 = puVar18;
      puVar11 = puVar16;
      FUN_1002d3c7c();
    }
    if (SCARRY8((long)puVar18,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10033b6f8);
      (*pcVar3)();
    }
    uVar15 = *(ulong *)(puVar8 + 0x20);
    _swift_release();
    puVar18 = puVar18 + 1;
    bVar4 = CARRY8(uVar12,uVar15);
    uVar12 = uVar12 + uVar15;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10033ba48);
      (*pcVar3)();
    }
  }
  _swift_release(lVar20);
  _swift_bridgeObjectRelease(puVar16);
  _os_unfair_lock_unlock(uVar7);
  if (uVar12 < *(ulong *)(unaff_x20 + 0x20)) {
    uVar14 = *(undefined8 *)(*(long *)(local_c8 + 0x10) + 0x10);
    uVar7 = uVar14;
    _os_unfair_lock_lock();
    FUN_100338f28();
    if (unaff_x21 == 0) {
      _os_unfair_lock_unlock(uVar14);
      puVar2 = local_110;
      *local_110 = uVar7;
      local_110[1] = puVar11;
      uVar7 = 0;
      FUN_1002f9800(0);
      _swift_storeEnumTagMultiPayload(puVar2,uVar7,0);
    }
    else {
      _os_unfair_lock_unlock(uVar14);
    }
    goto LAB_10033ba04;
  }
  self = *(ID *)(unaff_x20 + 0x50);
  IVar9 = _objc_msgSend(self,"temporaryDirectory");
  lVar21 = local_d8;
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(local_d8,IVar9);
  lVar6 = local_e0;
  uVar14 = 0x80000001008ab280;
  uVar7 = 0xd000000000000029;
  __s10Foundation3URLV22appendingPathComponentyACSSF(local_e0,0xd000000000000029,0x80000001008ab280)
  ;
  lVar5 = local_f8;
  __s10Foundation4UUIDVACycfC(local_f8);
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(local_f0 + 8))(lVar5,lStack_e8);
  lVar5 = local_d0;
  __s10Foundation3URLV22appendingPathComponentyACSSF(local_d0,uVar7,uVar14);
  _swift_bridgeObjectRelease(uVar14);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  local_a8 = 0;
  IVar9 = _objc_msgSend(self,"createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
                        uVar14,1,0,&local_a8);
  if ((int)IVar9 == 0) {
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_a8);
    _swift_willThrow(0);
    pcVar3 = *(code **)(local_108 + 8);
    lVar17 = lStack_100;
LAB_10033b9e0:
    (*pcVar3)(lVar6,lVar17);
    (*pcVar3)(lVar21,lVar17);
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(local_c8 + 0x10) + 0x10);
    _os_unfair_lock_lock(uVar7);
    FUN_100339308(lVar5);
    if (unaff_x21 != 0) {
      _os_unfair_lock_unlock(uVar7);
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
      local_a8 = 0;
      IVar9 = _objc_msgSend(self,"removeItemAtURL:error:",uVar7,&local_a8);
      if ((IVar9 & 1) == 0) {
        uVar7 = local_a8;
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_a8);
        _swift_willThrow(0);
        _swift_errorRelease(uVar7);
      }
      lVar17 = lStack_100;
      lVar20 = local_108;
      _swift_willThrow();
      pcVar3 = *(code **)(lVar20 + 8);
      goto LAB_10033b9e0;
    }
    _os_unfair_lock_unlock(uVar7);
    lVar17 = lStack_100;
    lVar20 = local_108;
    pcVar3 = *(code **)(local_108 + 8);
    (*pcVar3)(lVar6,lStack_100);
    (*pcVar3)(lVar21,lVar17);
    puVar10 = &DAT_100a84390;
    FUN_100004bb4(&DAT_100a84390,&DAT_100818cf8);
    puVar2 = local_110;
    iVar1 = *(int *)(puVar10 + 0x30);
    (**(code **)(lVar20 + 0x10))(local_110,lVar5,lVar17);
    *(undefined1 *)((long)puVar2 + (long)iVar1) = 1;
    uVar7 = 0;
    FUN_1002f9800(0);
    _swift_storeEnumTagMultiPayload(puVar2,uVar7,1);
  }
  (*pcVar3)(lVar5,lVar17);
LAB_10033ba04:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

