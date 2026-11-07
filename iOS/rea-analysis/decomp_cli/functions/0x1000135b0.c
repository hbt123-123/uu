// rea decompile_all
// name: FUN_1000135b0
// address: 0x1000135b0
// body: available
// range: 0x1000135b0-0x10001388b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100013770) */
/* WARNING: Removing unreachable block (ram,0x000100013704) */
/* WARNING: Removing unreachable block (ram,0x0001000137a4) */
/* WARNING: Removing unreachable block (ram,0x0001000137b8) */
/* WARNING: Removing unreachable block (ram,0x000100013680) */

void FUN_1000135b0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long unaff_x21;
  long lVar13;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 **local_108;
  undefined8 *local_100;
  undefined8 ***local_f8;
  undefined *puStack_f0;
  undefined8 **local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  byte local_b8;
  undefined8 ***local_b0;
  undefined *puStack_a8;
  undefined8 **local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_70;
  undefined1 local_51;
  
  puVar7 = &DAT_100102a08;
  FUN_10000eb08(&DAT_100102a08,&DAT_1000cf310);
  lVar13 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar8 = param_2;
  FUN_10000eba0(param_2,uVar1);
  FUN_100013414();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_130 - extraout_x8,&DAT_1000f1f50,&DAT_1000f1f50,lVar8,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_b0 = (undefined8 ***)((ulong)local_b0 & 0xffffffffffffff00);
    ppppuVar9 = &local_b0;
    puVar12 = puVar7;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_f8 = (undefined8 ***)CONCAT71(local_f8._1_7_,1);
    ppppuVar10 = ppppuVar9;
    local_100 = param_1;
    FUN_10001fcfc();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_b0,&DAT_1000f1728,&local_f8,puVar7,&DAT_1000f1728,ppppuVar10);
    local_110 = puStack_a8;
    local_108 = local_b0;
    local_128 = local_a0;
    local_130 = uStack_98;
    local_120 = local_90;
    local_118 = uStack_88;
    local_51 = 2;
    puVar11 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar11,puVar7);
    (**(code **)(lVar13 + 8))((long)&local_130 - extraout_x8,puVar7);
    uVar6 = local_110;
    uVar5 = local_118;
    uVar4 = local_120;
    uVar2 = local_128;
    uVar1 = local_130;
    bVar3 = (byte)puVar11 & 1;
    local_e8 = local_108;
    uStack_e0 = local_110;
    local_d8 = local_128;
    uStack_d0 = local_130;
    local_c8 = local_120;
    uStack_c0 = local_118;
    local_f8 = ppppuVar9;
    puStack_f0 = puVar12;
    local_b8 = bVar3;
    FUN_10001fd78(&local_f8,&local_b0);
    FUN_100001428(param_2);
    local_a0 = local_108;
    uStack_98 = uVar6;
    local_90 = uVar2;
    uStack_88 = uVar1;
    local_80 = uVar4;
    uStack_78 = uVar5;
    local_b0 = ppppuVar9;
    puStack_a8 = puVar12;
    local_70 = bVar3;
    FUN_10001fdac(&local_b0);
    local_100[5] = uStack_d0;
    local_100[4] = local_d8;
    local_100[7] = uStack_c0;
    local_100[6] = local_c8;
    *(byte *)(local_100 + 8) = local_b8;
    local_100[1] = puStack_f0;
    *local_100 = local_f8;
    local_100[3] = uStack_e0;
    local_100[2] = local_e8;
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

