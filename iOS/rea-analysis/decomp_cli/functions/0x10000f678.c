// rea decompile_all
// name: FUN_10000f678
// address: 0x10000f678
// body: available
// range: 0x10000f678-0x10000f9bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010000f878) */
/* WARNING: Removing unreachable block (ram,0x00010000f8e0) */
/* WARNING: Removing unreachable block (ram,0x00010000f800) */
/* WARNING: Removing unreachable block (ram,0x00010000f7b4) */
/* WARNING: Removing unreachable block (ram,0x00010000f84c) */
/* WARNING: Removing unreachable block (ram,0x00010000f864) */
/* WARNING: Removing unreachable block (ram,0x00010000f88c) */
/* WARNING: Removing unreachable block (ram,0x00010000f898) */
/* WARNING: Removing unreachable block (ram,0x00010000f87c) */
/* WARNING: Removing unreachable block (ram,0x00010000f888) */
/* WARNING: Removing unreachable block (ram,0x00010000f89c) */
/* WARNING: Removing unreachable block (ram,0x00010000f748) */

void FUN_10000f678(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 ***pppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long extraout_x8;
  long unaff_x21;
  long lVar14;
  undefined8 ***local_130;
  undefined8 ***local_128;
  undefined8 ***local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined8 ***local_f8;
  undefined *puStack_f0;
  undefined8 ***local_e8;
  undefined *puStack_e0;
  undefined8 ***local_d8;
  undefined *puStack_d0;
  undefined8 ***local_c8;
  undefined *puStack_c0;
  byte local_b8;
  undefined8 ***local_b0;
  undefined *puStack_a8;
  undefined8 ***local_a0;
  undefined *puStack_98;
  undefined8 ***local_90;
  undefined *puStack_88;
  undefined8 ***local_80;
  undefined *puStack_78;
  byte local_70;
  undefined1 local_51;
  
  puVar6 = &DAT_100102ac0;
  FUN_10000eb08(&DAT_100102ac0,&DAT_1000cf3a0);
  lVar14 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar7 = param_2;
  FUN_10000eba0(param_2,uVar1);
  FUN_10000f498();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_130 - extraout_x8,&DAT_1000f2e40,&DAT_1000f2e40,lVar7,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_b0 = (undefined8 ***)((ulong)local_b0 & 0xffffffffffffff00);
    ppppuVar8 = &local_b0;
    puVar12 = puVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_b0._0_1_ = 1;
    ppppuVar9 = &local_b0;
    puVar13 = puVar6;
    local_100 = puVar12;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_b0._0_1_ = 2;
    ppppuVar10 = &local_b0;
    puVar12 = puVar6;
    local_120 = ppppuVar9;
    local_108 = puVar13;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_b0._0_1_ = 3;
    ppppuVar9 = &local_b0;
    puVar13 = puVar6;
    local_128 = ppppuVar10;
    local_110 = puVar12;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_51 = 4;
    puVar11 = &local_51;
    local_130 = ppppuVar9;
    local_118 = puVar13;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar11,puVar6);
    (**(code **)(lVar14 + 8))((long)&local_130 - extraout_x8,puVar6);
    puVar5 = local_100;
    puVar13 = local_108;
    puVar12 = local_110;
    puVar6 = local_118;
    pppuVar4 = local_120;
    bVar3 = (byte)puVar11 & 1;
    puStack_f0 = local_100;
    local_e8 = local_120;
    puStack_e0 = local_108;
    local_d8 = local_128;
    puStack_d0 = local_110;
    local_c8 = local_130;
    puStack_c0 = local_118;
    local_f8 = ppppuVar8;
    local_b8 = bVar3;
    FUN_10001ff24(&local_f8,&local_b0);
    FUN_100001428(param_2);
    puStack_a8 = puVar5;
    local_a0 = pppuVar4;
    puStack_98 = puVar13;
    local_90 = local_128;
    puStack_88 = puVar12;
    local_80 = local_130;
    puStack_78 = puVar6;
    local_b0 = ppppuVar8;
    local_70 = bVar3;
    FUN_10001ff58(&local_b0);
    param_1[5] = puStack_d0;
    param_1[4] = local_d8;
    param_1[7] = puStack_c0;
    param_1[6] = local_c8;
    *(byte *)(param_1 + 8) = local_b8;
    param_1[1] = puStack_f0;
    *param_1 = local_f8;
    param_1[3] = puStack_e0;
    param_1[2] = local_e8;
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

