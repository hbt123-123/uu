// rea decompile_all
// name: FUN_1002e2188
// address: 0x1002e2188
// body: available
// range: 0x1002e2188-0x1002e249b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e2188(long *param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  char *pcVar11;
  ulong *puVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  undefined1 auStack_a0 [24];
  long *local_88;
  ulong *puStack_80;
  ulong local_78;
  long lStack_70;
  ulong local_68;
  
  puVar5 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  plVar10 = (long *)((long)&local_c0 -
                    (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0;
  local_b8 = plVar10;
  FUN_1002c76a8();
  pcVar11 = (char *)((long)plVar10 -
                    (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)*(byte *)(param_1 + 4) & 0x3f);
    puVar12 = (ulong *)(param_1 + 7);
    uVar9 = ~uVar13;
    uVar13 = -uVar13;
    uVar15 = 0xffffffffffffffff;
    if ((long)uVar13 < 0x40) {
      uVar15 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar15 = uVar15 & *puVar12;
    plVar10 = param_1;
    _swift_bridgeObjectRetain();
    lStack_70 = 0;
  }
  else {
    plVar10 = (long *)((ulong)param_1 & 0xffffffffffffff8);
    if ((long)param_1 < 0) {
      plVar10 = param_1;
    }
    _swift_bridgeObjectRetain(param_1);
    __ss10__CocoaSetV12makeIteratorAB0D0CyF();
    uVar7 = 0;
    FUN_1002d4054(0);
    puVar5 = &DAT_100a84688;
    FUN_100005c90(&DAT_100a84688,FUN_1002d4054,0x1008189b8);
    __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC(&local_88,plVar10,uVar7,puVar5);
    uVar9 = local_78;
    param_1 = local_88;
    puVar12 = puStack_80;
    uVar15 = local_68;
  }
  lVar6 = lStack_70;
  local_c0 = uVar9;
  do {
    lVar8 = lVar6;
    uVar13 = uVar15;
    if ((long)param_1 < 0) {
      __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
      if (plVar10 == (long *)0x0) {
LAB_1002e2460:
        FUN_10003f638(param_1,puVar12,local_c0,lVar6,uVar15);
        return;
      }
      uVar7 = 0;
      local_b0 = plVar10;
      FUN_1002d4054(0);
      _swift_dynamicCast(&local_a8,&local_b0,PTR___syXlN_100995e80 + 8,uVar7,7);
      plVar10 = local_a8;
    }
    else {
      while (uVar13 == 0) {
        lVar1 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002e249c);
          (*pcVar4)();
        }
        if ((long)(uVar9 + 0x40 >> 6) <= lVar1) {
          uVar15 = 0;
          goto LAB_1002e2460;
        }
        lVar8 = lVar1;
        uVar13 = puVar12[lVar1];
      }
      uVar3 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      plVar10 = *(long **)(param_1[6] + (lVar8 << 9 | LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) << 3));
      _swift_retain(plVar10);
    }
    if (plVar10 == (long *)0x0) goto LAB_1002e2460;
    plVar14 = *(long **)((long)plVar10 + _TtC9Alamofire7Request::mutableState);
    uVar7 = *(undefined8 *)(plVar14[2] + 0x10);
    _os_unfair_lock_lock(uVar7);
    lVar6 = *(long *)(*plVar14 + 0x60);
    _swift_beginAccess((long)plVar14 + lVar6,auStack_a0,0,0);
    FUN_100082394((long)plVar14 + lVar6,pcVar11,FUN_1002c76a8);
    cVar2 = *pcVar11;
    FUN_1000d27dc(pcVar11,FUN_1002c76a8);
    _os_unfair_lock_unlock(uVar7);
    lVar6 = lVar8;
    uVar15 = uVar13;
    if (cVar2 == '\x04') {
      _swift_release();
    }
    else {
      lVar8 = 0;
      FUN_100277ad0();
      plVar14 = local_b8;
      _swift_storeEnumTagMultiPayload(local_b8,lVar8,0x10);
      (**(code **)(*(long *)(lVar8 + -8) + 0x38))(plVar14,0,1,lVar8);
      (**(code **)(*plVar10 + 0x290))(plVar14);
      _swift_release(plVar10);
      FUN_100040bb4(plVar14,&DAT_100a82460,&DAT_1008175c0);
      plVar10 = plVar14;
    }
  } while( true );
}

