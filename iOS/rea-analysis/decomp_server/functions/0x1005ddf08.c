// rea decompile_all
// name: FUN_1005ddf08
// address: 0x1005ddf08
// body: available
// range: 0x1005ddf08-0x1005de1bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005de104) */
/* WARNING: Removing unreachable block (ram,0x0001005de068) */
/* WARNING: Removing unreachable block (ram,0x0001005de0a8) */
/* WARNING: Removing unreachable block (ram,0x0001005de0bc) */
/* WARNING: Removing unreachable block (ram,0x0001005de0d0) */
/* WARNING: Removing unreachable block (ram,0x0001005de130) */
/* WARNING: Removing unreachable block (ram,0x0001005de000) */

void FUN_1005ddf08(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long unaff_x21;
  long lVar11;
  uint *local_110;
  uint *local_108;
  undefined *local_100;
  uint *local_f8;
  undefined *local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  uint *puStack_e0;
  undefined *local_d8;
  uint *puStack_d0;
  undefined *local_c8;
  uint *puStack_c0;
  undefined *local_b8;
  undefined1 *puStack_b0;
  uint local_a8 [2];
  uint *local_a0;
  undefined *puStack_98;
  uint *local_90;
  undefined *puStack_88;
  uint *local_80;
  undefined *puStack_78;
  undefined1 *local_70;
  undefined1 local_51;
  
  puVar3 = &DAT_100aae268;
  FUN_100004bb4(&DAT_100aae268,&DAT_100840438);
  lVar11 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1005ddd18();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_110 - extraout_x8,&DAT_1009d9ab8,&DAT_1009d9ab8,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_a8[0] = local_a8[0] & 0xffffff00;
    puVar5 = local_a8;
    __ss22KeyedDecodingContainerV6decode_6forKeys6UInt32VAFm_xtKF(puVar5,puVar3);
    local_a8[0]._0_1_ = 1;
    puVar6 = local_a8;
    puVar9 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_a8[0]._0_1_ = 2;
    puVar7 = local_a8;
    puVar10 = puVar3;
    local_f8 = puVar6;
    local_f0 = puVar9;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_a8[0]._0_1_ = 3;
    puVar6 = local_a8;
    puVar9 = puVar3;
    local_108 = puVar7;
    local_100 = puVar10;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_51 = 4;
    puVar8 = &local_51;
    local_110 = puVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int64VAFm_xtKF(puVar8,puVar3);
    (**(code **)(lVar11 + 8))((long)&local_110 - extraout_x8,puVar3);
    puVar7 = local_f8;
    puVar3 = local_100;
    puVar6 = local_108;
    puStack_e0 = local_f8;
    local_d8 = local_f0;
    puStack_d0 = local_108;
    local_c8 = local_100;
    puStack_c0 = local_110;
    local_e8 = (uint)puVar5;
    local_b8 = puVar9;
    puStack_b0 = puVar8;
    FUN_1005df8dc(&local_e8,local_a8);
    FUN_10003f094(param_2);
    local_a0 = puVar7;
    puStack_98 = local_f0;
    local_90 = puVar6;
    puStack_88 = puVar3;
    local_80 = local_110;
    local_a8[0] = (uint)puVar5;
    puStack_78 = puVar9;
    local_70 = puVar8;
    FUN_1005df910(local_a8);
    param_1[1] = puStack_e0;
    *param_1 = CONCAT44(uStack_e4,local_e8);
    param_1[3] = puStack_d0;
    param_1[2] = local_d8;
    param_1[5] = puStack_c0;
    param_1[4] = local_c8;
    param_1[7] = puStack_b0;
    param_1[6] = local_b8;
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

