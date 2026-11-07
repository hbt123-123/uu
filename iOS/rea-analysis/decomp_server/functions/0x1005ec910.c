// rea decompile_all
// name: FUN_1005ec910
// address: 0x1005ec910
// body: available
// range: 0x1005ec910-0x1005ed3cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005ecea0) */
/* WARNING: Removing unreachable block (ram,0x0001005ed2bc) */
/* WARNING: Removing unreachable block (ram,0x0001005ecf84) */
/* WARNING: Removing unreachable block (ram,0x0001005ed0c4) */
/* WARNING: Removing unreachable block (ram,0x0001005ed0c8) */
/* WARNING: Removing unreachable block (ram,0x0001005ed23c) */
/* WARNING: Removing unreachable block (ram,0x0001005ed2c0) */
/* WARNING: Removing unreachable block (ram,0x0001005ed138) */
/* WARNING: Removing unreachable block (ram,0x0001005ed13c) */
/* WARNING: Removing unreachable block (ram,0x0001005ecf0c) */
/* WARNING: Removing unreachable block (ram,0x0001005ed14c) */
/* WARNING: Removing unreachable block (ram,0x0001005ed150) */
/* WARNING: Removing unreachable block (ram,0x0001005ed1b8) */
/* WARNING: Removing unreachable block (ram,0x0001005ed1bc) */
/* WARNING: Removing unreachable block (ram,0x0001005ed1c8) */
/* WARNING: Removing unreachable block (ram,0x0001005ed1cc) */

