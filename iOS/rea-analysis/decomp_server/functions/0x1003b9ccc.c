// rea decompile_all
// name: FUN_1003b9ccc
// address: 0x1003b9ccc
// body: available
// range: 0x1003b9ccc-0x1003ba08b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003b9ed4) */
/* WARNING: Removing unreachable block (ram,0x0001003b9e5c) */
/* WARNING: Removing unreachable block (ram,0x0001003b9ef0) */
/* WARNING: Removing unreachable block (ram,0x0001003b9f14) */
/* WARNING: Removing unreachable block (ram,0x0001003b9dbc) */

void FUN_1003b9ccc(ulong *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long extraout_x8;
  long unaff_x21;
  long lVar13;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  ulong local_198;
  ulong local_190;
  ulong local_188;
  ulong local_180;
  ulong local_178;
  ulong local_170;
  ulong local_168;
  ulong *local_160;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  ulong uStack_140;
  ulong local_138;
  ulong uStack_130;
  ulong local_128;
  ulong uStack_120;
  ulong local_118;
  ulong uStack_110;
  ulong local_108;
  ulong uStack_100;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  undefined1 local_51;
  
  puVar10 = &DAT_100a8c090;
  FUN_100004bb4(&DAT_100a8c090,&DAT_100822200);
  lVar13 = *(long *)(puVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar11 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1003b9be0();
  puVar12 = &DAT_1009b8bb8;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_1b0 - extraout_x8,&DAT_1009b8bb8,&DAT_1009b8bb8,lVar11,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_148 = local_148 & 0xffffffffffffff00;
    FUN_1003bd6a4();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_e8,&DAT_1009b8868,&local_148,puVar10,&DAT_1009b8868,puVar12);
    uVar3 = local_d8;
    local_168 = local_e8;
    local_150 = uStack_e0;
    local_158 = uStack_d0;
    local_148 = CONCAT71(local_148._1_7_,1);
    local_160 = param_1;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_e8,&DAT_1009b8868,&local_148,puVar10,&DAT_1009b8868,puVar12);
    local_178 = uVar3;
    local_180 = local_e8;
    local_170 = uStack_e0;
    local_188 = local_d8;
    local_51 = 2;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_88,&DAT_1009b8868,&local_51,puVar10,&DAT_1009b8868,puVar12);
    (**(code **)(lVar13 + 8))((long)&local_1b0 - extraout_x8,puVar10);
    uVar9 = local_150;
    uVar8 = local_158;
    uVar7 = local_168;
    uVar6 = local_170;
    uVar5 = local_178;
    uVar4 = local_180;
    uVar3 = local_188;
    local_190 = local_88;
    local_198 = local_80;
    local_1a0 = local_78;
    local_1a8 = local_70;
    local_148 = local_168;
    uStack_140 = local_150;
    local_138 = local_178;
    local_1b0 = uStack_d0;
    uStack_130 = local_158;
    local_128 = local_180;
    uStack_120 = local_170;
    local_118 = local_188;
    uStack_110 = uStack_d0;
    local_108 = local_88;
    uStack_100 = local_80;
    local_f8 = local_78;
    uStack_f0 = local_70;
    FUN_1003bd6e4(&local_148,&local_e8);
    FUN_10003f094(param_2);
    local_e8 = uVar7;
    uStack_e0 = uVar9;
    local_d8 = uVar5;
    uStack_d0 = uVar8;
    local_c8 = uVar4;
    uStack_c0 = uVar6;
    local_b8 = uVar3;
    uStack_b0 = local_1b0;
    local_a8 = local_190;
    uStack_a0 = local_198;
    local_98 = local_1a0;
    uStack_90 = local_1a8;
    FUN_1003bd718(&local_e8);
    local_160[5] = uStack_120;
    local_160[4] = local_128;
    local_160[7] = uStack_110;
    local_160[6] = local_118;
    local_160[9] = uStack_100;
    local_160[8] = local_108;
    local_160[0xb] = uStack_f0;
    local_160[10] = local_f8;
    local_160[1] = uStack_140;
    *local_160 = local_148;
    local_160[3] = uStack_130;
    local_160[2] = local_138;
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

