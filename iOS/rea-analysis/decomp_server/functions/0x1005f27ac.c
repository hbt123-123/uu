// rea decompile_all
// name: FUN_1005f27ac
// address: 0x1005f27ac
// body: available
// range: 0x1005f27ac-0x1005f2a9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005f297c) */
/* WARNING: Removing unreachable block (ram,0x0001005f290c) */
/* WARNING: Removing unreachable block (ram,0x0001005f29c8) */
/* WARNING: Removing unreachable block (ram,0x0001005f2924) */
/* WARNING: Removing unreachable block (ram,0x0001005f2938) */
/* WARNING: Removing unreachable block (ram,0x0001005f2940) */
/* WARNING: Removing unreachable block (ram,0x0001005f2944) */
/* WARNING: Removing unreachable block (ram,0x0001005f287c) */

void FUN_1005f27ac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long extraout_x8;
  long unaff_x21;
  long lVar14;
  undefined *local_120;
  undefined8 ***local_118;
  undefined8 ***local_110;
  undefined *local_108;
  undefined *local_100;
  undefined8 ***local_f8;
  undefined *puStack_f0;
  byte local_e8;
  undefined7 uStack_e7;
  undefined8 ***pppuStack_e0;
  undefined *local_d8;
  undefined8 ***pppuStack_d0;
  undefined *local_c8;
  undefined1 *puStack_c0;
  undefined *local_b8;
  undefined8 ***local_b0;
  undefined *puStack_a8;
  byte local_a0;
  undefined8 ***local_98;
  undefined *puStack_90;
  undefined8 ***local_88;
  undefined *puStack_80;
  undefined1 *local_78;
  undefined *puStack_70;
  undefined1 local_51;
  
  puVar4 = &DAT_100aaef68;
  FUN_100004bb4(&DAT_100aaef68,&DAT_100844fa0);
  lVar14 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1005f25b0();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_120 - extraout_x8,&DAT_1009dbe90,&DAT_1009dbe90,lVar5,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_b0 = (undefined8 ***)((ulong)local_b0 & 0xffffffffffffff00);
    ppppuVar6 = &local_b0;
    puVar11 = puVar4;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_b0._0_1_ = 1;
    ppppuVar7 = &local_b0;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(ppppuVar7,puVar4);
    local_b0._0_1_ = 2;
    ppppuVar8 = &local_b0;
    puVar12 = puVar4;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_b0._0_1_ = 3;
    ppppuVar9 = &local_b0;
    puVar13 = puVar4;
    local_110 = ppppuVar8;
    local_100 = puVar12;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_51 = 4;
    puVar10 = &local_51;
    puVar12 = puVar4;
    local_118 = ppppuVar9;
    local_108 = puVar13;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    bVar3 = (byte)ppppuVar7 & 1;
    local_120 = puVar12;
    (**(code **)(lVar14 + 8))((long)&local_120 - extraout_x8,puVar4);
    puVar13 = local_100;
    puVar12 = local_108;
    puVar4 = local_120;
    pppuStack_e0 = local_110;
    local_d8 = local_100;
    pppuStack_d0 = local_118;
    local_c8 = local_108;
    local_b8 = local_120;
    local_f8 = ppppuVar6;
    puStack_f0 = puVar11;
    local_e8 = bVar3;
    puStack_c0 = puVar10;
    FUN_1005f308c(&local_f8,&local_b0);
    FUN_10003f094(param_2);
    local_98 = local_110;
    puStack_90 = puVar13;
    local_88 = local_118;
    puStack_80 = puVar12;
    puStack_70 = puVar4;
    local_b0 = ppppuVar6;
    puStack_a8 = puVar11;
    local_a0 = bVar3;
    local_78 = puVar10;
    FUN_1005f30c0(&local_b0);
    param_1[5] = pppuStack_d0;
    param_1[4] = local_d8;
    param_1[7] = puStack_c0;
    param_1[6] = local_c8;
    param_1[8] = local_b8;
    param_1[1] = puStack_f0;
    *param_1 = local_f8;
    param_1[3] = pppuStack_e0;
    param_1[2] = CONCAT71(uStack_e7,local_e8);
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

