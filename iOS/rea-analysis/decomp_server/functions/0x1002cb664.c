// rea decompile_all
// name: FUN_1002cb664
// address: 0x1002cb664
// body: available
// range: 0x1002cb664-0x1002cb98f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002cb664(undefined8 param_1)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  char *pcVar15;
  long local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100a82460;
  local_98 = param_1;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  uVar6 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = (long)&local_a0 - uVar6;
  lVar11 = lVar8 - uVar6;
  lVar3 = 0;
  FUN_100277ad0();
  lVar12 = *(long *)(lVar3 + -8);
  lVar7 = lVar11 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_a0 = lVar7;
  FUN_1002c76a8();
  pcVar13 = (char *)(lVar7 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar7 = *(long *)(lVar4 + -8);
  pcVar15 = pcVar13 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)pcVar15 =
       *(undefined8 *)((long)unaff_x20 + _TtC9Alamofire7Request::underlyingQueue);
  (**(code **)(lVar7 + 0x68))
            (pcVar15,*(undefined4 *)
                      PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar4);
  pcVar5 = pcVar15;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar7 + 8))(pcVar15,lVar4);
  if (((ulong)pcVar5 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1002cb990);
    (*pcVar10)();
  }
  plVar9 = *(long **)((long)unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar14 = *(undefined8 *)(plVar9[2] + 0x10);
  _os_unfair_lock_lock(uVar14);
  lVar4 = *(long *)(*plVar9 + 0x60);
  _swift_beginAccess((long)plVar9 + lVar4,auStack_78,0,0);
  FUN_100082394((long)plVar9 + lVar4,pcVar13,FUN_1002c76a8);
  cVar1 = *pcVar13;
  FUN_1000d27dc(pcVar13,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar14);
  if (cVar1 != '\x03') {
    FUN_10007f314(local_98,lVar11,&DAT_100a82460,&DAT_1008175c0);
    lVar7 = lVar11;
    (**(code **)(lVar12 + 0x30))(lVar11,1,lVar3);
    lVar4 = local_a0;
    if ((int)lVar7 == 1) {
      FUN_100040bb4(lVar11,&DAT_100a82460,&DAT_1008175c0);
    }
    else {
      FUN_10026531c(lVar11,local_a0);
      lVar7 = (long)unaff_x20 + _TtC9Alamofire7Request::delegate;
      _swift_beginAccess(lVar7,auStack_90,0,0);
      lVar11 = lVar7;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar11 != 0) {
        lVar3 = *(long *)(lVar7 + 8);
        _swift_getObjectType();
        puVar2 = &DAT_1009add88;
        _swift_allocObject(&DAT_1009add88,0x28,7);
        *(long **)(puVar2 + 0x10) = unaff_x20;
        *(long *)(puVar2 + 0x18) = lVar11;
        *(long *)(puVar2 + 0x20) = lVar3;
        pcVar10 = *(code **)(lVar3 + 0x28);
        _swift_retain();
        _swift_unknownObjectRetain(lVar11);
        (*pcVar10)();
        _swift_unknownObjectRelease(lVar11);
        _swift_release(puVar2);
        FUN_1000d27dc(lVar4,FUN_100277ad0);
        return;
      }
      FUN_1000d27dc(lVar4,FUN_100277ad0);
    }
  }
  (**(code **)(lVar12 + 0x38))(lVar8,1,1,lVar3);
  (**(code **)(*unaff_x20 + 0x290))(lVar8);
  FUN_100040bb4(lVar8,&DAT_100a82460,&DAT_1008175c0);
  return;
}

