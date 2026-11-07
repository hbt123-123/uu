// rea decompile_all
// name: FUN_1004f6144
// address: 0x1004f6144
// body: available
// range: 0x1004f6144-0x1004f664b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004f6648 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004f65e8) */
/* WARNING: Removing unreachable block (ram,0x0001004f638c) */
/* WARNING: Removing unreachable block (ram,0x0001004f6558) */
/* WARNING: Removing unreachable block (ram,0x0001004f656c) */
/* WARNING: Removing unreachable block (ram,0x0001004f61f8) */
/* WARNING: Removing unreachable block (ram,0x0001004f64f8) */
/* WARNING: Removing unreachable block (ram,0x0001004f6570) */
/* WARNING: Removing unreachable block (ram,0x0001004f6574) */

void FUN_1004f6144(void)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  TargetProtocolDescriptor *pTVar10;
  undefined8 *puVar11;
  uint uVar12;
  long unaff_x20;
  long *plVar13;
  long lVar14;
  undefined1 auStack_160 [40];
  long local_138;
  TargetProtocolDescriptor *local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined1 local_11e;
  undefined1 local_11d;
  undefined1 local_11c;
  undefined1 local_11b;
  undefined2 uStack_11a;
  undefined *local_110;
  undefined **local_108;
  long local_100;
  undefined8 uStack_f8;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  char local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  _swift_beginAccess(unaff_x20 + 0x20,auStack_b8,0,0);
  FUN_1004f75cc(unaff_x20 + 0x20,&local_a0);
  if (local_78 != '\0') {
    if (local_78 == '\x01') {
      FUN_1000a0074(&local_a0,&local_100);
      puVar9 = puStack_e0;
      puVar4 = local_e8;
      plVar8 = &local_100;
      FUN_10003f030(plVar8,local_e8);
      FUN_100537580(&local_128,1,0,puVar4,PTR___s10Foundation4DataVN_1009961e8,puVar9,
                    &PTR_PTR_1009d16b0,plVar8);
    }
    else {
      _swift_beginAccess(unaff_x20 + 0x10,auStack_d0,0,0);
      puVar4 = *(undefined **)(unaff_x20 + 0x10);
      puVar9 = *(undefined **)(unaff_x20 + 0x18);
      _swift_bridgeObjectRetain(puVar9);
      puVar5 = puVar9;
      FUN_1005188b8();
      _swift_bridgeObjectRelease(puVar9);
      puVar9 = puVar5;
      FUN_100519568();
      _swift_bridgeObjectRelease(puVar5);
      if (puVar4 == (undefined *)0x0) {
        _swift_bridgeObjectRelease(local_a0);
        plVar8 = (long *)0x0;
        puVar11 = (undefined8 *)0xc000000000000000;
        goto LAB_1004f6604;
      }
      local_108 = &PTR_PTR_1009d1610;
      local_110 = &DAT_1009d1638;
      local_128._0_1_ = SUB81(PTR___swiftEmptyDictionarySingleton_100995ea8,0);
      local_128._1_1_ = (undefined1)((ulong)PTR___swiftEmptyDictionarySingleton_100995ea8 >> 8);
      local_128._2_1_ = (undefined1)((ulong)PTR___swiftEmptyDictionarySingleton_100995ea8 >> 0x10);
      local_128._3_1_ = (undefined1)((ulong)PTR___swiftEmptyDictionarySingleton_100995ea8 >> 0x18);
      local_128._4_1_ = (undefined1)((ulong)PTR___swiftEmptyDictionarySingleton_100995ea8 >> 0x20);
      local_128._5_1_ = (undefined1)((ulong)PTR___swiftEmptyDictionarySingleton_100995ea8 >> 0x28);
      local_128._6_1_ = (undefined1)((ulong)PTR___swiftEmptyDictionarySingleton_100995ea8 >> 0x30);
      local_128._7_1_ = (undefined1)((ulong)PTR___swiftEmptyDictionarySingleton_100995ea8 >> 0x38);
      pTVar10 = &TargetProtocolDescriptor_100900904;
      puVar5 = puVar4;
      _swift_conformsToProtocol();
      local_e8 = puVar4;
      puStack_e0 = puVar9;
      if (puVar5 == (undefined *)0x0) {
        lVar7 = local_a0;
        FUN_1004f589c();
        local_138 = lVar7;
        local_130 = pTVar10;
        FUN_1000b142c(&local_128,auStack_160);
        plVar8 = &local_100;
        FUN_1000efc08(plVar8);
        FUN_100008184(lVar7,pTVar10);
        FUN_1005386f8(plVar8,&local_138,auStack_160,uStack_98,local_90,puVar4,
                      PTR___s10Foundation4DataVN_1009961e8,puVar9,&PTR_PTR_1009d16b0);
        _swift_bridgeObjectRelease(local_a0);
        FUN_100006cdc(lVar7,pTVar10);
      }
      else {
        local_138 = 0;
        local_130 = (TargetProtocolDescriptor *)0xe000000000000000;
        FUN_1004f5a80(local_a0 + 0x20,local_a0 + 0x20 + *(long *)(local_a0 + 0x10),uStack_98,
                      local_90,&local_128,&local_138);
        pTVar10 = local_130;
        lVar7 = local_138;
        FUN_1000b142c(&local_128,auStack_160);
        plVar8 = &local_100;
        FUN_1000efc08(plVar8);
        _swift_bridgeObjectRetain(pTVar10);
        FUN_100538860(plVar8,lVar7,pTVar10,auStack_160,uStack_98,local_90,puVar4,puVar9);
        _swift_bridgeObjectRelease(pTVar10);
        _swift_bridgeObjectRelease(local_a0);
      }
      FUN_10003f094(&local_128);
      puVar9 = puStack_e0;
      puVar4 = local_e8;
      plVar8 = &local_100;
      FUN_10003f030(plVar8,local_e8);
      FUN_100537580(&local_128,1,0,puVar4,PTR___s10Foundation4DataVN_1009961e8,puVar9,
                    &PTR_PTR_1009d16b0,plVar8);
    }
    plVar8 = (long *)CONCAT17(local_128._7_1_,
                              CONCAT16(local_128._6_1_,
                                       CONCAT15(local_128._5_1_,
                                                CONCAT14(local_128._4_1_,
                                                         CONCAT13(local_128._3_1_,
                                                                  CONCAT12(local_128._2_1_,
                                                                           CONCAT11(local_128._1_1_,
                                                                                    (undefined1)
                                                                                    local_128)))))))
    ;
    puVar11 = (undefined8 *)
              CONCAT26(uStack_11a,
                       CONCAT15(local_11b,
                                CONCAT14(local_11c,
                                         CONCAT13(local_11d,
                                                  CONCAT12(local_11e,CONCAT11(local_11f,local_120)))
                                        )));
    FUN_10003f094(&local_100);
    goto LAB_1004f6604;
  }
  local_e8 = PTR___s10Foundation4DataVN_1009961e8;
  puStack_e0 = PTR___s10Foundation4DataVAA15ContiguousBytesAAWP_1009961d8;
  uStack_f8 = uStack_98;
  local_100 = local_a0;
  plVar8 = &local_100;
  FUN_10003f030();
  lVar7 = *plVar8;
  uVar1 = plVar8[1];
  uVar2 = (uint)(uVar1 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar12 == 0) {
      local_128._0_1_ = (undefined1)lVar7;
      local_128._1_1_ = (undefined1)((ulong)lVar7 >> 8);
      local_128._2_1_ = (undefined1)((ulong)lVar7 >> 0x10);
      local_128._3_1_ = (undefined1)((ulong)lVar7 >> 0x18);
      local_128._4_1_ = (undefined1)((ulong)lVar7 >> 0x20);
      local_128._5_1_ = (undefined1)((ulong)lVar7 >> 0x28);
      local_128._6_1_ = (undefined1)((ulong)lVar7 >> 0x30);
      local_128._7_1_ = (undefined1)((ulong)lVar7 >> 0x38);
      local_120 = (undefined1)uVar1;
      local_11f = (undefined1)(uVar1 >> 8);
      local_11e = (undefined1)(uVar1 >> 0x10);
      local_11d = (undefined1)(uVar1 >> 0x18);
      local_11c = (undefined1)(uVar1 >> 0x20);
      local_11b = (undefined1)(uVar1 >> 0x28);
      plVar8 = &local_128;
      puVar11 = (undefined8 *)((long)&local_128 + (uVar1 >> 0x30 & 0xff));
    }
    else {
      lVar14 = (long)(int)lVar7;
      plVar13 = (long *)((lVar7 >> 0x20) - lVar14);
      if (lVar7 >> 0x20 < lVar14) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1004f6640);
        (*pcVar3)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      plVar6 = plVar8;
      if (plVar8 != (long *)0x0) {
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar14,(long)plVar6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1004f6648);
          (*pcVar3)();
        }
        plVar8 = (long *)((lVar14 - (long)plVar6) + (long)plVar8);
      }
