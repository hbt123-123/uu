// rea decompile_all
// name: FUN_1002cb990
// address: 0x1002cb990
// body: available
// range: 0x1002cb990-0x1002cbca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002cb990(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long alStack_a0 [3];
  undefined1 auStack_88 [24];
  long local_70;
  long local_68;
  
  lVar2 = 0;
  alStack_a0[1] = param_1;
  FUN_1002c76a8();
  lVar9 = (long)alStack_a0 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82460;
  alStack_a0[2] = lVar9;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar9 = lVar9 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100277ad0();
  lVar8 = *(long *)(lVar4 + -8);
  lVar10 = lVar9 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar7 = *(long *)(lVar5 + -8);
  puVar12 = (undefined8 *)(lVar10 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar12 = *(undefined8 *)(unaff_x20 + _TtC9Alamofire7Request::underlyingQueue);
  (**(code **)(lVar7 + 0x68))
            (puVar12,*(undefined4 *)
                      PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar5);
  puVar6 = puVar12;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar7 + 8))(puVar12,lVar5);
  if (((ulong)puVar6 & 1) != 0) {
    plVar13 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
    uVar11 = *(undefined8 *)(plVar13[2] + 0x10);
    _os_unfair_lock_lock(uVar11);
    lVar5 = (long)plVar13 + *(long *)(*plVar13 + 0x60);
    _swift_beginAccess(lVar5,auStack_88,0x21,0);
    if ((*(byte *)(lVar5 + *(int *)(lVar2 + 0x60)) & 1) == 0) {
      *(undefined1 *)(lVar5 + *(int *)(lVar2 + 0x60)) = 1;
      FUN_10007f314(alStack_a0[1],lVar9,&DAT_100a82460,&DAT_1008175c0);
      lVar7 = lVar9;
      (**(code **)(lVar8 + 0x30))(lVar9,1,lVar4);
      if ((int)lVar7 == 1) {
        FUN_100040bb4(lVar9,&DAT_100a82460,&DAT_1008175c0);
      }
      else {
        FUN_10026531c(lVar9,lVar10);
        lVar2 = (long)*(int *)(lVar2 + 0x5c);
        FUN_100040bb4(lVar5 + lVar2,&DAT_100a82460,&DAT_1008175c0);
        FUN_10026531c(lVar10,lVar5 + lVar2);
        (**(code **)(lVar8 + 0x38))(lVar5 + lVar2,0,1,lVar4);
      }
      _swift_endAccess(auStack_88);
      _os_unfair_lock_unlock(uVar11);
      FUN_1002cbca4();
      uVar11 = *(undefined8 *)(plVar13[2] + 0x10);
      _os_unfair_lock_lock(uVar11);
      lVar2 = alStack_a0[2];
      FUN_100082394(lVar5,alStack_a0[2],FUN_1002c76a8);
      FUN_10007f314(lVar2 + 0xf0,auStack_88,&DAT_100a82c40,&DAT_100817200);
      FUN_1000d27dc(lVar2,FUN_1002c76a8);
      _os_unfair_lock_unlock(uVar11);
      if (local_70 == 0) {
        FUN_100040bb4(auStack_88,&DAT_100a82c40,&DAT_100817200);
      }
      else {
        FUN_10003f030(auStack_88,local_70);
        (**(code **)(local_68 + 0xd0))();
        FUN_10003f094(auStack_88);
      }
    }
    else {
      _swift_endAccess(auStack_88);
      _os_unfair_lock_unlock(uVar11);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002cbca4);
  (*pcVar1)();
}

