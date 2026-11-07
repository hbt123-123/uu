// rea decompile_all
// name: FUN_100012d54
// address: 0x100012d54
// body: available
// range: 0x100012d54-0x100013083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100012f58) */
/* WARNING: Removing unreachable block (ram,0x000100012ea4) */
/* WARNING: Removing unreachable block (ram,0x000100012f0c) */
/* WARNING: Removing unreachable block (ram,0x000100012f6c) */
/* WARNING: Removing unreachable block (ram,0x000100012f7c) */
/* WARNING: Removing unreachable block (ram,0x000100012f90) */
/* WARNING: Removing unreachable block (ram,0x000100012fa0) */
/* WARNING: Removing unreachable block (ram,0x000100012fa4) */
/* WARNING: Removing unreachable block (ram,0x000100012e24) */

void FUN_100012d54(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long unaff_x21;
  long lVar10;
  undefined8 ***local_140;
  undefined8 local_138;
  undefined8 **local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined *local_110;
  undefined8 ***local_108;
  undefined *puStack_100;
  undefined8 **local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 ***local_d8;
  undefined *puStack_d0;
  undefined1 *local_c8;
  undefined *puStack_c0;
  undefined8 ***local_b8;
  undefined *puStack_b0;
  undefined8 **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 ***local_88;
  undefined *puStack_80;
  undefined1 *local_78;
  undefined *puStack_70;
  undefined1 local_51;
  
  puVar3 = &DAT_100102a20;
  FUN_10000eb08(&DAT_100102a20,&DAT_1000cf320);
  lVar10 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10000eba0(param_2,uVar1);
  FUN_100012bb0();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_140 - extraout_x8,&DAT_1000f2070,&DAT_1000f2070,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_b8 = (undefined8 ***)((ulong)local_b8 & 0xffffffffffffff00);
    ppppuVar5 = &local_b8;
    puVar8 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_108 = (undefined8 ***)CONCAT71(local_108._1_7_,1);
    ppppuVar6 = ppppuVar5;
    local_110 = puVar8;
    FUN_100010ca4();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_b8,&DAT_1000f10a8,&local_108,puVar3,&DAT_1000f10a8,ppppuVar6);
    local_130 = local_b8;
    local_120 = puStack_b0;
    local_138 = local_a8;
    local_118 = uStack_a0;
    local_b8 = (undefined8 ***)CONCAT71(local_b8._1_7_,2);
    ppppuVar6 = &local_b8;
    puVar8 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_51 = 3;
    puVar7 = &local_51;
    puVar9 = puVar3;
    local_140 = ppppuVar6;
    local_128 = puVar8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    (**(code **)(lVar10 + 8))((long)&local_140 - extraout_x8,puVar3);
    uVar2 = local_118;
    uVar1 = local_120;
    puVar3 = local_128;
    puStack_100 = local_110;
    local_f8 = local_130;
    uStack_f0 = local_120;
    local_e8 = local_138;
    uStack_e0 = local_118;
    local_d8 = local_140;
    puStack_d0 = local_128;
    local_108 = ppppuVar5;
    local_c8 = puVar7;
    puStack_c0 = puVar9;
    FUN_10001fdd8(&local_108,&local_b8);
    FUN_100001428(param_2);
    puStack_b0 = local_110;
    local_a8 = local_130;
    uStack_a0 = uVar1;
    local_98 = local_138;
    uStack_90 = uVar2;
    local_88 = local_140;
    puStack_80 = puVar3;
    local_b8 = ppppuVar5;
    local_78 = puVar7;
    puStack_70 = puVar9;
    FUN_10001fe0c(&local_b8);
    param_1[5] = uStack_e0;
    param_1[4] = local_e8;
    param_1[7] = puStack_d0;
    param_1[6] = local_d8;
    param_1[9] = puStack_c0;
    param_1[8] = local_c8;
    param_1[1] = puStack_100;
    *param_1 = local_108;
    param_1[3] = uStack_f0;
    param_1[2] = local_f8;
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

