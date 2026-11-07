// rea decompile_all
// name: FUN_1003dde48
// address: 0x1003dde48
// body: available
// range: 0x1003dde48-0x1003de2b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003de128) */
/* WARNING: Removing unreachable block (ram,0x0001003de004) */
/* WARNING: Removing unreachable block (ram,0x0001003de090) */
/* WARNING: Removing unreachable block (ram,0x0001003de01c) */
/* WARNING: Removing unreachable block (ram,0x0001003de048) */
/* WARNING: Removing unreachable block (ram,0x0001003de034) */
/* WARNING: Removing unreachable block (ram,0x0001003de044) */
/* WARNING: Removing unreachable block (ram,0x0001003de04c) */
/* WARNING: Removing unreachable block (ram,0x0001003de174) */
/* WARNING: Removing unreachable block (ram,0x0001003de050) */
/* WARNING: Removing unreachable block (ram,0x0001003ddf68) */

void FUN_1003dde48(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long unaff_x21;
  long lVar13;
  undefined1 auStack_160 [8];
  undefined8 **local_158;
  undefined8 ***local_150;
  undefined8 ***local_148;
  undefined8 ***local_140;
  undefined *local_138;
  undefined *local_130;
  undefined8 ***local_128;
  undefined *local_120;
  undefined8 ***local_118;
  undefined8 ***pppuStack_110;
  undefined8 ***local_108;
  undefined *puStack_100;
  undefined8 ***local_f8;
  undefined8 ***pppuStack_f0;
  undefined *local_e8;
  undefined8 ***pppuStack_e0;
  undefined *local_d8;
  undefined8 **ppuStack_d0;
  undefined1 *local_c8;
  undefined8 ***local_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***local_b0;
  undefined *puStack_a8;
  undefined8 ***local_a0;
  undefined8 ***pppuStack_98;
  undefined *local_90;
  undefined8 ***pppuStack_88;
  undefined *local_80;
  undefined8 **ppuStack_78;
  undefined1 *local_70;
  undefined1 local_51;
  
  puVar3 = &DAT_100a8cd98;
  FUN_100004bb4(&DAT_100a8cd98,&DAT_1008232e0);
  lVar13 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1003ddb68();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_160 + -extraout_x8,&DAT_1009ba578,&DAT_1009ba578,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_c0 = (undefined8 ***)((ulong)local_c0 & 0xffffffffffffff00);
    ppppuVar5 = &local_c0;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(ppppuVar5,puVar3);
    local_c0._0_1_ = 1;
    ppppuVar6 = &local_c0;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(ppppuVar6,puVar3);
    local_c0._0_1_ = 2;
    ppppuVar7 = &local_c0;
    puVar9 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_c0._0_1_ = 3;
    ppppuVar8 = &local_c0;
    local_128 = ppppuVar7;
    local_120 = puVar9;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(ppppuVar8,puVar3);
    local_c0._0_1_ = 4;
    ppppuVar7 = &local_c0;
    puVar9 = puVar3;
    local_140 = ppppuVar8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_c0 = (undefined8 ***)CONCAT71(local_c0._1_7_,5);
    ppppuVar8 = &local_c0;
    puVar12 = puVar3;
    local_148 = ppppuVar7;
    local_130 = puVar9;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar9 = &DAT_100a756e8;
    local_150 = ppppuVar8;
    local_138 = puVar12;
    FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
    local_118 = (undefined8 ***)CONCAT71(local_118._1_7_,6);
    puVar10 = &DAT_100a8c110;
    FUN_1003bd9a4(&DAT_100a8c110,PTR___sSSSesWP_100995828,PTR___sSayxGSesSeRzlMc_1009958a0);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_c0,puVar9,&local_118,puVar3,puVar9,puVar10);
    local_158 = local_c0;
    local_51 = 7;
    puVar11 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar11,puVar3);
    (**(code **)(lVar13 + 8))(auStack_160 + -extraout_x8,puVar3);
    puVar12 = local_120;
    puVar9 = local_130;
    puVar3 = local_138;
    local_108 = local_128;
    puStack_100 = local_120;
    local_f8 = local_140;
    pppuStack_f0 = local_148;
    local_e8 = local_130;
    pppuStack_e0 = local_150;
    local_d8 = local_138;
    ppuStack_d0 = local_158;
    local_118 = ppppuVar5;
    pppuStack_110 = ppppuVar6;
    local_c8 = puVar11;
    FUN_1000a03e8(&local_118,&local_c0);
    FUN_10003f094(param_2);
    local_b0 = local_128;
    puStack_a8 = puVar12;
    local_a0 = local_140;
    pppuStack_98 = local_148;
    local_90 = puVar9;
    pppuStack_88 = local_150;
    local_80 = puVar3;
    ppuStack_78 = local_158;
    local_c0 = ppppuVar5;
    pppuStack_b8 = ppppuVar6;
    local_70 = puVar11;
    FUN_10012ee48(&local_c0);
    param_1[5] = pppuStack_f0;
    param_1[4] = local_f8;
    param_1[7] = pppuStack_e0;
    param_1[6] = local_e8;
    param_1[9] = ppuStack_d0;
    param_1[8] = local_d8;
    param_1[10] = local_c8;
    param_1[1] = pppuStack_110;
    *param_1 = local_118;
    param_1[3] = puStack_100;
    param_1[2] = local_108;
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

