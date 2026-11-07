// rea decompile_all
// name: FUN_100011cd4
// address: 0x100011cd4
// body: available
// range: 0x100011cd4-0x100011f5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100011e98) */
/* WARNING: Removing unreachable block (ram,0x000100011e10) */
/* WARNING: Removing unreachable block (ram,0x000100011e54) */
/* WARNING: Removing unreachable block (ram,0x000100011eac) */
/* WARNING: Removing unreachable block (ram,0x000100011ec0) */
/* WARNING: Removing unreachable block (ram,0x000100011ec8) */
/* WARNING: Removing unreachable block (ram,0x000100011ecc) */
/* WARNING: Removing unreachable block (ram,0x000100011da4) */

void FUN_100011cd4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long unaff_x21;
  long lVar12;
  undefined8 ***local_110;
  undefined8 ***local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined8 ***local_e8;
  undefined *puStack_e0;
  undefined8 ***local_d8;
  undefined *puStack_d0;
  undefined8 ***local_c8;
  undefined *puStack_c0;
  undefined1 *local_b8;
  undefined *puStack_b0;
  undefined8 ***local_a8;
  undefined *puStack_a0;
  undefined8 ***local_98;
  undefined *puStack_90;
  undefined8 ***local_88;
  undefined *puStack_80;
  undefined1 *local_78;
  undefined *puStack_70;
  undefined1 local_51;
  
  puVar4 = &DAT_100102a48;
  FUN_10000eb08(&DAT_100102a48,&DAT_1000cf348);
  lVar12 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = param_2;
  FUN_10000eba0(param_2,uVar1);
  FUN_100011b28();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_110 - extraout_x8,&DAT_1000f2460,&DAT_1000f2460,lVar5,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_a8 = (undefined8 ***)((ulong)local_a8 & 0xffffffffffffff00);
    ppppuVar6 = &local_a8;
    puVar10 = puVar4;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_a8._0_1_ = 1;
    ppppuVar7 = &local_a8;
    puVar11 = puVar4;
    local_f0 = puVar10;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_a8._0_1_ = 2;
    ppppuVar8 = &local_a8;
    puVar10 = puVar4;
    local_108 = ppppuVar7;
    local_f8 = puVar11;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_51 = 3;
    puVar9 = &local_51;
    puVar11 = puVar4;
    local_110 = ppppuVar8;
    local_100 = puVar10;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    (**(code **)(lVar12 + 8))((long)&local_110 - extraout_x8,puVar4);
    puVar10 = local_f0;
    puVar4 = local_100;
    pppuVar3 = local_108;
    puStack_e0 = local_f0;
    local_d8 = local_108;
    puStack_d0 = local_f8;
    local_c8 = local_110;
    puStack_c0 = local_100;
    local_e8 = ppppuVar6;
    local_b8 = puVar9;
    puStack_b0 = puVar11;
    FUN_10001fe38(&local_e8,&local_a8);
    FUN_100001428(param_2);
    puStack_a0 = puVar10;
    local_98 = pppuVar3;
    puStack_90 = local_f8;
    local_88 = local_110;
    puStack_80 = puVar4;
    local_a8 = ppppuVar6;
    local_78 = puVar9;
    puStack_70 = puVar11;
    FUN_10001fe6c(&local_a8);
    param_1[1] = puStack_e0;
    *param_1 = local_e8;
    param_1[3] = puStack_d0;
    param_1[2] = local_d8;
    param_1[5] = puStack_c0;
    param_1[4] = local_c8;
    param_1[7] = puStack_b0;
    param_1[6] = local_b8;
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

