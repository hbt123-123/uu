// rea decompile_all
// name: FUN_1003ba428
// address: 0x1003ba428
// body: available
// range: 0x1003ba428-0x1003ba7ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003ba674) */
/* WARNING: Removing unreachable block (ram,0x0001003ba560) */
/* WARNING: Removing unreachable block (ram,0x0001003ba5e0) */
/* WARNING: Removing unreachable block (ram,0x0001003ba6f8) */
/* WARNING: Removing unreachable block (ram,0x0001003ba600) */
/* WARNING: Removing unreachable block (ram,0x0001003ba62c) */
/* WARNING: Removing unreachable block (ram,0x0001003ba618) */
/* WARNING: Removing unreachable block (ram,0x0001003ba628) */
/* WARNING: Removing unreachable block (ram,0x0001003ba630) */
/* WARNING: Removing unreachable block (ram,0x0001003ba638) */
/* WARNING: Removing unreachable block (ram,0x0001003ba4f8) */

void FUN_1003ba428(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long unaff_x21;
  long lVar12;
  undefined8 local_150;
  undefined8 ***local_148;
  undefined8 ***local_140;
  undefined8 ***local_138;
  undefined *local_130;
  undefined *local_128;
  undefined8 ***local_120;
  undefined *local_118;
  undefined8 ***local_110;
  undefined *puStack_108;
  undefined8 ***local_100;
  undefined *puStack_f8;
  undefined8 ***local_f0;
  undefined8 ***pppuStack_e8;
  undefined *local_e0;
  undefined8 ***pppuStack_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 ***local_c0;
  undefined *puStack_b8;
  undefined8 ***local_b0;
  undefined *puStack_a8;
  undefined8 ***local_a0;
  undefined8 ***pppuStack_98;
  undefined *local_90;
  undefined8 ***pppuStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined1 local_69 [9];
  undefined8 local_58;
  
  puVar4 = &DAT_100a8c060;
  FUN_100004bb4(&DAT_100a8c060,&DAT_1008221f0);
  lVar12 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1003ba2d4();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_150 - extraout_x8,&DAT_1009b8a98,&DAT_1009b8a98,lVar5,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_c0 = (undefined8 ***)((ulong)local_c0 & 0xffffffffffffff00);
    ppppuVar6 = &local_c0;
    puVar11 = puVar4;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_c0._0_1_ = 1;
    ppppuVar7 = &local_c0;
    puVar9 = puVar4;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_c0._0_1_ = 2;
    ppppuVar8 = &local_c0;
    local_120 = ppppuVar7;
    local_118 = puVar9;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(ppppuVar8,puVar4);
    local_c0._0_1_ = 3;
    ppppuVar7 = &local_c0;
    puVar9 = puVar4;
    local_138 = ppppuVar8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_c0._0_1_ = 4;
    ppppuVar8 = &local_c0;
    puVar10 = puVar4;
    local_140 = ppppuVar7;
    local_128 = puVar9;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    puVar9 = &DAT_100a8be28;
    local_148 = ppppuVar8;
    local_130 = puVar10;
    FUN_100004bb4(&DAT_100a8be28,&DAT_100820ba8);
    local_69[0] = 5;
    puVar10 = puVar9;
    FUN_1003bd4d8();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_58,puVar9,local_69,puVar4,puVar9,puVar10);
    (**(code **)(lVar12 + 8))((long)&local_150 - extraout_x8,puVar4);
    puVar10 = local_118;
    pppuVar3 = local_120;
    puVar9 = local_128;
    puVar4 = local_130;
    local_150 = local_58;
    local_100 = local_120;
    puStack_f8 = local_118;
    local_f0 = local_138;
    pppuStack_e8 = local_140;
    local_e0 = local_128;
    pppuStack_d8 = local_148;
    local_d0 = local_130;
    uStack_c8 = local_58;
    local_110 = ppppuVar6;
    puStack_108 = puVar11;
    FUN_1003bd588(&local_110,&local_c0);
    FUN_10003f094(param_2);
    local_b0 = pppuVar3;
    puStack_a8 = puVar10;
    local_a0 = local_138;
    pppuStack_98 = local_140;
    local_90 = puVar9;
    pppuStack_88 = local_148;
    local_80 = puVar4;
    uStack_78 = local_150;
    local_c0 = ppppuVar6;
    puStack_b8 = puVar11;
    FUN_1003bd5bc(&local_c0);
    param_1[5] = pppuStack_e8;
    param_1[4] = local_f0;
    param_1[7] = pppuStack_d8;
    param_1[6] = local_e0;
    param_1[9] = uStack_c8;
    param_1[8] = local_d0;
    param_1[1] = puStack_108;
    *param_1 = local_110;
    param_1[3] = puStack_f8;
    param_1[2] = local_100;
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

