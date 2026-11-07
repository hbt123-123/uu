// rea decompile_all
// name: FUN_1005e71b4
// address: 0x1005e71b4
// body: available
// range: 0x1005e71b4-0x1005e76db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005e762c) */
/* WARNING: Removing unreachable block (ram,0x0001005e75e8) */

undefined * FUN_1005e71b4(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *pcVar11;
  ulong uVar12;
  long unaff_x21;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long local_110;
  undefined *local_108;
  long local_100;
  long local_f8;
  undefined *puStack_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined1 local_51;
  
  puVar4 = &DAT_100aaeea0;
  FUN_100004bb4(&DAT_100aaeea0,&DAT_100844a38);
  local_e0 = *(long *)(puVar4 + -8);
  local_c0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100aaeea8;
  local_b8 = (long)&local_110 - extraout_x8;
  FUN_100004bb4(&DAT_100aaeea8,&DAT_100844a40);
  local_d0 = *(long *)(puVar4 + -8);
  puStack_c8 = puVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = ((long)&local_110 - extraout_x8) - extraout_x8_00;
  puVar4 = &DAT_100aaeeb0;
  local_a0 = lVar10;
  FUN_100004bb4(&DAT_100aaeeb0,&DAT_100844a48);
  local_e8 = *(long *)(puVar4 + -8);
  local_d8 = puVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_01;
  puVar4 = &DAT_100aaeeb8;
  local_a8 = lVar10;
  FUN_100004bb4(&DAT_100aaeeb8,&DAT_100844a50);
  local_f8 = *(long *)(puVar4 + -8);
  puStack_f0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_02;
  puVar4 = &DAT_100aaeec0;
  local_b0 = lVar10;
  FUN_100004bb4(&DAT_100aaeec0,&DAT_100844a58);
  lVar13 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_03;
  puVar5 = &DAT_100aaeec8;
  FUN_100004bb4(&DAT_100aaeec8,&DAT_100844a60);
  lVar16 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar10 - extraout_x8_04;
  puVar14 = *(undefined **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_98 = param_1;
  FUN_10003f030(param_1,puVar14);
  FUN_1005e2250();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar15,&DAT_1009dbb90,&DAT_1009dbb90,param_1,puVar14,uVar2);
  lVar8 = local_a0;
  lVar3 = local_a8;
  lVar7 = local_b0;
  if (unaff_x21 == 0) {
    puVar6 = puVar5;
    local_110 = lVar13;
    local_108 = puVar4;
    local_100 = lVar10;
    __ss22KeyedDecodingContainerV7allKeysSayxGvg();
    uVar12 = *(ulong *)(puVar6 + 0x10);
    puVar4 = puVar6;
    FUN_1005fc7c8();
    if ((((uint)puVar4 & 0xff) != 5) && ((uVar12 & 0x7fffffffffffffff) == 0)) {
      uVar1 = (uint)puVar4 & 0xff;
      if (uVar1 == 1 || ((ulong)puVar4 & 0xff) == 0) {
        if (((ulong)puVar4 & 0xff) == 0) {
          local_51 = 0;
          puVar14 = puVar4;
          FUN_1005e2390();
          lVar7 = local_100;
          __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                    (local_100,&DAT_1009dbbb0,&local_51,puVar5,&DAT_1009dbbb0,puVar14);
          puVar14 = local_108;
          lVar8 = local_110;
        }
        else {
          local_51 = 1;
          puVar14 = puVar4;
          FUN_1005e2350();
          __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                    (lVar7,&DAT_1009dbbd0,&local_51,puVar5,&DAT_1009dbbd0,puVar14);
          puVar14 = puStack_f0;
          lVar8 = local_f8;
        }
        (**(code **)(lVar8 + 8))(lVar7,puVar14);
        pcVar11 = *(code **)(lVar16 + 8);
      }
      else {
        local_51 = SUB81(puVar4,0);
        if (uVar1 == 2) {
          puVar14 = puVar4;
          FUN_1005e2310();
          __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                    (lVar3,&DAT_1009dbbf0,&local_51,puVar5,&DAT_1009dbbf0,puVar14);
          (**(code **)(local_e8 + 8))(lVar3,local_d8);
          pcVar11 = *(code **)(lVar16 + 8);
        }
        else {
          if (uVar1 == 3) {
            puVar14 = puVar4;
            FUN_1005e22d0();
            __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                      (lVar8,&DAT_1009dbc10,&local_51,puVar5,&DAT_1009dbc10,puVar14);
            pcVar11 = *(code **)(local_d0 + 8);
            puVar14 = puStack_c8;
          }
          else {
            local_51 = 4;
            puVar14 = puVar4;
            FUN_1005e2290();
            lVar8 = local_b8;
            __ss22KeyedDecodingContainerV06nestedC07keyedBy6forKeyAByqd__Gqd__m_xtKs06CodingH0Rd__lF
                      (local_b8,&DAT_1009dbc30,&local_51,puVar5,&DAT_1009dbc30,puVar14);
            pcVar11 = *(code **)(local_e0 + 8);
            puVar14 = local_c0;
          }
          (*pcVar11)(lVar8,puVar14);
          pcVar11 = *(code **)(lVar16 + 8);
        }
      }
      (*pcVar11)(lVar15,puVar5);
      _swift_unknownObjectRelease(puVar6);
      FUN_10003f094(local_98);
      return puVar4;
    }
    lVar7 = 0;
    __ss13DecodingErrorOMa();
    puVar9 = (undefined8 *)PTR___ss13DecodingErrorOs0B0sWP_100995b18;
    _swift_allocError();
    puVar4 = &DAT_100aaeca0;
    FUN_100004bb4(&DAT_100aaeca0,&DAT_100844fc0);
    puVar14 = (undefined *)(long)*(int *)(puVar4 + 0x30);
    *puVar9 = &DAT_1009da280;
    __ss22KeyedDecodingContainerV10codingPathSays9CodingKey_pGvg(puVar5);
    __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              ((undefined *)((long)puVar9 + (long)puVar14));
    (**(code **)(*(long *)(lVar7 + -8) + 0x68))
              (puVar9,*(undefined4 *)
                       PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_100995b00,
               lVar7);
    _swift_willThrow();
    (**(code **)(lVar16 + 8))(lVar15,puVar5);
    _swift_unknownObjectRelease(puVar6);
  }
  FUN_10003f094(local_98);
  return puVar14;
}

