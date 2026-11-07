// rea decompile_all
// name: FUN_10054d294
// address: 0x10054d294
// body: available
// range: 0x10054d294-0x10054d703 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10054d700 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10054d294(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_120 [16];
  long alStack_110 [4];
  ulong auStack_f0 [4];
  byte local_d0 [2];
  undefined4 uStack_ce;
  undefined2 uStack_ca;
  undefined6 uStack_c8;
  undefined2 uStack_c2;
  long local_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined6 local_90;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined6 uStack_88;
  undefined1 uStack_82;
  byte bStack_81;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_3,param_2,PTR___sSTTL_100995860,PTR___s8IteratorSTTl_100995710);
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,lVar4,PTR___sSiN_100995968,0,0);
  lVar16 = (long)auStack_f0 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = *(long *)(lVar4 + -8);
  lVar14 = lVar16 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar14 - (*(long *)(*(long *)(param_2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_2 + -8) + 0x10))(lVar12,param_1,param_2);
  puVar6 = &DAT_100aab9e0;
  FUN_100004bb4(&DAT_100aab9e0,&DAT_100838390);
  plVar7 = &local_c0;
  _swift_dynamicCast(plVar7,lVar12,param_2,puVar6,6);
  if (((ulong)plVar7 & 1) != 0) {
    FUN_1000a0074(&local_c0,&local_90);
    FUN_10003f030(&local_90,local_78);
    __s10Foundation15ContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
              (local_d0,FUN_100099f10,0,PTR___s10Foundation4DataV15_RepresentationON_1009961c0,
               local_78,uStack_70);
    uStack_b8 = CONCAT26(uStack_c2,uStack_c8);
    local_c0 = CONCAT26(uStack_ca,CONCAT42(uStack_ce,CONCAT11(local_d0[1],local_d0[0])));
    FUN_10003f094(&local_90);
    lVar8 = local_c0;
    uVar13 = uStack_b8;
    goto LAB_10054d694;
  }
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  FUN_10054d704(&local_c0);
  __sST32withContiguousStorageIfAvailableyqd__Sgqd__SRy7ElementQzGKXEKlFTj
            (&local_90,FUN_10054cc0c,0,PTR___s10Foundation4DataV15_RepresentationON_1009961c0,
             param_2,param_3);
  auStack_f0[1] = CONCAT17(uStack_89,CONCAT16(uStack_8a,local_90));
  auStack_f0[2] = CONCAT17(bStack_81,CONCAT16(uStack_82,uStack_88));
  lVar8 = auStack_f0[1];
  uVar13 = auStack_f0[2];
  if (bStack_81 >> 4 < 0xf) goto LAB_10054d694;
  lVar8 = param_2;
  uVar13 = param_3;
  __sST19underestimatedCountSivgTj();
  FUN_10009a308();
  local_c0 = lVar8;
  uStack_b8 = uVar13;
  *(long *)(lVar12 + -0x20) = param_2;
  *(ulong *)(lVar12 + -0x18) = param_3;
  *(undefined8 *)(lVar12 + -0x10) = param_1;
  __s10Foundation4DataV15_RepresentationO22withUnsafeMutableBytesyxxSwKXEKlF
            (lVar16,FUN_10054d74c,lVar12 + -0x30,lVar5);
  uVar13 = *(ulong *)(lVar16 + *(int *)(lVar5 + 0x30));
  (**(code **)(lVar15 + 0x20))(lVar14,lVar16,lVar4);
  uVar1 = (uint)(uStack_b8 >> 0x20);
  uVar9 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar9 == 0) {
      uVar11 = uStack_b8 >> 0x30 & 0xff;
    }
    else {
      iVar10 = (int)((ulong)local_c0 >> 0x20);
      if (SBORROW4(iVar10,(int)local_c0)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10054d700);
        (*pcVar3)();
      }
      uVar11 = (ulong)(iVar10 - (int)local_c0);
    }
    if (uVar13 == uVar11) goto LAB_10054d544;
