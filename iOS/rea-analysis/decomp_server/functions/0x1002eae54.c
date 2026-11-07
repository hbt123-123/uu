// rea decompile_all
// name: FUN_1002eae54
// address: 0x1002eae54
// body: available
// range: 0x1002eae54-0x1002eb0ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1002eae54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  ID IVar15;
  long lVar16;
  undefined8 auStack_b0 [2];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  FUN_1002c76a8();
  lVar5 = -(*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)auStack_b0 + lVar5;
  lVar6 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar16 = *(long *)(lVar6 + -8);
  puVar10 = (undefined8 *)(lVar9 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  (**(code **)(lVar16 + 0x68))
            (puVar10,*(undefined4 *)
                      PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar6);
  puVar7 = puVar10;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar16 + 8))(puVar10,lVar6);
  if (((ulong)puVar7 & 1) != 0) {
    lVar6 = *(long *)(unaff_x20 + 0xd0);
    uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x10);
    _os_unfair_lock_lock(uVar8);
    _swift_beginAccess(lVar6 + 0x18,auStack_78,0,0);
    uVar1 = *(undefined8 *)(lVar6 + 0x18);
    uVar2 = *(undefined8 *)(lVar6 + 0x20);
    uVar12 = *(undefined8 *)(lVar6 + 0x28);
    uVar3 = *(undefined8 *)(lVar6 + 0x30);
    uVar13 = *(undefined8 *)(lVar6 + 0x38);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar13);
    FUN_1002dfba0(param_1,uVar1);
    if (param_1 == 0) {
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRelease(uVar1);
      IVar15 = 0;
    }
    else {
      plVar14 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
      uVar11 = *(undefined8 *)(plVar14[2] + 0x10);
      auStack_b0[1] = uVar12;
      _os_unfair_lock_lock(uVar11);
      lVar6 = *(long *)(*plVar14 + 0x60);
      _swift_beginAccess((long)plVar14 + lVar6,auStack_90,0,0);
      FUN_100082394((long)plVar14 + lVar6,lVar9);
      IVar15 = *(ID *)(&stack0x00000090 + lVar5);
      FUN_1000d27dc(lVar9,FUN_1002c76a8);
      uVar12 = auStack_b0[1];
      _os_unfair_lock_unlock(uVar11);
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRelease(uVar1);
      _swift_release(param_1);
    }
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(uVar12);
    _os_unfair_lock_unlock(uVar8);
    if (IVar15 == 0) {
      IVar15 = _objc_msgSend(*(ID *)(unaff_x20 + 0x10),"configuration");
      IVar15 = _objc_msgSend(IVar15,"URLCredentialStorage");
      IVar15 = _objc_msgSend(IVar15,"defaultCredentialForProtectionSpace:",param_2);
    }
    return IVar15;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1002eb0f0);
  (*pcVar4)();
}

