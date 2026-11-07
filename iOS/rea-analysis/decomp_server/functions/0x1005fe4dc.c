// rea decompile_all
// name: FUN_1005fe4dc
// address: 0x1005fe4dc
// body: available
// range: 0x1005fe4dc-0x1005fe75b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005fe4dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar5;
  ulong local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  ulong local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_51;
  
  puVar3 = &DAT_100aaf978;
  FUN_100004bb4(&DAT_100aaf978,&BYTE_1008473b8);
  lVar5 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1005ffe4c();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            ((long)&local_280 - extraout_x8,&DAT_1009dd760,&DAT_1009dd760,param_1,uVar1,uVar2);
  local_1d0 = local_1d0 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(*unaff_x20,unaff_x20[1],&local_1d0,puVar3);
  if (unaff_x21 == 0) {
    local_1d0._0_1_ = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (unaff_x20[2],unaff_x20[3],&local_1d0,puVar3);
    local_1d0._0_1_ = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF
              (unaff_x20[4],unaff_x20[5],&local_1d0,puVar3);
    local_1d0._0_1_ = 3;
    local_280 = CONCAT71(local_280._1_7_,*(undefined1 *)((long)unaff_x20 + 0x34));
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyys5Int32VSg_xtKF
              ((ulong)*(uint5 *)(unaff_x20 + 6),&local_1d0,puVar3);
    local_1d0 = CONCAT71(local_1d0._1_7_,4);
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF
              (*(undefined4 *)(unaff_x20 + 7),&local_1d0,puVar3);
    uStack_158 = unaff_x20[0x17];
    uStack_160 = unaff_x20[0x16];
    uStack_98 = unaff_x20[0x19];
    local_a0 = unaff_x20[0x18];
    uStack_148 = unaff_x20[0x19];
    local_150 = unaff_x20[0x18];
    uStack_88 = unaff_x20[0x1b];
    uStack_90 = unaff_x20[0x1a];
    uStack_138 = unaff_x20[0x1b];
    uStack_140 = unaff_x20[0x1a];
    uStack_78 = unaff_x20[0x1d];
    local_80 = unaff_x20[0x1c];
    uStack_198 = unaff_x20[0xf];
    uStack_1a0 = unaff_x20[0xe];
    uStack_d8 = unaff_x20[0x11];
    local_e0 = unaff_x20[0x10];
    uStack_188 = unaff_x20[0x11];
    local_190 = unaff_x20[0x10];
    uStack_c8 = unaff_x20[0x13];
    uStack_d0 = unaff_x20[0x12];
    uStack_178 = unaff_x20[0x13];
    uStack_180 = unaff_x20[0x12];
    uStack_b8 = unaff_x20[0x15];
    local_c0 = unaff_x20[0x14];
    uStack_168 = unaff_x20[0x15];
    local_170 = unaff_x20[0x14];
    uStack_a8 = unaff_x20[0x17];
    uStack_b0 = unaff_x20[0x16];
    uStack_118 = unaff_x20[9];
    local_120 = unaff_x20[8];
    uStack_108 = unaff_x20[0xb];
    uStack_110 = unaff_x20[10];
    uStack_f8 = unaff_x20[0xd];
    local_100 = unaff_x20[0xc];
    uStack_e8 = unaff_x20[0xf];
    uStack_f0 = unaff_x20[0xe];
    uStack_1c8 = unaff_x20[9];
    local_1d0 = unaff_x20[8];
    uStack_1b8 = unaff_x20[0xb];
    uStack_1c0 = unaff_x20[10];
    uStack_1a8 = unaff_x20[0xd];
    local_1b0 = unaff_x20[0xc];
    uStack_128 = unaff_x20[0x1d];
    local_130 = unaff_x20[0x1c];
    local_51 = 5;
    puVar4 = &local_120;
    FUN_10007f314(puVar4,&local_280,&DAT_100aaf970,&BYTE_1008473b0);
    FUN_1005e8a0c();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_1d0,&local_51,puVar3,&DAT_1009dd308,puVar4);
    uStack_1f8 = uStack_148;
    local_200 = local_150;
    uStack_1e8 = uStack_138;
    uStack_1f0 = uStack_140;
    uStack_1d8 = uStack_128;
    local_1e0 = local_130;
    uStack_238 = uStack_188;
    local_240 = local_190;
    uStack_228 = uStack_178;
    uStack_230 = uStack_180;
    uStack_218 = uStack_168;
    local_220 = local_170;
    uStack_208 = uStack_158;
    uStack_210 = uStack_160;
    uStack_278 = uStack_1c8;
    local_280 = local_1d0;
    uStack_268 = uStack_1b8;
    uStack_270 = uStack_1c0;
    uStack_258 = uStack_1a8;
    local_260 = local_1b0;
    uStack_248 = uStack_198;
    uStack_250 = uStack_1a0;
    FUN_1005ffe8c(&local_280);
  }
  (**(code **)(lVar5 + 8))((long)&local_280 - extraout_x8,puVar3);
  return;
}

