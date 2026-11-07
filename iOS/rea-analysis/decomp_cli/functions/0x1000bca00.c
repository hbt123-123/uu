// rea decompile_all
// name: FUN_1000bca00
// address: 0x1000bca00
// body: available
// range: 0x1000bca00-0x1000bd2cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000bcde0) */
/* WARNING: Removing unreachable block (ram,0x0001000bcea4) */
/* WARNING: Removing unreachable block (ram,0x0001000bcea8) */

undefined * FUN_1000bca00(undefined *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  code *pcVar13;
  undefined *puVar14;
  long unaff_x21;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long local_130;
  undefined *local_128;
  long local_120;
  undefined *local_118;
  undefined *local_110;
  long local_108;
  undefined *puStack_100;
  long local_f8;
  undefined *local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  byte local_58;
  undefined7 uStack_57;
  
  puVar8 = &DAT_100105300;
  FUN_10000eb08(&DAT_100105300,&DAT_1000d8290);
  local_e8 = *(long *)(puVar8 + -8);
  lVar12 = (long)&local_130 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_100105308;
  local_b0 = puVar8;
  local_a0 = lVar12;
  FUN_10000eb08(&DAT_100105308,&DAT_1000d8298);
  local_c0 = *(long *)(puVar9 + -8);
  lVar12 = lVar12 - (*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100105310;
  puStack_b8 = puVar9;
  local_80 = lVar12;
  FUN_10000eb08(&DAT_100105310,&DAT_1000d82a0);
  local_e0 = *(long *)(puVar8 + -8);
  lVar12 = lVar12 - (*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_100105318;
  local_d0 = puVar8;
  local_88 = lVar12;
  FUN_10000eb08(&DAT_100105318,&DAT_1000d82a8);
  local_d8 = *(long *)(puVar9 + -8);
  lVar12 = lVar12 - (*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100105320;
  local_c8 = puVar9;
  local_90 = lVar12;
  FUN_10000eb08(&DAT_100105320,&DAT_1000d82b0);
  local_108 = *(long *)(puVar8 + -8);
  lVar12 = lVar12 - (*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_100105328;
  puStack_100 = puVar8;
  local_a8 = lVar12;
  FUN_10000eb08(&DAT_100105328,&DAT_1000d82b8);
  local_f8 = *(long *)(puVar9 + -8);
  lVar12 = lVar12 - (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100105330;
  local_f0 = puVar9;
  local_98 = lVar12;
  FUN_10000eb08(&DAT_100105330,&DAT_1000d82c0);
  lVar17 = *(long *)(puVar8 + -8);
  lVar12 = lVar12 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_100105338;
  FUN_10000eb08(&DAT_100105338,&DAT_1000d82c8);
  lVar15 = *(long *)(puVar9 + -8);
  puVar16 = (undefined *)(lVar12 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_78 = param_1;
  FUN_10000eba0(param_1,uVar1);
  puVar14 = param_1;
  FUN_1000bc5a8();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (puVar16,&DAT_1000fbcc0,&DAT_1000fbcc0,puVar14,uVar1,uVar2);
  lVar7 = local_80;
  lVar6 = local_88;
  lVar5 = local_90;
  lVar10 = local_98;
  if (unaff_x21 != 0) goto LAB_1000bd0ec;
  local_130 = lVar17;
  local_128 = puVar8;
  local_120 = unaff_x21;
  local_118 = puVar9;
  local_110 = puVar16;
  __ss22KeyedDecodingContainerV7allKeysSayxGvg();
  puVar8 = local_118;
  if ((*(long *)(puVar9 + 0x10) == 0) ||
     (bVar3 = puVar9[0x20], *(long *)(puVar9 + 0x10) != 1 || bVar3 == 7)) {
    lVar10 = 0;
    __ss13DecodingErrorOMa();
    puVar11 = (undefined8 *)PTR___ss13DecodingErrorOs0B0sWP_1000f04d0;
    _swift_allocError();
    puVar14 = &DAT_100105340;
    FUN_10000eb08(&DAT_100105340,&DAT_1000d82d0);
    param_1 = local_110;
    puVar8 = local_118;
    iVar4 = *(int *)(puVar14 + 0x30);
    *puVar11 = &DAT_1000fbba0;
    __ss22KeyedDecodingContainerV10codingPathSays9CodingKey_pGvg(local_118);
    __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              ((long)puVar11 + (long)iVar4);
    (**(code **)(*(long *)(lVar10 + -8) + 0x68))
              (puVar11,*(undefined4 *)
                        PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_1000f04c0,
               lVar10);
    _swift_willThrow();
    pcVar13 = *(code **)(lVar15 + 8);
LAB_1000bcd54:
    (*pcVar13)(param_1,puVar8);
  }
  else {
    local_58 = bVar3;
    if (bVar3 < 3) {
      if (bVar3 == 0) {
        local_58 = 0;
        puVar14 = puVar9;
        FUN_1000bc768();
        param_1 = local_110;
        puVar8 = local_118;
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar12,&DAT_1000fbd50,&local_58,local_118,&DAT_1000fbd50,puVar14);
        if (local_120 == 0) {
          puVar14 = &DAT_100105198;
          FUN_10000eb08(&DAT_100105198,&BYTE_1000d6e48);
          FUN_1000c02c8(&DAT_1001052e8,PTR___sSSSesWP_1000f0318,PTR___sSayxGSesSeRzlMc_1000f0388);
          puVar16 = local_128;
          __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF(&local_58,puVar14);
          (**(code **)(local_130 + 8))(lVar12,puVar16);
          (**(code **)(lVar15 + 8))(param_1,puVar8);
          _swift_unknownObjectRelease(puVar9);
          puVar14 = (undefined *)CONCAT71(uStack_57,local_58);
          goto LAB_1000bd244;
        }
        pcVar13 = *(code **)(lVar15 + 8);
        goto LAB_1000bcd54;
      }
      if (bVar3 != 1) {
        local_58 = 2;
        puVar14 = puVar9;
        FUN_1000bc6e8();
        lVar10 = local_a8;
        param_1 = local_110;
        puVar8 = local_118;
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (local_a8,&DAT_1000fbe00,&local_58,local_118,&DAT_1000fbe00,puVar14);
        if (local_120 == 0) {
          (**(code **)(local_108 + 8))(lVar10,puStack_100);
          (**(code **)(lVar15 + 8))(param_1,puVar8);
          _swift_unknownObjectRelease(puVar9);
          puVar14 = (undefined *)0x0;
LAB_1000bd244:
          FUN_100001428(local_78);
          return puVar14;
        }
        goto LAB_1000bd078;
      }
      puVar14 = puVar9;
      FUN_1000bc728();
      param_1 = local_110;
      puVar8 = local_118;
      __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                (lVar10,&DAT_1000fbde0,&local_58,local_118,&DAT_1000fbde0,puVar14);
      if (local_120 == 0) {
        puVar14 = &DAT_100105198;
        FUN_10000eb08(&DAT_100105198,&BYTE_1000d6e48);
        FUN_1000c02c8(&DAT_1001052e8,PTR___sSSSesWP_1000f0318,PTR___sSayxGSesSeRzlMc_1000f0388);
        puVar16 = local_f0;
        __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF(&local_58,puVar14);
        (**(code **)(local_f8 + 8))(lVar10,puVar16);
        (**(code **)(lVar15 + 8))(param_1,puVar8);
        _swift_unknownObjectRelease(puVar9);
        puVar14 = (undefined *)CONCAT71(uStack_57,local_58);
        goto LAB_1000bd244;
      }
LAB_1000bceb8:
      pcVar13 = *(code **)(lVar15 + 8);
    }
    else if (bVar3 < 5) {
      if (bVar3 == 3) {
        puVar16 = puVar9;
        FUN_1000bc6a8();
        param_1 = local_110;
        puVar14 = &DAT_1000fbe90;
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar5,&DAT_1000fbe90,&local_58,puVar8,&DAT_1000fbe90,puVar16);
        puVar16 = local_c8;
        if (local_120 == 0) {
          __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
          (**(code **)(local_d8 + 8))(lVar5,puVar16);
          (**(code **)(lVar15 + 8))(param_1,puVar8);
          _swift_unknownObjectRelease(puVar9);
          goto LAB_1000bd244;
        }
        goto LAB_1000bceb8;
      }
      local_58 = 4;
      puVar14 = puVar9;
      FUN_1000bc668();
      param_1 = local_110;
      __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                (lVar6,&DAT_1000fbeb0,&local_58,puVar8,&DAT_1000fbeb0,puVar14);
      if (local_120 == 0) {
        (**(code **)(local_e0 + 8))(lVar6,local_d0);
        (**(code **)(lVar15 + 8))(param_1,puVar8);
        _swift_unknownObjectRelease(puVar9);
        puVar14 = (undefined *)0x1;
        goto LAB_1000bd244;
      }
LAB_1000bd078:
      pcVar13 = *(code **)(lVar15 + 8);
    }
    else {
      if (bVar3 == 5) {
        puVar14 = puVar9;
        FUN_1000bc628();
        param_1 = local_110;
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar7,&DAT_1000fbed0,&local_58,puVar8,&DAT_1000fbed0,puVar14);
        if (local_120 == 0) {
          (**(code **)(local_c0 + 8))(lVar7,puStack_b8);
          (**(code **)(lVar15 + 8))(param_1,puVar8);
          _swift_unknownObjectRelease(puVar9);
          puVar14 = (undefined *)0x2;
          goto LAB_1000bd244;
        }
      }
      else {
        local_58 = 6;
        puVar14 = puVar9;
        FUN_1000bc5e8();
        lVar10 = local_a0;
        param_1 = local_110;
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (local_a0,&DAT_1000fbef0,&local_58,puVar8,&DAT_1000fbef0,puVar14);
        if (local_120 == 0) {
          (**(code **)(local_e8 + 8))(lVar10,local_b0);
          (**(code **)(lVar15 + 8))(param_1,puVar8);
          _swift_unknownObjectRelease(puVar9);
          puVar14 = (undefined *)0x3;
          goto LAB_1000bd244;
        }
      }
      pcVar13 = *(code **)(lVar15 + 8);
    }
    (*pcVar13)(param_1,puVar8);
  }
  _swift_unknownObjectRelease(puVar9);
LAB_1000bd0ec:
  FUN_100001428(local_78);
  return param_1;
}

