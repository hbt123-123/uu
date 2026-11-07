// rea decompile_all
// name: FUN_1005e7a98
// address: 0x1005e7a98
// body: available
// range: 0x1005e7a98-0x1005e808b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005e8018) */
/* WARNING: Removing unreachable block (ram,0x0001005e7fd4) */
/* WARNING: Removing unreachable block (ram,0x0001005e7f8c) */

undefined * FUN_1005e7a98(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  long unaff_x21;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long local_120;
  undefined *local_118;
  long local_110;
  undefined *puStack_108;
  long local_100;
  long local_f8;
  undefined *puStack_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined1 local_51;
  
  puVar6 = &DAT_100aaee68;
  FUN_100004bb4(&DAT_100aaee68,&DAT_100844a00);
  local_e0 = *(long *)(puVar6 + -8);
  local_c8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100aaee70;
  local_c0 = (long)&local_120 - extraout_x8;
  FUN_100004bb4(&DAT_100aaee70,&DAT_100844a08);
  local_d8 = *(long *)(puVar6 + -8);
  puStack_d0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = ((long)&local_120 - extraout_x8) - extraout_x8_00;
  puVar6 = &DAT_100aaee78;
  local_a0 = lVar13;
  FUN_100004bb4(&DAT_100aaee78,&DAT_100844a10);
  local_100 = *(long *)(puVar6 + -8);
  local_e8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar13 = lVar13 - extraout_x8_01;
  puVar6 = &DAT_100aaee80;
  local_a8 = lVar13;
  FUN_100004bb4(&DAT_100aaee80,&DAT_100844a18);
  local_f8 = *(long *)(puVar6 + -8);
  puStack_f0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar13 - extraout_x8_02;
  puVar6 = &DAT_100aaee88;
  local_b0 = lVar13;
  FUN_100004bb4(&DAT_100aaee88,&DAT_100844a20);
  local_110 = *(long *)(puVar6 + -8);
  puStack_108 = puVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar13 = lVar13 - extraout_x8_03;
  puVar6 = &DAT_100aaee90;
  local_b8 = lVar13;
  FUN_100004bb4(&DAT_100aaee90,&DAT_100844a28);
  lVar18 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar13 - extraout_x8_04;
  puVar7 = &DAT_100aaee98;
  FUN_100004bb4(&DAT_100aaee98,&DAT_100844a30);
  puVar17 = *(undefined **)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(puVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar13 - extraout_x8_05;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar8 = param_1;
  FUN_10003f030(param_1,uVar2);
  FUN_1005e76dc();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar19,&DAT_1009dba40,&DAT_1009dba40,lVar8,uVar2,uVar3);
  lVar8 = local_a0;
  lVar5 = local_a8;
  lVar16 = local_b0;
  puVar11 = puVar17;
  if (unaff_x21 == 0) {
    puVar9 = puVar7;
    local_120 = lVar18;
    local_118 = puVar6;
    __ss22KeyedDecodingContainerV7allKeysSayxGvg();
    uVar15 = *(ulong *)(puVar9 + 0x10);
    puVar6 = puVar9;
    thunk_FUN_1005fc8d4();
    if ((((uint)puVar6 & 0xff) != 6) && ((uVar15 & 0x7fffffffffffffff) == 0)) {
      uVar1 = (uint)puVar6 & 0xff;
      local_51 = SUB81(puVar6,0);
      if (uVar1 < 3) {
        if (((ulong)puVar6 & 0xff) == 0) {
          local_51 = 0;
          puVar11 = puVar6;
          FUN_1005e785c();
          __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                    (lVar13,&DAT_1009dba60,&local_51,puVar7,&DAT_1009dba60,puVar11);
          (**(code **)(local_120 + 8))(lVar13,local_118);
          pcVar14 = *(code **)(puVar17 + 8);
        }
        else {
          if (uVar1 == 1) {
            puVar11 = puVar6;
            FUN_1005e781c();
            lVar16 = local_b8;
            __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                      (local_b8,&DAT_1009dba80,&local_51,puVar7,&DAT_1009dba80,puVar11);
            puVar11 = puStack_108;
            lVar8 = local_110;
          }
          else {
            local_51 = 2;
            puVar11 = puVar6;
            FUN_1005e77dc();
            __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                      (lVar16,&DAT_1009dbaa0,&local_51,puVar7,&DAT_1009dbaa0,puVar11);
            puVar11 = puStack_f0;
            lVar8 = local_f8;
          }
          (**(code **)(lVar8 + 8))(lVar16,puVar11);
          pcVar14 = *(code **)(puVar17 + 8);
        }
      }
      else if (uVar1 == 3) {
        puVar11 = puVar6;
        FUN_1005e779c();
        __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                  (lVar5,&DAT_1009dbac0,&local_51,puVar7,&DAT_1009dbac0,puVar11);
        (**(code **)(local_100 + 8))(lVar5,local_e8);
        pcVar14 = *(code **)(puVar17 + 8);
      }
      else {
        if (uVar1 == 4) {
          puVar11 = puVar6;
          FUN_1005e775c();
          __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                    (lVar8,&DAT_1009dbae0,&local_51,puVar7,&DAT_1009dbae0,puVar11);
          pcVar14 = *(code **)(local_d8 + 8);
          puVar11 = puStack_d0;
        }
        else {
          local_51 = 5;
          puVar11 = puVar6;
          FUN_1005e771c();
          lVar8 = local_c0;
          __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                    (local_c0,&DAT_1009dbb00,&local_51,puVar7,&DAT_1009dbb00,puVar11);
          pcVar14 = *(code **)(local_e0 + 8);
          puVar11 = local_c8;
        }
        (*pcVar14)(lVar8,puVar11);
        pcVar14 = *(code **)(puVar17 + 8);
      }
      (*pcVar14)(lVar19,puVar7);
      _swift_unknownObjectRelease(puVar9);
      FUN_10003f094(param_1);
      return puVar6;
    }
    puVar10 = (undefined *)0x0;
    __ss13DecodingErrorOMa();
    puVar11 = puVar10;
    puVar12 = (undefined8 *)PTR___ss13DecodingErrorOs0B0sWP_100995b18;
    _swift_allocError();
    puVar6 = &DAT_100aaeca0;
    FUN_100004bb4(&DAT_100aaeca0,&DAT_100844fc0);
    iVar4 = *(int *)(puVar6 + 0x30);
    *puVar12 = &DAT_1009da310;
    __ss22KeyedDecodingContainerV10codingPathSays9CodingKey_pGvg(puVar7);
    __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              ((long)puVar12 + (long)iVar4);
    (**(code **)(*(long *)(puVar10 + -8) + 0x68))
              (puVar12,*(undefined4 *)
                        PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_100995b00,
               puVar10);
    _swift_willThrow();
    (**(code **)(puVar17 + 8))(lVar19,puVar7);
    _swift_unknownObjectRelease(puVar9);
  }
  FUN_10003f094(param_1);
  return puVar11;
}

