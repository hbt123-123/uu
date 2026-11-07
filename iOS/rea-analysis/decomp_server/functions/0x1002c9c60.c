// rea decompile_all
// name: FUN_1002c9c60
// address: 0x1002c9c60
// body: available
// range: 0x1002c9c60-0x1002c9eef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002c9edc) */
/* WARNING: Removing unreachable block (ram,0x0001002c9ec8) */

void FUN_1002c9c60(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  long local_90;
  long local_88;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  FUN_1002c76a8();
  uVar5 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar2 = -uVar5;
  lVar6 = (long)&uStack_b0 + lVar2;
  lVar7 = lVar6 - uVar5;
  lVar3 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar10 = *(long *)(lVar3 + -8);
  puVar8 = (undefined8 *)(lVar7 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar8 = *(undefined8 *)(unaff_x20 + _TtC9Alamofire7Request::underlyingQueue);
  (**(code **)(lVar10 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar3);
  puVar4 = puVar8;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar10 + 8))(puVar8,lVar3);
  if (((ulong)puVar4 & 1) != 0) {
    plVar11 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
    uVar9 = *(undefined8 *)(plVar11[2] + 0x10);
    _os_unfair_lock_lock(uVar9);
    lVar3 = *(long *)(*plVar11 + 0x60);
    _swift_beginAccess((long)plVar11 + lVar3,auStack_78,0,0);
    FUN_100082394((long)plVar11 + lVar3,lVar7,FUN_1002c76a8);
    FUN_1002cdf78(lVar7,param_1);
    FUN_1000d27dc(lVar7,FUN_1002c76a8);
    _os_unfair_lock_unlock(uVar9);
    uVar9 = *(undefined8 *)(plVar11[2] + 0x10);
    _os_unfair_lock_lock(uVar9);
    FUN_100082394((long)plVar11 + lVar3,lVar6,FUN_1002c76a8);
    FUN_10007f314(&stack0x00000040 + lVar2,auStack_a8,&DAT_100a82c40,&DAT_100817200);
    FUN_1000d27dc(lVar6,FUN_1002c76a8);
    _os_unfair_lock_unlock(uVar9);
    if (local_90 == 0) {
      FUN_100040bb4(auStack_a8,&DAT_100a82c40,&DAT_100817200);
    }
    else {
      FUN_10003f030(auStack_a8,local_90);
      (**(code **)(local_88 + 0xa0))();
      FUN_10003f094(auStack_a8);
    }
    uVar9 = *(undefined8 *)(plVar11[2] + 0x10);
    _os_unfair_lock_lock(uVar9);
    _swift_beginAccess((long)plVar11 + lVar3,auStack_a8,0x21,0);
    FUN_1002ce218((long)plVar11 + lVar3);
    _swift_endAccess(auStack_a8);
    _os_unfair_lock_unlock(uVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002c9ec8);
  (*pcVar1)();
}

