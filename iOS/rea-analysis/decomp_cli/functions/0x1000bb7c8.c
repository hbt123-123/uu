// rea decompile_all
// name: FUN_1000bb7c8
// address: 0x1000bb7c8
// body: available
// range: 0x1000bb7c8-0x1000bbd33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000bbb78) */
/* WARNING: Removing unreachable block (ram,0x0001000bb9e8) */
/* WARNING: Removing unreachable block (ram,0x0001000bb990) */
/* WARNING: Removing unreachable block (ram,0x0001000bba0c) */
/* WARNING: Removing unreachable block (ram,0x0001000bba50) */
/* WARNING: Removing unreachable block (ram,0x0001000bbae8) */
/* WARNING: Removing unreachable block (ram,0x0001000bbbec) */
/* WARNING: Removing unreachable block (ram,0x0001000bbb00) */
/* WARNING: Removing unreachable block (ram,0x0001000bb8d4) */
/* WARNING: Removing unreachable block (ram,0x0001000bb910) */

void FUN_1000bb7c8(ulong *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long unaff_x21;
  long lVar16;
  long lVar17;
  ulong *local_180;
  ulong *local_178;
  ulong local_170;
  uint local_164;
  ulong *local_160;
  ulong *local_158;
  ulong *local_150;
  undefined *local_148;
  ulong local_140;
  undefined *local_138;
  ulong local_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  ulong *local_120;
  undefined *puStack_118;
  ulong *local_110;
  undefined *puStack_108;
  ulong *local_100;
  undefined *puStack_f8;
  ulong *local_f0;
  undefined *puStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  undefined1 local_c8;
  ulong *local_c0;
  undefined *puStack_b8;
  ulong *local_b0;
  undefined *puStack_a8;
  ulong *local_a0;
  undefined *puStack_98;
  ulong *local_90;
  undefined *puStack_88;
  ulong local_80;
  ulong uStack_78;
  undefined1 local_69 [9];
  ulong local_58;
  
  puVar6 = &DAT_100105360;
  FUN_10000eb08(&DAT_100105360,&DAT_1000d82e8);
  lVar16 = *(long *)(puVar6 + -8);
  lVar17 = (long)&local_180 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  lVar7 = param_2;
  FUN_10000eba0(param_2,uVar2);
  FUN_1000bbd34();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar17,&DAT_1000fc010,&DAT_1000fc010,lVar7,uVar2,uVar3);
  if (unaff_x21 == 0) {
    puVar8 = &DAT_100105198;
    FUN_10000eb08(&DAT_100105198,&BYTE_1000d6e48);
    local_130 = local_130 & 0xffffffffffffff00;
    puVar9 = &DAT_1001052e8;
    FUN_1000c02c8(&DAT_1001052e8,PTR___sSSSesWP_1000f0318,PTR___sSayxGSesSeRzlMc_1000f0388);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_d0,puVar8,&local_130,puVar6,puVar8,puVar9);
    local_140 = local_d0;
    local_d0._0_1_ = 2;
    puVar10 = &local_d0;
    puVar8 = puVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_d0._0_1_ = 3;
    puVar11 = &local_d0;
    puVar9 = puVar6;
    local_138 = puVar8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_d0._0_1_ = 4;
    puVar12 = &local_d0;
    puVar14 = puVar6;
    local_150 = param_1;
    local_148 = puVar9;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_d0._0_1_ = 1;
    puVar13 = &local_d0;
    local_158 = puVar12;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySbSgSbm_xtKF(puVar13,puVar6);
    local_164 = (uint)puVar13;
    local_170 = CONCAT44(local_170._4_4_,(uint)((local_164 & 0xff) == 2));
    local_d0 = CONCAT71(local_d0._1_7_,5);
    puVar12 = &local_d0;
    puVar15 = puVar6;
    local_160 = puVar11;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    puVar8 = &DAT_1001051a8;
    local_178 = puVar12;
    FUN_10000eb08(&DAT_1001051a8,&BYTE_1000d6e50);
    local_130 = CONCAT71(local_130._1_7_,6);
    puVar9 = puVar8;
    FUN_1000c0418();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_d0,puVar8,&local_130,puVar6,puVar8,puVar9);
    uVar5 = local_d0;
    puVar8 = &DAT_1001051b8;
    local_180 = puVar10;
    FUN_10000eb08(&DAT_1001051b8,&BYTE_1000d6e58);
    local_69[0] = 7;
    puVar9 = puVar8;
    FUN_1000c04c8();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,puVar8,local_69,puVar6,puVar8,puVar9);
    uVar1 = ((uint)local_170 | local_164) & 1;
    local_164 = uVar1;
    (**(code **)(lVar16 + 8))(lVar17,puVar6);
    puVar8 = local_138;
    uVar4 = local_140;
    puVar6 = local_148;
    puVar10 = local_180;
    local_170 = local_58;
    local_130 = local_140;
    uStack_128 = (undefined1)uVar1;
    local_120 = local_180;
    puStack_118 = local_138;
    local_110 = local_160;
    puStack_108 = local_148;
    local_100 = local_158;
    local_f0 = local_178;
    local_e0 = uVar5;
    uStack_d8 = local_58;
    puStack_f8 = puVar14;
    puStack_e8 = puVar15;
    FUN_1000b59dc(&local_130,&local_d0);
    FUN_100001428(param_2);
    local_d0 = uVar4;
    local_c8 = (undefined1)local_164;
    local_c0 = puVar10;
    puStack_b8 = puVar8;
    local_b0 = local_160;
    puStack_a8 = puVar6;
    local_a0 = local_158;
    local_90 = local_178;
    local_80 = uVar5;
    uStack_78 = local_170;
    puStack_98 = puVar14;
    puStack_88 = puVar15;
    FUN_1000bb5ac(&local_d0);
    local_150[5] = (ulong)puStack_108;
    local_150[4] = (ulong)local_110;
    local_150[7] = (ulong)puStack_f8;
    local_150[6] = (ulong)local_100;
    local_150[9] = (ulong)puStack_e8;
    local_150[8] = (ulong)local_f0;
    local_150[0xb] = uStack_d8;
    local_150[10] = local_e0;
    local_150[1] = CONCAT71(uStack_127,uStack_128);
    *local_150 = local_130;
    local_150[3] = (ulong)puStack_118;
    local_150[2] = (ulong)local_120;
  }
  else {
    FUN_100001428(param_2);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
  }
  return;
}

