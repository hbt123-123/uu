// rea decompile_all
// name: FUN_1000139e8
// address: 0x1000139e8
// body: available
// range: 0x1000139e8-0x100013c47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100013b84) */
/* WARNING: Removing unreachable block (ram,0x000100013b38) */
/* WARNING: Removing unreachable block (ram,0x000100013b98) */
/* WARNING: Removing unreachable block (ram,0x000100013bac) */
/* WARNING: Removing unreachable block (ram,0x000100013ab8) */

void FUN_1000139e8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 **ppuVar3;
  undefined8 ***pppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 ****ppppuVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long unaff_x21;
  long lVar11;
  undefined8 **local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 ***local_f0;
  undefined8 ***local_e8;
  undefined *puStack_e0;
  undefined8 **local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 *local_b8;
  undefined *puStack_b0;
  undefined8 ***local_a8;
  undefined *puStack_a0;
  undefined8 **local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  undefined *puStack_70;
  undefined1 local_51;
  
  puVar5 = &DAT_100102a00;
  FUN_10000eb08(&DAT_100102a00,&DAT_1000cf308);
  lVar11 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar6 = param_2;
  FUN_10000eba0(param_2,uVar1);
  FUN_10001388c();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_110 - extraout_x8,&DAT_1000f1ec0,&DAT_1000f1ec0,lVar6,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_a8 = (undefined8 ***)((ulong)local_a8 & 0xffffffffffffff00);
    ppppuVar7 = &local_a8;
    puVar9 = puVar5;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_e8 = (undefined8 ***)CONCAT71(local_e8._1_7_,1);
    local_f0 = ppppuVar7;
    FUN_100010ca4();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_a8,&DAT_1000f10a8,&local_e8,puVar5,&DAT_1000f10a8,ppppuVar7);
    local_110 = local_a8;
    local_108 = local_98;
    local_100 = puStack_a0;
    local_f8 = uStack_90;
    local_51 = 2;
    puVar8 = &local_51;
    puVar10 = puVar5;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    (**(code **)(lVar11 + 8))((long)&local_110 - extraout_x8,puVar5);
    pppuVar4 = local_f0;
    uVar1 = local_100;
    ppuVar3 = local_110;
    local_e8 = local_f0;
    local_d8 = local_110;
    uStack_d0 = local_100;
    local_c8 = local_108;
    uStack_c0 = local_f8;
    puStack_e0 = puVar9;
    local_b8 = puVar8;
    puStack_b0 = puVar10;
    FUN_10001fc9c(&local_e8,&local_a8);
    FUN_100001428(param_2);
    local_a8 = pppuVar4;
    local_98 = ppuVar3;
    uStack_90 = uVar1;
    local_88 = local_108;
    uStack_80 = local_f8;
    puStack_a0 = puVar9;
    local_78 = puVar8;
    puStack_70 = puVar10;
    FUN_10001fcd0(&local_a8);
    param_1[1] = puStack_e0;
    *param_1 = local_e8;
    param_1[3] = uStack_d0;
    param_1[2] = local_d8;
    param_1[5] = uStack_c0;
    param_1[4] = local_c8;
    param_1[7] = puStack_b0;
    param_1[6] = local_b8;
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

