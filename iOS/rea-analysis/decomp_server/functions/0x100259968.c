// rea decompile_all
// name: FUN_100259968
// address: 0x100259968
// body: available
// range: 0x100259968-0x100259f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100259b08) */
/* WARNING: Removing unreachable block (ram,0x000100259e94) */

void FUN_100259968(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  long unaff_x20;
  long lVar17;
  long unaff_x21;
  ulong uVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined *local_120;
  undefined8 local_118;
  undefined *local_110;
  ulong uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar6 = &DAT_100a80900;
  FUN_100004bb4(&DAT_100a80900,&DAT_100814af8);
  lVar20 = *(long *)(puVar6 + -8);
  puVar19 = &stack0xfffffffffffffea0 + -(*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar2);
  FUN_10025b078();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar19,&DAT_1009a85e0,&DAT_1009a85e0,param_1,uVar2,uVar8);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_80,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  local_e0 = (undefined *)((ulong)local_e0 & 0xffffffffffffff00);
  _swift_bridgeObjectRetain(uVar8);
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar2,uVar8,&local_e0,puVar6);
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRelease(uVar8);
    _swift_beginAccess(unaff_x20 + 0x20,auStack_98,0,0);
    puVar16 = *(undefined **)(unaff_x20 + 0x20);
    if (puVar16 == (undefined *)0x0) {
      _swift_beginAccess(unaff_x20 + 0x28,auStack_b0,0,0);
      lVar7 = *(long *)(unaff_x20 + 0x28);
      if (lVar7 != 0) {
        uVar14 = 1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
        uVar18 = 0xffffffffffffffff;
        if ((long)uVar14 < 0x40) {
          uVar18 = ~(-1L << (uVar14 & 0x3f));
        }
        uVar18 = uVar18 & *(ulong *)(lVar7 + 0x40);
        uVar14 = uVar14 + 0x3f >> 6;
        _swift_bridgeObjectRetain();
        lVar12 = 0;
        puVar16 = PTR___swiftEmptyDictionarySingleton_100995ea8;
        do {
          lVar17 = lVar12;
          if (uVar18 == 0) {
            uVar3 = uVar14;
            if ((long)uVar14 <= lVar12 + 1) {
              uVar3 = lVar12 + 1;
            }
            do {
              lVar17 = lVar12 + 1;
              if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100259f58);
                (*pcVar5)();
              }
              if ((long)uVar14 <= lVar17) {
                uVar18 = 0;
                uStack_f8 = 0;
                local_100 = 0;
                uStack_e8 = 0;
                local_f0 = 0;
                uStack_108 = 0;
                local_110 = (undefined *)0x0;
                lVar12 = uVar3 - 1;
                goto LAB_100259c70;
              }
              uVar18 = ((ulong *)(lVar7 + 0x40))[lVar17];
              lVar12 = lVar12 + 1;
            } while (uVar18 == 0);
          }
          uVar3 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
          uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
          uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          uVar18 = uVar18 - 1 & uVar18;
          uVar13 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar17 << 6;
          puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar13 * 0x10);
          local_110 = (undefined *)*puVar1;
          uVar3 = puVar1[1];
          uStack_108 = uVar3;
          FUN_10003e8bc(*(long *)(lVar7 + 0x38) + uVar13 * 0x20,&local_100);
          _swift_bridgeObjectRetain(uVar3);
          lVar12 = lVar17;
