// rea decompile_all
// name: FUN_1002eb0f0
// address: 0x1002eb0f0
// body: available
// range: 0x1002eb0f0-0x1002eb4af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002eb0f0(long param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long unaff_x20;
  long *plVar10;
  char *pcVar11;
  long *plVar12;
  char *pcVar13;
  ulong *puVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong local_e0;
  long *local_d8;
  long local_d0;
  long *local_c8;
  long *local_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  long *local_88;
  ulong *puStack_80;
  ulong local_78;
  long lStack_70;
  ulong local_68;
  
  puVar4 = &DAT_100a82460;
  local_d0 = param_1;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  plVar10 = (long *)((long)&local_e0 -
                    (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  local_d8 = plVar10;
  FUN_1002c76a8();
  pcVar11 = (char *)((long)plVar10 -
                    (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  __s8Dispatch0A9PredicateOMa();
  lVar8 = *(long *)(lVar5 + -8);
  pcVar13 = pcVar11 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)pcVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  (**(code **)(lVar8 + 0x68))
            (pcVar13,*(undefined4 *)
                      PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_100995f80
             ,lVar5);
  pcVar6 = pcVar13;
  __s8Dispatch25_dispatchPreconditionTestySbAA0A9PredicateOF();
  (**(code **)(lVar8 + 8))(pcVar13,lVar5);
  if (((ulong)pcVar6 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1002eb4b0);
    (*pcVar9)();
  }
  lVar5 = *(long *)(unaff_x20 + 0xd0);
  plVar10 = *(long **)(*(long *)(lVar5 + 0x10) + 0x10);
  _os_unfair_lock_lock(plVar10);
  _swift_beginAccess(lVar5 + 0x18,auStack_a0,0,0);
  plVar12 = *(long **)(lVar5 + 0x30);
  _swift_bridgeObjectRetain(plVar12);
  _os_unfair_lock_unlock();
  if (((ulong)plVar12 & 0xc000000000000001) == 0) {
    lStack_70 = 0;
    uVar17 = -1L << ((ulong)*(byte *)(plVar12 + 4) & 0x3f);
    puVar14 = (ulong *)(plVar12 + 7);
    local_78 = ~uVar17;
    uVar17 = -uVar17;
    local_68 = 0xffffffffffffffff;
    if ((long)uVar17 < 0x40) {
      local_68 = ~(-1L << (uVar17 & 0x3f));
    }
    local_68 = local_68 & *puVar14;
  }
  else {
    plVar10 = (long *)((ulong)plVar12 & 0xffffffffffffff8);
    if ((long)plVar12 < 0) {
      plVar10 = plVar12;
    }
    __ss10__CocoaSetV12makeIteratorAB0D0CyF();
    uVar7 = 0;
    FUN_1002d4054(0);
    puVar4 = &DAT_100a84688;
    FUN_100005c90(&DAT_100a84688,FUN_1002d4054,0x1008189b8);
    __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC(&local_88,plVar10,uVar7,puVar4);
    plVar12 = local_88;
    puVar14 = puStack_80;
  }
  lVar5 = lStack_70;
  uVar17 = local_68;
  local_e0 = local_78;
  do {
    lVar8 = lVar5;
    uVar15 = uVar17;
    if ((long)plVar12 < 0) {
      __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
      if (plVar10 == (long *)0x0) {
LAB_1002eb470:
        FUN_10003f638(plVar12,puVar14,local_e0,lVar5,uVar17);
        return;
      }
      uVar7 = 0;
      local_c8 = plVar10;
      FUN_1002d4054(0);
      _swift_dynamicCast(&local_c0,&local_c8,PTR___syXlN_100995e80 + 8,uVar7,7);
      plVar10 = local_c0;
    }
    else {
      while (uVar15 == 0) {
        lVar1 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1002eb4ac);
          (*pcVar9)();
        }
        if ((long)(local_78 + 0x40 >> 6) <= lVar1) {
          uVar17 = 0;
          goto LAB_1002eb470;
        }
        lVar8 = lVar1;
        uVar15 = puVar14[lVar1];
      }
      uVar3 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 - 1 & uVar15;
      plVar10 = *(long **)(plVar12[6] + (lVar8 << 9 | LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) << 3));
      _swift_retain(plVar10);
    }
    if (plVar10 == (long *)0x0) goto LAB_1002eb470;
    plVar16 = *(long **)((long)plVar10 + _TtC9Alamofire7Request::mutableState);
    uVar7 = *(undefined8 *)(plVar16[2] + 0x10);
    _os_unfair_lock_lock(uVar7);
    lVar5 = *(long *)(*plVar16 + 0x60);
    _swift_beginAccess((long)plVar16 + lVar5,auStack_b8,0,0);
    FUN_100082394((long)plVar16 + lVar5,pcVar11,FUN_1002c76a8);
    cVar2 = *pcVar11;
    FUN_1000d27dc(pcVar11,FUN_1002c76a8);
    _os_unfair_lock_unlock(uVar7);
    lVar1 = local_d0;
    plVar16 = local_d8;
    lVar5 = lVar8;
    uVar17 = uVar15;
    if (cVar2 == '\x04') {
      _swift_release();
    }
    else {
      *local_d8 = local_d0;
      lVar8 = 0;
      FUN_100277ad0();
      _swift_storeEnumTagMultiPayload(plVar16,lVar8,0xc);
      (**(code **)(*(long *)(lVar8 + -8) + 0x38))(plVar16,0,1,lVar8);
      pcVar9 = *(code **)(*plVar10 + 0x290);
      _swift_errorRetain(lVar1);
      (*pcVar9)(plVar16);
      _swift_release(plVar10);
      FUN_100040bb4(plVar16,&DAT_100a82460,&DAT_1008175c0);
      plVar10 = plVar16;
    }
  } while( true );
}

