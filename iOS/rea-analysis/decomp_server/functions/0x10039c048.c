// rea decompile_all
// name: FUN_10039c048
// address: 0x10039c048
// body: available
// range: 0x10039c048-0x10039c3f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010039c2c4) */
/* WARNING: Removing unreachable block (ram,0x00010039c144) */

void FUN_10039c048(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  long extraout_x8;
  long unaff_x21;
  long lVar15;
  undefined8 local_160;
  undefined8 ***local_158;
  undefined8 ***local_150;
  uint local_144;
  undefined8 ***local_140;
  undefined8 ***local_138;
  undefined8 ***local_130;
  undefined8 ***local_128;
  undefined8 ***pppuStack_120;
  undefined *local_118;
  undefined8 ***pppuStack_110;
  undefined8 ***local_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined8 ***local_f8;
  undefined8 ***pppuStack_f0;
  byte local_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 ***local_d0;
  undefined8 ***pppuStack_c8;
  undefined *local_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***local_b0;
  undefined1 local_a8;
  undefined8 ***local_a0;
  undefined8 ***pppuStack_98;
  byte local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_51;
  
  puVar8 = &DAT_100a8adb0;
  FUN_100004bb4(&DAT_100a8adb0,&DAT_10081f6f0);
  lVar15 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  lVar9 = param_3;
  FUN_10003f030(param_3,uVar2);
  FUN_10039bd1c();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_160 - extraout_x8,&DAT_1009b6360,&DAT_1009b6360,lVar9,uVar2,uVar3);
  if (unaff_x21 == 0) {
    local_d0 = (undefined8 ***)((ulong)local_d0 & 0xffffffffffffff00);
    ppppuVar10 = &local_d0;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(ppppuVar10,puVar8);
    local_d0._0_1_ = 1;
    ppppuVar11 = &local_d0;
    puVar13 = puVar8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_d0._0_1_ = 2;
    ppppuVar12 = &local_d0;
    local_130 = ppppuVar11;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(ppppuVar12,puVar8);
    local_d0._0_1_ = 3;
    ppppuVar11 = &local_d0;
    local_138 = ppppuVar12;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(ppppuVar11,puVar8);
    local_d0._0_1_ = 4;
    ppppuVar12 = &local_d0;
    local_140 = ppppuVar11;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(ppppuVar12,puVar8);
    local_144 = (uint)ppppuVar12;
    local_d0._0_1_ = 5;
    ppppuVar11 = &local_d0;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(ppppuVar11,puVar8);
    local_d0._0_1_ = 6;
    ppppuVar12 = &local_d0;
    puVar14 = puVar8;
    local_150 = ppppuVar11;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF();
    bVar4 = (byte)puVar14 & 1;
    local_d0._0_1_ = 7;
    local_158 = ppppuVar12;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_d0,puVar8);
    local_51 = 8;
    local_160 = param_2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_51,puVar8);
    uVar1 = local_144 & 1;
    local_144 = uVar1;
    (**(code **)(lVar15 + 8))((long)&local_160 - extraout_x8,puVar8);
    pppuVar7 = local_130;
    pppuVar6 = local_138;
    pppuVar5 = local_140;
    uVar2 = local_160;
    pppuStack_120 = local_130;
    pppuStack_110 = local_138;
    local_108 = local_140;
    uStack_100 = (undefined1)uVar1;
    local_f8 = local_150;
    pppuStack_f0 = local_158;
    uStack_e0 = local_160;
    local_128 = ppppuVar10;
    local_118 = puVar13;
    local_e8 = bVar4;
    local_d8 = param_2;
    FUN_10004985c(&local_128,&local_d0);
    FUN_10003f094(param_3);
    pppuStack_c8 = pppuVar7;
    pppuStack_b8 = pppuVar6;
    local_b0 = pppuVar5;
    local_a8 = (undefined1)local_144;
    local_a0 = local_150;
    pppuStack_98 = local_158;
    local_88 = uVar2;
    local_d0 = ppppuVar10;
    local_c0 = puVar13;
    local_90 = bVar4;
    uStack_80 = param_2;
    FUN_10007ef48(&local_d0);
    param_1[5] = CONCAT71(uStack_ff,uStack_100);
    param_1[4] = local_108;
    param_1[7] = pppuStack_f0;
    param_1[6] = local_f8;
    param_1[9] = uStack_e0;
    param_1[8] = CONCAT71(uStack_e7,local_e8);
    param_1[10] = local_d8;
    param_1[1] = pppuStack_120;
    *param_1 = local_128;
    param_1[3] = pppuStack_110;
    param_1[2] = local_118;
  }
  else {
    FUN_10003f094(param_3);
  }
  return;
}