LAB_100259c70:
          uVar3 = uStack_108;
          puVar10 = local_110;
          uStack_d8 = uStack_108;
          local_e0 = local_110;
          uStack_c8 = uStack_f8;
          local_d0 = local_100;
          uStack_b8 = uStack_e8;
          local_c0 = local_f0;
          if (uStack_108 == 0) {
            _swift_release(lVar7);
            local_110 = (undefined *)CONCAT71(local_110._1_7_,1);
            puVar10 = &DAT_100a808f0;
            local_e0 = puVar16;
            FUN_100004bb4(&DAT_100a808f0,&DAT_100814af0);
            puVar11 = &DAT_100a808f8;
            FUN_10025b118(&DAT_100a808f8,PTR___sSSSEsWP_100995800,
                          PTR___sSDyxq_GSEsSERzSER_rlMc_100995780);
            __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
                      (&local_e0,&local_110,puVar6,puVar10,puVar11);
            _swift_bridgeObjectRelease(puVar16);
            break;
          }
          FUN_10007f3d4(&local_d0,&local_110);
          local_120 = (undefined *)0x0;
          local_118 = 0xe000000000000000;
          __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                    (&local_110,&local_120,PTR___sypN_100995e88 + 8,
                     PTR___ss26DefaultStringInterpolationVN_100995bf0,
                     PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
          uVar2 = local_118;
          puVar4 = local_120;
          puVar9 = puVar16;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar11 = puVar10;
          uVar13 = uVar3;
          local_120 = puVar16;
          FUN_1001a2c70();
          uVar15 = (ulong)~(uint)uVar13 & 1;
          lVar17 = *(long *)(puVar16 + 0x10) + uVar15;
          if (SCARRY8(*(long *)(puVar16 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100259f5c);
            (*pcVar5)();
          }
          if (*(long *)(puVar16 + 0x18) < lVar17) {
            FUN_10025aa6c(lVar17,puVar9);
            puVar11 = puVar10;
            uVar15 = uVar3;
            FUN_1001a2c70();
            if (((uint)uVar13 & 1) != ((uint)uVar15 & 1)) {
              __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                        (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100259f70);
              (*pcVar5)();
            }
joined_r0x000100259df8:
            if ((uVar13 & 1) != 0) goto LAB_100259bb0;
LAB_100259d80:
            puVar16 = local_120;
            *(ulong *)(local_120 + ((ulong)puVar11 >> 6) * 8 + 0x40) =
                 *(ulong *)(local_120 + ((ulong)puVar11 >> 6) * 8 + 0x40) |
                 1L << ((ulong)puVar11 & 0x3f);
            puVar1 = (undefined8 *)(*(long *)(local_120 + 0x30) + (long)puVar11 * 0x10);
            *puVar1 = puVar10;
            puVar1[1] = uVar3;
            puVar1 = (undefined8 *)(*(long *)(local_120 + 0x38) + (long)puVar11 * 0x10);
            *puVar1 = puVar4;
            puVar1[1] = uVar2;
            FUN_10003f094(&local_110);
            if (SCARRY8(*(long *)(puVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100259f60);
              (*pcVar5)();
            }
            *(long *)(puVar16 + 0x10) = *(long *)(puVar16 + 0x10) + 1;
          }
          else {
            if (((ulong)puVar9 & 1) == 0) {
              FUN_10025a67c();
              goto joined_r0x000100259df8;
            }
            if ((uVar13 & 1) == 0) goto LAB_100259d80;
LAB_100259bb0:
            _swift_bridgeObjectRelease(uVar3);
            puVar16 = local_120;
            puVar1 = (undefined8 *)(*(long *)(local_120 + 0x38) + (long)puVar11 * 0x10);
            uVar8 = puVar1[1];
            *puVar1 = puVar4;
            puVar1[1] = uVar2;
            _swift_bridgeObjectRelease(uVar8);
            FUN_10003f094(&local_110);
          }
        } while( true );
      }
    }
    else {
      local_110 = (undefined *)CONCAT71(local_110._1_7_,1);
      local_e0 = puVar16;
      _swift_bridgeObjectRetain(puVar16);
      puVar10 = &DAT_100a808f0;
      FUN_100004bb4(&DAT_100a808f0,&DAT_100814af0);
      puVar11 = &DAT_100a808f8;
      FUN_10025b118(&DAT_100a808f8,PTR___sSSSEsWP_100995800,PTR___sSDyxq_GSEsSERzSER_rlMc_100995780)
      ;
      __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
                (&local_e0,&local_110,puVar6,puVar10,puVar11);
      _swift_bridgeObjectRelease(puVar16);
    }
    lVar7 = unaff_x20 + 0x30;
    _swift_beginAccess(lVar7,&local_110,0,0);
    local_d0 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x38);
    local_e0 = *(undefined **)(unaff_x20 + 0x30);
    local_120 = (undefined *)CONCAT71(local_120._1_7_,2);
    FUN_10025b0b8();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_e0,&local_120,puVar6,&DAT_1009a8540,lVar7);
    (**(code **)(lVar20 + 8))(puVar19,puVar6);
  }
  else {
    (**(code **)(lVar20 + 8))(puVar19,puVar6);
    _swift_bridgeObjectRelease(uVar8);
  }
  return;
}