undefined1  [16] FUN_1005ec910(undefined *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  code *pcVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long unaff_x21;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined1 auVar20 [16];
  long local_160;
  undefined *local_158;
  long local_150;
  long local_148;
  long local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  long local_120;
  undefined *local_118;
  long local_110;
  undefined *local_108;
  long local_100;
  undefined *local_f8;
  long local_f0;
  long local_e8;
  undefined *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  byte local_90;
  undefined7 uStack_8f;
  undefined *local_88;
  undefined *puStack_80;
  ulong local_78;
  ulong uStack_70;
  undefined1 local_51;
  
  puVar5 = &DAT_100aaec58;
  FUN_100004bb4(&DAT_100aaec58,&DAT_100844890);
  local_e8 = *(long *)(puVar5 + -8);
  local_e0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100aaec60;
  local_c0 = (long)&local_160 - extraout_x8;
  FUN_100004bb4(&DAT_100aaec60,&DAT_100844898);
  local_110 = *(long *)(puVar5 + -8);
  local_f8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = ((long)&local_160 - extraout_x8) - extraout_x8_00;
  puVar5 = &DAT_100aaec68;
  local_c8 = lVar11;
  FUN_100004bb4(&DAT_100aaec68,&DAT_1008448a0);
  local_f0 = *(long *)(puVar5 + -8);
  local_108 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_01;
  puVar5 = &DAT_100aaec70;
  local_a8 = lVar11;
  FUN_100004bb4(&DAT_100aaec70,&DAT_1008448a8);
  local_100 = *(long *)(puVar5 + -8);
  local_118 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = lVar11 - extraout_x8_02;
  puVar5 = &DAT_100aaec78;
  local_b0 = lVar11;
  FUN_100004bb4(&DAT_100aaec78,&DAT_1008448b0);
  local_120 = *(long *)(puVar5 + -8);
  local_128 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_120 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = lVar11 - extraout_x8_03;
  puVar5 = &DAT_100aaec80;
  local_d0 = lVar11;
  FUN_100004bb4(&DAT_100aaec80,&DAT_1008448b8);
  local_148 = *(long *)(puVar5 + -8);
  local_138 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_148 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = lVar11 - extraout_x8_04;
  puVar5 = &DAT_100aaec88;
  local_d8 = lVar11;
  FUN_100004bb4(&DAT_100aaec88,&DAT_1008448c0);
  local_140 = *(long *)(puVar5 + -8);
  local_130 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_140 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = lVar11 - extraout_x8_05;
  puVar5 = &DAT_100aaec90;
  local_b8 = lVar11;
  FUN_100004bb4(&DAT_100aaec90,&DAT_1008448c8);
  lVar18 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_06;
  puVar6 = &DAT_100aaec98;
  FUN_100004bb4(&DAT_100aaec98,&DAT_1008448d0);
  puVar14 = *(undefined **)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(puVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar19 = (undefined *)(lVar11 - extraout_x8_07);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar16 = param_1;
  FUN_10003f030(param_1,uVar7);
  puVar15 = puVar16;
  FUN_1005ec3f8();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (puVar19,&DAT_1009da550,&DAT_1009da550,puVar15,uVar7,uVar2);
  lVar4 = local_a8;
  lVar13 = local_b0;
  lVar17 = local_b8;
  puVar15 = puVar14;
  if (unaff_x21 == 0) {
    puVar15 = puVar6;
    local_160 = lVar18;
    local_158 = puVar5;
    local_150 = lVar11;
    __ss22KeyedDecodingContainerV7allKeysSayxGvg();
    puStack_80 = puVar15 + 0x20;
    uStack_70 = *(long *)(puVar15 + 0x10) << 1 | 1;
    local_78 = 0;
    local_88 = puVar15;
    FUN_1005fc834();
    if ((((uint)puVar15 & 0xff) != 8) && (local_78 == uStack_70 >> 1)) {
      uVar1 = (uint)puVar15 & 0xff;
      local_90 = (byte)puVar15;
      if (uVar1 < 4) {
        if (uVar1 == 1 || ((ulong)puVar15 & 0xff) == 0) {
          if (((ulong)puVar15 & 0xff) == 0) {
            local_90 = 0;
            FUN_1005ec638();
            lVar17 = local_150;
            puVar16 = &DAT_1009da5e0;
            __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                      (local_150,&DAT_1009da5e0,&local_90,puVar6,&DAT_1009da5e0,puVar15);
            puVar5 = local_158;
            __ss22KeyedDecodingContainerV6decode_6forKeys6UInt32VAFm_xtKF();
            (**(code **)(local_160 + 8))(lVar17,puVar5);
            (**(code **)(puVar14 + 8))(puVar19,puVar6);
            _swift_unknownObjectRelease(local_88);
            goto LAB_1005ed344;
          }
          local_90 = 1;
          FUN_1005ec5f8();
          __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                    (lVar17,&DAT_1009da670,&local_90,puVar6,&DAT_1009da670,puVar15);
          uVar7 = 0;
          FUN_1005faacc(0);
          FUN_100005c90(&DAT_100aaecb8,FUN_1005faacc,&TargetProtocolConformanceDescriptor_100845648)
          ;
          puVar5 = local_130;
          __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF(&local_90,uVar7);
          (**(code **)(local_140 + 8))(lVar17,puVar5);
          (**(code **)(puVar14 + 8))(puVar19,puVar6);
          _swift_unknownObjectRelease(local_88);
          puVar15 = (undefined *)0x0;
          puVar16 = (undefined *)CONCAT71(uStack_8f,local_90);
        }
        else {
          if (uVar1 == 2) {
            FUN_1005ec5b8();
            lVar17 = local_d8;
            puVar16 = &DAT_1009da700;
            __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                      (local_d8,&DAT_1009da700,&local_90,puVar6,&DAT_1009da700,puVar15);
            puVar5 = local_138;
            __ss22KeyedDecodingContainerV6decode_6forKeys6UInt32VAFm_xtKF();
            (**(code **)(local_148 + 8))(lVar17,puVar5);
            pcVar12 = *(code **)(puVar14 + 8);
            goto LAB_1005ed334;
          }
          local_90 = 3;
          FUN_1005ec578();
          lVar17 = local_d0;
          puVar16 = &DAT_1009da790;
          __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                    (local_d0,&DAT_1009da790,&local_90,puVar6,&DAT_1009da790,puVar15);
          puVar5 = local_128;
          puVar15 = local_128;
          __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
          (**(code **)(local_120 + 8))(lVar17,puVar5);
          (**(code **)(puVar14 + 8))(puVar19,puVar6);
          _swift_unknownObjectRelease(local_88);
        }
      }
      else if (uVar1 < 6) {
        if (uVar1 == 4) {
          FUN_1005ec538();
          __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                    (lVar13,&DAT_1009da820,&local_90,puVar6,&DAT_1009da820,puVar15);
          puVar16 = local_118;
          local_90 = 0;
          pbVar9 = &local_90;
          __ss22KeyedDecodingContainerV6decode_6forKeys6UInt32VAFm_xtKF(pbVar9,local_118);
          uVar7 = 0;
          FUN_1005fac18(0);
          local_51 = 1;
          puVar5 = &DAT_100aaecb0;
          FUN_100005c90(&DAT_100aaecb0,FUN_1005fac18,&TargetProtocolConformanceDescriptor_100845698)
          ;
          __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
                    (&local_90,uVar7,&local_51,puVar16,uVar7,puVar5);
          (**(code **)(local_100 + 8))(lVar13,puVar16);
          (**(code **)(puVar14 + 8))(puVar19,puVar6);
          _swift_unknownObjectRelease(local_88);
          puVar15 = (undefined *)CONCAT71(uStack_8f,local_90);
          puVar16 = (undefined *)((ulong)pbVar9 & 0xffffffff);
        }
        else {
          local_90 = 5;
          FUN_1005ec4b8();
          __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                    (lVar4,&DAT_1009da8b0,&local_90,puVar6,&DAT_1009da8b0,puVar15);
          puVar5 = local_108;
          local_90 = 0;
          pbVar8 = &local_90;
          __ss22KeyedDecodingContainerV6decode_6forKeys6UInt32VAFm_xtKF(pbVar8,local_108);
          local_51 = 1;
          pbVar9 = pbVar8;
          FUN_1005f0d84();
          __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
                    (&local_90,&DAT_1009dc600,&local_51,puVar5,&DAT_1009dc600,pbVar9);
          (**(code **)(local_f0 + 8))(lVar4,puVar5);
          (**(code **)(puVar14 + 8))(puVar19,puVar6);
          _swift_unknownObjectRelease(local_88);
          puVar15 = (undefined *)0x0;
          puVar16 = (undefined *)((ulong)pbVar8 & 0xffffffff | (ulong)local_90 << 0x20);
        }
      }
      else {
        if (uVar1 == 6) {
          FUN_1005ec478();
          lVar17 = local_c8;
          puVar16 = &DAT_1009da940;
          __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                    (local_c8,&DAT_1009da940,&local_90,puVar6,&DAT_1009da940,puVar15);
          puVar5 = local_f8;
          __ss22KeyedDecodingContainerV6decode_6forKeys6UInt32VAFm_xtKF();
          lVar13 = local_110;
        }
        else {
          local_90 = 7;
          FUN_1005ec438();
          lVar17 = local_c0;
          puVar16 = &DAT_1009da9d0;
          __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                    (local_c0,&DAT_1009da9d0,&local_90,puVar6,&DAT_1009da9d0,puVar15);
          puVar5 = local_e0;
          __ss22KeyedDecodingContainerV6decode_6forKeys6UInt32VAFm_xtKF();
          lVar13 = local_e8;
        }
        (**(code **)(lVar13 + 8))(lVar17,puVar5);
        pcVar12 = *(code **)(puVar14 + 8);
LAB_1005ed334:
        (*pcVar12)(puVar19,puVar6);
        _swift_unknownObjectRelease(local_88);
LAB_1005ed344:
        puVar15 = (undefined *)0x0;
        puVar16 = (undefined *)((ulong)puVar16 & 0xffffffff);
      }
      FUN_10003f094(param_1);
      goto LAB_1005ece00;
    }
    puVar15 = (undefined *)0x0;
    __ss13DecodingErrorOMa();
    puVar10 = (undefined8 *)PTR___ss13DecodingErrorOs0B0sWP_100995b18;
    _swift_allocError();
    puVar5 = &DAT_100aaeca0;
    FUN_100004bb4(&DAT_100aaeca0,&DAT_100844fc0);
    iVar3 = *(int *)(puVar5 + 0x30);
    *puVar10 = &DAT_1009da4c0;
    __ss22KeyedDecodingContainerV10codingPathSays9CodingKey_pGvg(puVar6);
    __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              ((long)puVar10 + (long)iVar3);
    (**(code **)(*(long *)(puVar15 + -8) + 0x68))
              (puVar10,*(undefined4 *)
                        PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_100995b00,
               puVar15);
    _swift_willThrow();
    (**(code **)(puVar14 + 8))(puVar19,puVar6);
    _swift_unknownObjectRelease(local_88);
    puVar16 = puVar19;
  }
  FUN_10003f094(param_1);
LAB_1005ece00:
  auVar20._8_8_ = puVar15;
  auVar20._0_8_ = puVar16;
  return auVar20;
}

