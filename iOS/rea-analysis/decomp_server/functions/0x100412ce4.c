// rea decompile_all
// name: FUN_100412ce4
// address: 0x100412ce4
// body: available
// range: 0x100412ce4-0x10041300b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100412ee8) */

void FUN_100412ce4(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a1;
  undefined1 local_1a0;
  undefined7 uStack_19f;
  undefined8 uStack_198;
  undefined1 local_181;
  undefined1 local_180;
  undefined7 uStack_17f;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  
  puVar3 = &DAT_100a8e4d8;
  FUN_100004bb4(&DAT_100a8e4d8,&DAT_100825778);
  lVar8 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = *(undefined8 *)(param_3 + 0x18);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  lVar4 = param_3;
  FUN_10003f030(param_3,uVar9);
  FUN_10041297c();
  puVar5 = &DAT_1009bccb0;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_1d0 - extraout_x8,&DAT_1009bccb0,&DAT_1009bccb0,lVar4,uVar9,uVar1);
  if (unaff_x21 == 0) {
    local_1a0 = 0;
    FUN_100414184();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_180,&DAT_1009bc8e8,&local_1a0,puVar3,&DAT_1009bc8e8,puVar5);
    uVar2 = local_180;
    local_180 = 1;
    puVar6 = &local_180;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar6,puVar3);
    local_1a8 = SUB84(puVar6,0);
    local_180 = 2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_180,puVar3);
    local_180 = 3;
    puVar6 = &local_180;
    uVar9 = param_2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar6,puVar3);
    local_180 = 4;
    puVar7 = &local_180;
    local_1b0 = puVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar7,puVar3);
    local_180 = 5;
    puVar6 = &local_180;
    local_1b8 = puVar7;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(puVar6,puVar3);
    local_181 = 6;
    FUN_1004141c4();
    puVar5 = &DAT_1009bd2b0;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_180,&DAT_1009bd2b0,&local_181,puVar3,&DAT_1009bd2b0,puVar6);
    uStack_b8 = uStack_138;
    local_c0 = local_140;
    uStack_a8 = uStack_128;
    uStack_b0 = uStack_130;
    uStack_98 = uStack_118;
    local_a0 = local_120;
    uStack_8f = uStack_10f;
    uStack_97 = uStack_117;
    uStack_90 = uStack_110;
    local_100 = CONCAT71(uStack_17f,local_180);
    uStack_f8 = uStack_178;
    uStack_e8 = uStack_168;
    uStack_f0 = uStack_170;
    uStack_d8 = uStack_158;
    local_e0 = local_160;
    uStack_c8 = uStack_148;
    uStack_d0 = uStack_150;
    local_1a1 = 7;
    FUN_100414204();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_1a0,&DAT_1009bcb80,&local_1a1,puVar3,&DAT_1009bcb80,puVar5);
    (**(code **)(lVar8 + 8))((long)&local_1d0 - extraout_x8,puVar3);
    local_1d0 = CONCAT71(uStack_19f,local_1a0);
    uStack_1c8 = uStack_198;
    FUN_10003f094(param_3);
    *param_1 = uVar2;
    *(undefined4 *)(param_1 + 4) = local_1a8;
    *(undefined8 *)(param_1 + 8) = param_2;
    *(undefined1 **)(param_1 + 0x10) = local_1b0;
    *(undefined1 **)(param_1 + 0x18) = local_1b8;
    *(undefined8 *)(param_1 + 0x20) = uVar9;
    *(undefined8 *)(param_1 + 0x70) = uStack_b8;
    *(undefined8 *)(param_1 + 0x68) = local_c0;
    *(undefined8 *)(param_1 + 0x80) = uStack_a8;
    *(undefined8 *)(param_1 + 0x78) = uStack_b0;
    *(ulong *)(param_1 + 0x90) = CONCAT71(uStack_97,uStack_98);
    *(undefined8 *)(param_1 + 0x88) = local_a0;
    *(undefined8 *)(param_1 + 0x99) = uStack_8f;
    *(ulong *)(param_1 + 0x91) = CONCAT17(uStack_90,uStack_97);
    *(undefined8 *)(param_1 + 0x30) = uStack_f8;
    *(undefined8 *)(param_1 + 0x28) = local_100;
    *(undefined8 *)(param_1 + 0x40) = uStack_e8;
    *(undefined8 *)(param_1 + 0x38) = uStack_f0;
    *(undefined8 *)(param_1 + 0x50) = uStack_d8;
    *(undefined8 *)(param_1 + 0x48) = local_e0;
    *(undefined8 *)(param_1 + 0x60) = uStack_c8;
    *(undefined8 *)(param_1 + 0x58) = uStack_d0;
    *(undefined8 *)(param_1 + 0xb0) = uStack_1c8;
    *(undefined8 *)(param_1 + 0xa8) = local_1d0;
  }
  else {
    FUN_10003f094(param_3);
  }
  return;
}