LAB_1004f6418:
      __s10Foundation13__DataStorageC7_lengthSivg();
      if ((long)plVar13 <= (long)plVar6) {
        plVar6 = plVar13;
      }
      puVar11 = (undefined8 *)0x0;
      if (plVar8 != (long *)0x0) {
        puVar11 = (undefined8 *)((long)plVar6 + (long)plVar8);
      }
    }
  }
  else {
    if (uVar12 == 2) {
      lVar14 = *(long *)(lVar7 + 0x10);
      lVar7 = *(long *)(lVar7 + 0x18);
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      plVar6 = plVar8;
      if (plVar8 != (long *)0x0) {
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar14,(long)plVar6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1004f6644);
          (*pcVar3)();
        }
        plVar8 = (long *)((lVar14 - (long)plVar6) + (long)plVar8);
      }
      plVar13 = (long *)(lVar7 - lVar14);
      if (SBORROW8(lVar7,lVar14)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1004f63d8);
        (*pcVar3)();
      }
      goto LAB_1004f6418;
    }
    local_120 = 0;
    local_11f = 0;
    local_11e = 0;
    local_11d = 0;
    local_11c = 0;
    local_11b = 0;
    local_128._0_1_ = 0;
    local_128._1_1_ = 0;
    local_128._2_1_ = 0;
    local_128._3_1_ = 0;
    local_128._4_1_ = 0;
    local_128._5_1_ = 0;
    local_128._6_1_ = 0;
    local_128._7_1_ = 0;
    plVar8 = &local_128;
    puVar11 = &local_128;
  }
  FUN_1001f8534(plVar8,puVar11);
  FUN_10003f094(&local_100);
LAB_1004f6604:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(plVar8,puVar11);
}

