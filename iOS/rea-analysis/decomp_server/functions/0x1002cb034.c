// rea decompile_all
// name: FUN_1002cb034
// address: 0x1002cb034
// body: available
// range: 0x1002cb034-0x1002cb47b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002cb034(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long local_d0 [4];
  undefined1 auStack_a0 [24];
  long local_88;
  long local_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  FUN_1002c76a8();
  lVar9 = (long)local_d0 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82460;
  local_d0[3] = lVar9;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  uVar6 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = lVar9 - uVar6;
  lVar14 = lVar9 - uVar6;
  lVar8 = lVar14 - uVar6;
  lVar4 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar7 = *(long *)(lVar4 + -8);
  puVar13 = (undefined8 *)(lVar8 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar13 = *(undefined8 *)(unaff_x20 + _TtC9Alamofire7Request::underlyingQueue);
  (**(code **)(lVar7 + 0x68))
            (puVar13,*(undefined4 *)
                      PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar4);
  puVar5 = puVar13;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar7 + 8))(puVar13,lVar4);
  if (((ulong)puVar5 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1002cb47c);
    (*pcVar10)();
  }
  plVar11 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar15 = *(undefined8 *)(plVar11[2] + 0x10);
  local_d0[0] = param_1;
  local_d0[1] = lVar9;
  _os_unfair_lock_lock(uVar15);
  lVar4 = (long)plVar11 + *(long *)(*plVar11 + 0x60);
  _swift_beginAccess(lVar4,auStack_a0,0x21,0);
  iVar1 = *(int *)(lVar2 + 0x5c);
  local_d0[2] = lVar2;
  FUN_10007f314(lVar4 + iVar1,lVar14,&DAT_100a82460,&DAT_1008175c0);
  lVar9 = 0;
  FUN_100277ad0();
  lVar7 = *(long *)(lVar9 + -8);
  pcVar10 = *(code **)(lVar7 + 0x30);
  lVar2 = lVar14;
  (*pcVar10)(lVar14,1,lVar9);
  if ((int)lVar2 == 1) {
    FUN_10007f314(param_2,lVar8,&DAT_100a82460,&DAT_1008175c0);
    lVar2 = lVar14;
    (*pcVar10)(lVar14,1,lVar9);
    if ((int)lVar2 != 1) {
      FUN_100040bb4(lVar14,&DAT_100a82460,&DAT_1008175c0);
    }
  }
  else {
    FUN_10026531c(lVar14,lVar8);
    (**(code **)(lVar7 + 0x38))(lVar8,0,1,lVar9);
  }
  FUN_100128b30(lVar8,lVar4 + iVar1,&DAT_100a82460,&DAT_1008175c0);
  _swift_endAccess(auStack_a0);
  _os_unfair_lock_unlock(uVar15);
  lVar2 = *(long *)(unaff_x20 + _TtC9Alamofire7Request::validators);
  uVar15 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar15);
  _swift_beginAccess(lVar2 + 0x18,auStack_78,0,0);
  lVar2 = *(long *)(lVar2 + 0x18);
  _swift_bridgeObjectRetain(lVar2);
  _os_unfair_lock_unlock(uVar15);
  uVar6 = *(ulong *)(lVar2 + 0x10);
  if (uVar6 != 0) {
    uVar12 = 0;
    puVar5 = (undefined8 *)(lVar2 + 0x28);
    do {
      if (*(ulong *)(lVar2 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1002cb478);
        (*pcVar10)();
      }
      uVar12 = uVar12 + 1;
      pcVar10 = (code *)puVar5[-1];
      uVar15 = *puVar5;
      _swift_retain(uVar15);
      (*pcVar10)();
      _swift_release(uVar15);
      puVar5 = puVar5 + 2;
    } while (uVar6 != uVar12);
  }
  _swift_bridgeObjectRelease(lVar2);
  uVar15 = *(undefined8 *)(plVar11[2] + 0x10);
  _os_unfair_lock_lock(uVar15);
  lVar2 = local_d0[3];
  FUN_100082394(lVar4,local_d0[3],FUN_1002c76a8);
  FUN_10007f314(lVar2 + 0xf0,auStack_a0,&DAT_100a82c40,&DAT_100817200);
  FUN_1000d27dc(lVar2,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar15);
  if (local_88 == 0) {
    FUN_100040bb4(auStack_a0,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_10003f030(auStack_a0,local_88);
    (**(code **)(local_80 + 0xc0))(unaff_x20,local_d0[0],param_2,local_88,local_80);
    FUN_10003f094(auStack_a0);
  }
  lVar9 = local_d0[2];
  uVar15 = *(undefined8 *)(plVar11[2] + 0x10);
  _os_unfair_lock_lock(uVar15);
  FUN_100082394(lVar4,lVar2,FUN_1002c76a8);
  lVar4 = local_d0[1];
  FUN_10007f314(lVar2 + *(int *)(lVar9 + 0x5c),local_d0[1],&DAT_100a82460,&DAT_1008175c0);
  FUN_1000d27dc(lVar2,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar15);
  FUN_1002cb664(lVar4);
  FUN_100040bb4(lVar4,&DAT_100a82460,&DAT_1008175c0);
  return;
}

