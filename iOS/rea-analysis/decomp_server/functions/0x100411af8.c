// rea decompile_all
// name: FUN_100411af8
// address: 0x100411af8
// body: available
// range: 0x100411af8-0x100411dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100411c88) */
/* WARNING: Removing unreachable block (ram,0x000100411be8) */

void FUN_100411af8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_170 [12];
  uint local_164;
  undefined8 local_160;
  undefined8 local_158;
  uint local_14c;
  undefined8 local_148;
  uint local_13c;
  undefined8 local_138;
  undefined1 local_130;
  undefined7 uStack_12f;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined8 local_110;
  byte bStack_108;
  undefined7 uStack_107;
  undefined8 local_100;
  undefined8 uStack_f8;
  byte local_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  byte local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined8 local_98;
  byte local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  byte local_78;
  undefined8 local_70;
  undefined1 local_51;
  
  puVar4 = &DAT_100a8e528;
  FUN_100004bb4(&DAT_100a8e528,&DAT_1008257a8);
  lVar7 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_100411a78();
  puVar6 = &DAT_1009bcf68;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_170 + -extraout_x8,&DAT_1009bcf68,&DAT_1009bcf68,lVar5,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_130 = 0;
    FUN_100414364();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (local_e0,&DAT_1009bca60,&local_130,puVar4,&DAT_1009bca60,puVar6);
    local_138 = local_d8;
    local_13c = (uint)local_c8;
    local_148 = local_c0;
    local_51 = 1;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (local_90,&DAT_1009bca60,&local_51,puVar4,&DAT_1009bca60,puVar6);
    (**(code **)(lVar7 + 8))(auStack_170 + -extraout_x8,puVar4);
    uVar2 = local_138;
    uVar1 = local_148;
    local_14c = (uint)local_90[0];
    local_158 = local_88;
    local_160 = local_80;
    local_164 = (uint)local_78;
    local_130 = local_e0[0];
    uStack_128 = local_138;
    local_120 = uStack_d0;
    uVar3 = (undefined1)local_13c;
    local_110 = local_148;
    bStack_108 = local_90[0];
    local_100 = local_88;
    uStack_f8 = local_80;
    local_f0 = local_78;
    uStack_e8 = local_70;
    uStack_118 = uVar3;
    FUN_10040ea7c(&local_130,local_e0);
    FUN_10003f094(param_2);
    local_d8 = uVar2;
    local_c0 = uVar1;
    local_b8 = (undefined1)local_14c;
    local_b0 = local_158;
    uStack_a8 = local_160;
    local_a0 = (undefined1)local_164;
    local_98 = local_70;
    local_c8 = uVar3;
    FUN_10040f0a0(local_e0);
    param_1[5] = CONCAT71(uStack_107,bStack_108);
    param_1[4] = local_110;
    param_1[7] = uStack_f8;
    param_1[6] = local_100;
    param_1[9] = uStack_e8;
    param_1[8] = CONCAT71(uStack_ef,local_f0);
    param_1[1] = uStack_128;
    *param_1 = CONCAT71(uStack_12f,local_130);
    param_1[3] = CONCAT71(uStack_117,uStack_118);
    param_1[2] = local_120;
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

