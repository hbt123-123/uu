// rea decompile_all
// name: FUN_100233474
// address: 0x100233474
// body: available
// range: 0x100233474-0x100233c5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100233474(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long extraout_x8;
  ulong uVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar13;
  undefined *puVar14;
  long unaff_x21;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  code *pcVar21;
  undefined1 auStack_220 [8];
  long local_218;
  long local_210;
  undefined1 *local_208;
  undefined *local_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [96];
  ulong local_188;
  ulong uStack_180;
  undefined *local_178;
  undefined8 uStack_170;
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar14 = &DAT_100a7f020;
  FUN_100004bb4(&DAT_100a7f020,&DAT_100813c38);
  lVar10 = *(long *)(puVar14 + -8);
  local_200 = puVar14;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  local_208 = auStack_220 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = (long)(auStack_220 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_210 = lVar12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar20 = FCountEvent::infoModel;
  lVar12 = lVar12 - extraout_x12_00;
  lVar13 = *(long *)(unaff_x20 + FCountEvent::infoModel);
  puVar1 = (undefined8 *)(unaff_x20 + FCountEvent::name);
  _swift_beginAccess(puVar1,auStack_80,0,0);
  uVar18 = puVar1[1];
  uVar15 = *(undefined8 *)(lVar13 + 0x50);
  *(undefined8 *)(lVar13 + 0x48) = *puVar1;
  *(undefined8 *)(lVar13 + 0x50) = uVar18;
  _swift_retain(lVar13);
  _swift_bridgeObjectRetain(uVar18);
  _swift_release(lVar13);
  _swift_bridgeObjectRelease(uVar15);
  lVar16 = *(long *)(unaff_x20 + lVar20);
  _swift_beginAccess(&DAT_100b36348,auStack_98,0,0);
  lVar13 = DAT_100b36348;
  if (DAT_100b36348 == 0) {
    uVar18 = 0;
    uVar15 = 0xe000000000000000;
  }
  else {
    _swift_beginAccess(DAT_100b36348 + 0x10,auStack_b0,0,0);
    uVar18 = *(undefined8 *)(lVar13 + 0x10);
    uVar15 = *(undefined8 *)(lVar13 + 0x18);
    _swift_bridgeObjectRetain();
  }
  uVar19 = *(undefined8 *)(lVar16 + 0x18);
  *(undefined8 *)(lVar16 + 0x10) = uVar18;
  *(undefined8 *)(lVar16 + 0x18) = uVar15;
  _swift_retain(lVar16);
  _swift_release();
  _swift_bridgeObjectRelease(uVar19);
  lVar13 = DAT_100b36348;
  lVar16 = *(long *)(unaff_x20 + lVar20);
  if (DAT_100b36348 == 0) {
    uVar18 = 0;
    uVar15 = 0xe000000000000000;
  }
  else {
    _swift_beginAccess(DAT_100b36348 + 0x20,auStack_c8,0,0);
    uVar18 = *(undefined8 *)(lVar13 + 0x20);
    uVar15 = *(undefined8 *)(lVar13 + 0x28);
    _swift_bridgeObjectRetain();
  }
  uVar19 = *(undefined8 *)(lVar16 + 0x28);
  *(undefined8 *)(lVar16 + 0x20) = uVar18;
  *(undefined8 *)(lVar16 + 0x28) = uVar15;
  _swift_retain(lVar16);
  _swift_release();
  _swift_bridgeObjectRelease(uVar19);
  puVar14 = *(undefined **)(unaff_x20 + lVar20);
  _swift_retain(puVar14);
  FUN_100227aac(param_1);
  if (unaff_x21 == 0) {
    _swift_release(puVar14);
    if (DAT_100a7de18 != -1) {
      _swift_once(&DAT_100a7de18,FUN_100234ab4);
    }
    _swift_beginAccess(&DAT_100b36340,auStack_e0,0,0);
    lVar13 = DAT_100b36340;
    lVar20 = FCountAppConfig::globalExtraPrameters;
    _swift_beginAccess(DAT_100b36340 + FCountAppConfig::globalExtraPrameters,auStack_f8,0,0);
    lVar20 = *(long *)(lVar13 + lVar20);
    if (lVar20 != 0) {
      uVar18 = *(undefined8 *)(param_1 + 0x18);
      uVar15 = *(undefined8 *)(param_1 + 0x20);
      lVar13 = param_1;
      FUN_10003f030(param_1,uVar18);
      FUN_10022d870();
      _swift_bridgeObjectRetain(lVar20);
      __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
                (lVar12,&DAT_1009a6520,&DAT_1009a6520,lVar13,uVar18,uVar15);
      FUN_10022cb9c(lVar12,lVar20);
      _swift_bridgeObjectRelease(lVar20);
      (**(code **)(lVar10 + 8))(lVar12,local_200);
    }
    puVar1 = (undefined8 *)(DAT_100b36340 + FCountAppConfig::globalExtraPrametersProvider);
    _swift_beginAccess(puVar1,auStack_110,0,0);
    pcVar21 = (code *)*puVar1;
    if (pcVar21 != (code *)0x0) {
      lVar13 = puVar1[1];
      lVar20 = lVar13;
      _swift_retain();
      (*pcVar21)();
      FUN_10007ed2c(pcVar21,lVar13);
      if (lVar20 != 0) {
        uVar18 = *(undefined8 *)(param_1 + 0x18);
        uVar15 = *(undefined8 *)(param_1 + 0x20);
        lVar12 = param_1;
        FUN_10003f030(param_1,uVar18);
        FUN_10022d870();
        puVar14 = local_200;
        lVar13 = local_210;
        __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
                  (local_210,&DAT_1009a6520,&DAT_1009a6520,lVar12,uVar18,uVar15);
        FUN_10022cb9c(lVar13,lVar20);
        _swift_bridgeObjectRelease(lVar20);
        (**(code **)(lVar10 + 8))(lVar13,puVar14);
      }
    }
    lVar20 = FCountEvent::params;
    _swift_beginAccess(unaff_x20 + FCountEvent::params,auStack_128,0,0);
    lVar20 = *(long *)(unaff_x20 + lVar20);
    if (lVar20 != 0) {
      uVar18 = *(undefined8 *)(param_1 + 0x18);
      uVar15 = *(undefined8 *)(param_1 + 0x20);
      lVar13 = param_1;
      FUN_10003f030(param_1,uVar18);
      FUN_10022d870();
      _swift_bridgeObjectRetain(lVar20);
      puVar4 = local_208;
      __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
                (local_208,&DAT_1009a6520,&DAT_1009a6520,lVar13,uVar18,uVar15);
      FUN_10022cb9c(puVar4,lVar20);
      _swift_bridgeObjectRelease(lVar20);
      (**(code **)(lVar10 + 8))(puVar4,local_200);
    }
    puVar14 = &DAT_100a7e440;
    FUN_100004bb4(&DAT_100a7e440,&DAT_1008134a8);
    puVar6 = puVar14;
    _swift_initStackObject();
    uStack_1f8 = 2;
    local_200 = (undefined *)0x1;
    *(undefined8 *)(puVar6 + 0x18) = 2;
    *(undefined8 *)(puVar6 + 0x10) = 1;
    *(undefined8 *)(puVar6 + 0x20) = 0x5f6e6f6973736573;
    *(undefined8 *)(puVar6 + 0x28) = 0xea00000000006469;
    uVar18 = ((undefined8 *)(unaff_x20 + FCountEvent::session_id))[1];
    *(undefined8 *)(puVar6 + 0x30) = *(undefined8 *)(unaff_x20 + FCountEvent::session_id);
    *(undefined8 *)(puVar6 + 0x38) = uVar18;
    _swift_bridgeObjectRetain();
    puVar7 = puVar6;
    FUN_100234524(puVar6);
    _swift_setDeallocating(puVar6);
    FUN_100040bb4(puVar6 + 0x20,&DAT_100a7e448,&DAT_100813ee0);
    __sSDsSERzSER_rlE6encode2toys7Encoder_p_tKF
              (param_1,puVar7,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,PTR___sSSSEsWP_100995800,
               PTR___sSSSHsWP_100995808,PTR___sSSSEsWP_100995800);
    _swift_bridgeObjectRelease(puVar7);
    lVar20 = ((undefined8 *)(unaff_x20 + FCountEvent::uid))[1];
    if (lVar20 != 0) {
      uVar18 = *(undefined8 *)(unaff_x20 + FCountEvent::uid);
      _swift_initStackObject(puVar14,auStack_1e8);
      *(undefined8 *)(puVar14 + 0x18) = uStack_1f8;
      *(undefined **)(puVar14 + 0x10) = local_200;
      *(undefined8 *)(puVar14 + 0x20) = 0x646975;
      *(undefined8 *)(puVar14 + 0x28) = 0xe300000000000000;
      *(undefined8 *)(puVar14 + 0x30) = uVar18;
      *(long *)(puVar14 + 0x38) = lVar20;
      _swift_bridgeObjectRetain(lVar20);
      puVar6 = puVar14;
      FUN_100234524(puVar14);
      _swift_setDeallocating(puVar14);
      FUN_100040bb4(puVar14 + 0x20,&DAT_100a7e448,&DAT_100813ee0);
      __sSDsSERzSER_rlE6encode2toys7Encoder_p_tKF
                (param_1,puVar6,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,PTR___sSSSEsWP_100995800,
                 PTR___sSSSHsWP_100995808,PTR___sSSSEsWP_100995800);
      _swift_bridgeObjectRelease(puVar6);
    }
    lVar20 = 0;
    uVar11 = 1L << ((ulong)(byte)PTR___swiftEmptyDictionarySingleton_100995ea8[0x20] & 0x3f);
    uVar17 = 0xffffffffffffffff;
    if ((long)uVar11 < 0x40) {
      uVar17 = ~(-1L << (uVar11 & 0x3f));
    }
    uVar17 = uVar17 & *(ulong *)(PTR___swiftEmptyDictionarySingleton_100995ea8 + 0x40);
    local_208 = (undefined1 *)(uVar11 + 0x3f >> 6);
    local_218 = param_1;
    while( true ) {
      for (; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
        uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = lVar20 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4;
        puVar2 = (ulong *)(*(long *)(PTR___swiftEmptyDictionarySingleton_100995ea8 + 0x30) + uVar11)
        ;
        puVar1 = (undefined8 *)
                 (*(long *)(PTR___swiftEmptyDictionarySingleton_100995ea8 + 0x38) + uVar11);
        uVar11 = *puVar2;
        uVar3 = puVar2[1];
        local_200 = (undefined *)*puVar1;
        uVar18 = puVar1[1];
        local_188 = uVar11;
        uStack_180 = uVar3;
        local_178 = local_200;
        uStack_170 = uVar18;
        FUN_100004bb4(&DAT_100a7f1a0,&DAT_100813ca0);
        lVar13 = 1;
        __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
        _swift_bridgeObjectRetain_n(uVar3,2);
        _swift_bridgeObjectRetain_n(uVar18,2);
        _swift_retain(lVar13);
        FUN_100040bb4(&local_188,&DAT_100a7e448,&DAT_100813ee0);
        uVar8 = uVar11;
        uVar9 = uVar3;
        FUN_1001a2c70();
        _swift_release(lVar13);
        if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100233c58);
          (*pcVar21)();
        }
        lVar10 = lVar13 + (uVar8 >> 6) * 8;
        *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar8 * 0x10);
        *puVar2 = uVar11;
        puVar2[1] = uVar3;
        puVar1 = (undefined8 *)(*(long *)(lVar13 + 0x38) + uVar8 * 0x10);
        *puVar1 = local_200;
        puVar1[1] = uVar18;
        if (SCARRY8(*(long *)(lVar13 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100233c5c);
          (*pcVar21)();
        }
        *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
        __sSDsSERzSER_rlE6encode2toys7Encoder_p_tKF
                  (local_218,lVar13,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,
                   PTR___sSSSEsWP_100995800,PTR___sSSSHsWP_100995808,PTR___sSSSEsWP_100995800);
        _swift_release(lVar13);
      }
      bVar5 = SCARRY8(lVar20,1);
      lVar20 = lVar20 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x100233c3c);
        (*pcVar21)();
      }
      puVar14 = PTR___swiftEmptyDictionarySingleton_100995ea8;
      if ((long)local_208 <= lVar20) break;
      uVar17 = *(ulong *)(PTR___swiftEmptyDictionarySingleton_100995ea8 + lVar20 * 8 + 0x40);
    }
  }
  _swift_release(puVar14);
  return;
}

