// rea decompile_all
// name: FUN_1002c92fc
// address: 0x1002c92fc
// body: available
// range: 0x1002c92fc-0x1002c963f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002c962c) */

void FUN_1002c92fc(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  code *apcStack_a0 [3];
  undefined1 auStack_88 [24];
  long local_70;
  long local_68;
  
  lVar3 = 0;
  FUN_1002c76a8();
  lVar1 = -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)apcStack_a0 + lVar1;
  puVar4 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar10 = lVar9 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar7 = *(long *)(lVar5 + -8);
  puVar11 = (undefined8 *)(lVar10 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar11 = *(undefined8 *)(unaff_x20 + _TtC9Alamofire7Request::underlyingQueue);
  (**(code **)(lVar7 + 0x68))
            (puVar11,*(undefined4 *)
                      PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar5);
  puVar6 = puVar11;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar7 + 8))(puVar11,lVar5);
  if (((ulong)puVar6 & 1) != 0) {
    FUN_100082394(param_1,lVar10,FUN_100277ad0);
    lVar7 = 0;
    FUN_100277ad0();
    apcStack_a0[1] = *(code **)(*(long *)(lVar7 + -8) + 0x38);
    (*apcStack_a0[1])(lVar10,0,1,lVar7);
    plVar8 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
    uVar12 = *(undefined8 *)(plVar8[2] + 0x10);
    _os_unfair_lock_lock(uVar12);
    lVar5 = (long)plVar8 + *(long *)(*plVar8 + 0x60);
    _swift_beginAccess(lVar5,auStack_88,0x21,0);
    FUN_1002d8964(lVar10,lVar5 + *(int *)(lVar3 + 0x5c),&DAT_100a82460,&DAT_1008175c0);
    _swift_endAccess(auStack_88);
    _os_unfair_lock_unlock(uVar12);
    FUN_100040bb4(lVar10,&DAT_100a82460,&DAT_1008175c0);
    uVar12 = *(undefined8 *)(plVar8[2] + 0x10);
    _os_unfair_lock_lock(uVar12);
    FUN_100082394(lVar5,lVar9,FUN_1002c76a8);
    FUN_10007f314(&stack0x00000050 + lVar1,auStack_88,&DAT_100a82c40,&DAT_100817200);
    FUN_1000d27dc(lVar9,FUN_1002c76a8);
    _os_unfair_lock_unlock(uVar12);
    if (local_70 == 0) {
      FUN_100040bb4(auStack_88,&DAT_100a82c40,&DAT_100817200);
    }
    else {
      FUN_10003f030(auStack_88,local_70);
      (**(code **)(local_68 + 0x88))();
      FUN_10003f094(auStack_88);
    }
    uVar12 = *(undefined8 *)(plVar8[2] + 0x10);
    _os_unfair_lock_lock(uVar12);
    _swift_beginAccess(lVar5,auStack_88,0x21,0);
    FUN_1002ce218(lVar5,unaff_x20);
    _swift_endAccess(auStack_88);
    _os_unfair_lock_unlock(uVar12);
    FUN_100082394(param_1,lVar10,FUN_100277ad0);
    (*apcStack_a0[1])(lVar10,0,1,lVar7);
    FUN_1002cb664(lVar10);
    FUN_100040bb4(lVar10,&DAT_100a82460,&DAT_1008175c0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002c962c);
  (*pcVar2)();
}

