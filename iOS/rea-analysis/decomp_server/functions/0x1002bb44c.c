// rea decompile_all
// name: thunk_FUN_1002ca6e8
// address: 0x1002bb44c
// body: available
// range: 0x1002bb44c-0x1002bb44f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void thunk_FUN_1002ca6e8(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_a0;
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  FUN_1002c76a8();
  lVar2 = -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)&uStack_a0 + lVar2;
  puVar4 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  uVar7 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar11 = lVar15 - uVar7;
  lVar10 = lVar11 - uVar7;
  lVar5 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar8 = *(long *)(lVar5 + -8);
  puVar12 = (undefined8 *)(lVar10 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar12 = *(undefined8 *)(unaff_x20 + _TtC9Alamofire7Request::underlyingQueue);
  (**(code **)(lVar8 + 0x68))
            (puVar12,*(undefined4 *)
                      PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar5);
  puVar6 = puVar12;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar8 + 8))(puVar12,lVar5);
  if (((ulong)puVar6 & 1) != 0) {
    plVar14 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
    uVar13 = *(undefined8 *)(plVar14[2] + 0x10);
    _os_unfair_lock_lock(uVar13);
    lVar5 = (long)plVar14 + *(long *)(*plVar14 + 0x60);
    _swift_beginAccess(lVar5,auStack_88,0x21,0);
    iVar1 = *(int *)(lVar3 + 0x5c);
    FUN_10007f314(lVar5 + iVar1,lVar11,&DAT_100a82460,&DAT_1008175c0);
    lVar8 = 0;
    FUN_100277ad0();
    lVar16 = *(long *)(lVar8 + -8);
    pcVar9 = *(code **)(lVar16 + 0x30);
    lVar3 = lVar11;
    (*pcVar9)(lVar11,1,lVar8);
    if ((int)lVar3 == 1) {
      _swift_storeEnumTagMultiPayload(lVar10,lVar8,0xf);
      lVar3 = lVar11;
      (*pcVar9)(lVar11,1,lVar8);
      if ((int)lVar3 != 1) {
        FUN_100040bb4(lVar11,&DAT_100a82460,&DAT_1008175c0);
      }
    }
    else {
      FUN_10026531c(lVar11,lVar10);
    }
    (**(code **)(lVar16 + 0x38))(lVar10,0,1,lVar8);
    FUN_100128b30(lVar10,lVar5 + iVar1,&DAT_100a82460,&DAT_1008175c0);
    _swift_endAccess(auStack_88);
    _os_unfair_lock_unlock(uVar13);
    uVar13 = *(undefined8 *)(plVar14[2] + 0x10);
    _os_unfair_lock_lock(uVar13);
    FUN_100082394(lVar5,lVar15,FUN_1002c76a8);
    FUN_10007f314(&stack0x00000050 + lVar2,auStack_88,&DAT_100a82c40,&DAT_100817200);
    FUN_1000d27dc(lVar15,FUN_1002c76a8);
    _os_unfair_lock_unlock(uVar13);
    if (lStack_70 == 0) {
      FUN_100040bb4(auStack_88,&DAT_100a82c40,&DAT_100817200);
    }
    else {
      FUN_10003f030(auStack_88,lStack_70);
      (**(code **)(lStack_68 + 0xf8))(unaff_x20,lStack_70,lStack_68);
      FUN_10003f094(auStack_88);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1002ca9e0);
  (*pcVar9)();
}