LAB_10054d520:
    if (uVar9 == 2) {
      uVar11 = *(ulong *)(local_c0 + 0x18);
    }
    else if (uVar9 == 1) {
      uVar11 = local_c0 >> 0x20;
    }
    else {
      uVar11 = uStack_b8 >> 0x30 & 0xff;
    }
LAB_10054d66c:
    if ((long)uVar11 < (long)uVar13) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10054d6f8);
      (*pcVar3)();
    }
    __s10Foundation4DataV15_RepresentationO15replaceSubrange_4with5countySnySiG_SVSgSitF
              (uVar13,uVar11,0,0);
LAB_10054d684:
    (**(code **)(lVar15 + 8))(lVar14,lVar4);
    lVar8 = local_c0;
    uVar13 = uStack_b8;
  }
  else {
    if (uVar9 == 2) {
      if (SBORROW8(*(long *)(local_c0 + 0x18),*(long *)(local_c0 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10054d6fc);
        (*pcVar3)();
      }
      if (uVar13 != *(long *)(local_c0 + 0x18) - *(long *)(local_c0 + 0x10)) goto LAB_10054d520;
    }
    else if (uVar13 != 0) {
      uVar11 = 0;
      goto LAB_10054d66c;
    }
LAB_10054d544:
    _swift_getAssociatedConformanceWitness
              (param_3,param_2,lVar4,PTR___sSTTL_100995860,PTR___sST8IteratorST_StTn_100995858);
    local_90 = 0;
    uStack_8a = 0;
    uStack_89 = 0;
    uStack_88 = 0;
    uStack_82 = 0;
    __sSt4next7ElementQzSgyFTj(local_d0,lVar4,param_3);
    if (local_d0[1] != 1) {
      uVar13 = 0;
      do {
        *(byte *)((long)&local_90 + (uVar13 & 0xff)) = local_d0[0];
        uVar1 = ((uint)uVar13 & 0xff) + 1;
        uVar13 = (ulong)uVar1;
        if ((uVar1 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10054d6f4);
          (*pcVar3)();
        }
        if ((uVar1 & 0xff) == 0xe) {
          local_d0[0] = (byte)local_90;
          local_d0[1] = (byte)((uint6)local_90 >> 8);
          uStack_ce = (undefined4)((uint6)local_90 >> 0x10);
          uStack_ca = CONCAT11(uStack_89,uStack_8a);
          uStack_c8 = uStack_88;
          __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(local_d0,&uStack_c2);
          uVar13 = 0;
        }
        __sSt4next7ElementQzSgyFTj(local_d0,lVar4,param_3);
      } while ((local_d0[1] & 1) == 0);
      if ((uVar13 & 0xff) != 0) {
        local_d0[0] = (byte)local_90;
        local_d0[1] = (byte)((uint6)local_90 >> 8);
        uStack_ce = (undefined4)((uint6)local_90 >> 0x10);
        uStack_ca = CONCAT11(uStack_89,uStack_8a);
        uStack_c8 = uStack_88;
        __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF
                  (local_d0,local_d0 + (uVar13 & 0xff));
        FUN_100006cc8(auStack_f0[1],auStack_f0[2]);
        goto LAB_10054d684;
      }
    }
    (**(code **)(lVar15 + 8))(lVar14,lVar4);
    FUN_100006cc8(auStack_f0[1],auStack_f0[2]);
    lVar8 = local_c0;
    uVar13 = uStack_b8;
  }
LAB_10054d694:
  uStack_b8 = uVar13;
  local_c0 = lVar8;
  uVar13 = uStack_b8;
  lVar4 = local_c0;
  auVar2._8_8_ = uStack_b8;
  auVar2._0_8_ = local_c0;
  FUN_100008184(local_c0,uStack_b8);
  FUN_100006cdc(lVar4,uVar13);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

