// rea decompile_all
// name: FUN_1005da3c8
// address: 0x1005da3c8
// body: available
// range: 0x1005da3c8-0x1005da6c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005da5f4) */
/* WARNING: Removing unreachable block (ram,0x0001005da50c) */
/* WARNING: Removing unreachable block (ram,0x0001005da608) */
/* WARNING: Removing unreachable block (ram,0x0001005da61c) */
/* WARNING: Removing unreachable block (ram,0x0001005da49c) */

void FUN_1005da3c8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  byte bVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long extraout_x8;
  long unaff_x21;
  long lVar14;
  undefined1 auStack_130 [8];
  undefined8 local_128;
  undefined8 ***local_120;
  undefined8 ***local_118;
  undefined *local_110;
  undefined8 ***local_108;
  undefined8 ***local_100;
  undefined *puStack_f8;
  undefined8 ***local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined8 ***pppuStack_d8;
  byte local_d0;
  undefined7 uStack_cf;
  undefined8 local_c8;
  undefined8 ***local_c0;
  undefined *puStack_b8;
  undefined8 ***local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 ***local_98;
  byte local_90;
  undefined8 local_88;
  undefined1 local_79;
  undefined8 local_78;
  byte local_70;
  
  puVar7 = &DAT_100aae0c8;
  FUN_100004bb4(&DAT_100aae0c8,&DAT_10083f6b0);
  lVar14 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  lVar8 = param_3;
  FUN_10003f030(param_3,uVar1);
  FUN_1005da1c8();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_130 + -extraout_x8,&DAT_1009d9480,&DAT_1009d9480,lVar8,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_c0 = (undefined8 ***)((ulong)local_c0 & 0xffffffffffffff00);
    ppppuVar9 = &local_c0;
    puVar13 = puVar7;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_c0._0_1_ = 1;
    ppppuVar10 = &local_c0;
    puVar11 = puVar7;
    local_108 = ppppuVar9;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_c0._0_1_ = 2;
    local_118 = ppppuVar10;
    local_110 = puVar11;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_c0,puVar7);
    local_c0._0_1_ = 3;
    ppppuVar9 = &local_c0;
    puVar11 = puVar7;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF();
    local_70 = (byte)puVar11 & 1;
    puVar11 = &DAT_100aae0a0;
    local_120 = ppppuVar9;
    FUN_100004bb4(&DAT_100aae0a0,&DAT_10083f500);
    local_79 = 4;
    puVar12 = &DAT_100aae0d0;
    FUN_1005da960(&DAT_100aae0d0,PTR___sSSSesWP_100995828,PTR___sSayxGSesSeRzlMc_1009958a0);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_78,puVar11,&local_79,puVar7,puVar11,puVar12);
    (**(code **)(lVar14 + 8))(auStack_130 + -extraout_x8,puVar7);
    bVar6 = local_70;
    pppuVar5 = local_108;
    puVar7 = local_110;
    pppuVar4 = local_118;
    pppuVar3 = local_120;
    local_128 = local_78;
    local_100 = local_108;
    local_f0 = local_118;
    puStack_e8 = local_110;
    pppuStack_d8 = local_120;
    local_d0 = local_70;
    local_c8 = local_78;
    puStack_f8 = puVar13;
    local_e0 = param_2;
    FUN_1005da9c8(&local_100,&local_c0);
    FUN_10003f094(param_3);
    local_c0 = pppuVar5;
    local_b0 = pppuVar4;
    puStack_a8 = puVar7;
    local_98 = pppuVar3;
    local_90 = bVar6;
    local_88 = local_128;
    puStack_b8 = puVar13;
    local_a0 = param_2;
    FUN_1005da9fc(&local_c0);
    param_1[1] = puStack_f8;
    *param_1 = local_100;
    param_1[3] = puStack_e8;
    param_1[2] = local_f0;
    param_1[5] = pppuStack_d8;
    param_1[4] = local_e0;
    param_1[7] = local_c8;
    param_1[6] = CONCAT71(uStack_cf,local_d0);
  }
  else {
    FUN_10003f094(param_3);
  }
  return;
}

