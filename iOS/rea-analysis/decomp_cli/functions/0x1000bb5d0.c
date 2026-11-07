// rea decompile_all
// name: FUN_1000bb5d0
// address: 0x1000bb5d0
// body: available
// range: 0x1000bb5d0-0x1000bb7c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000bb6dc) */

void FUN_1000bb5d0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_210 [8];
  undefined8 ***local_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long local_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long local_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long local_1a8;
  undefined8 ***local_1a0;
  long local_198;
  long lStack_190;
  long local_188;
  long lStack_180;
  long local_178;
  long lStack_170;
  long local_168;
  long lStack_160;
  long local_158;
  long lStack_150;
  long local_148;
  long lStack_140;
  undefined1 local_131;
  long local_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  puVar3 = &DAT_100105388;
  FUN_10000eb08(&DAT_100105388,&DAT_1000d82f0);
  lVar8 = *(long *)(puVar3 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10000eba0(param_2,uVar1);
  FUN_1000bb51c();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_210 + -(lVar7 + 0xfU & 0xfffffffffffffff0),&DAT_1000fc0a0,&DAT_1000fc0a0,lVar4,
             uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_1a0 = (undefined8 ***)((ulong)local_1a0 & 0xffffffffffffff00);
    ppppuVar5 = &local_1a0;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(ppppuVar5,puVar3);
    local_131 = 1;
    ppppuVar6 = ppppuVar5;
    FUN_1000c0488();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_130,&DAT_1000fb808,&local_131,puVar3,&DAT_1000fb808,ppppuVar6);
    (**(code **)(lVar8 + 8))(auStack_210 + -(lVar7 + 0xfU & 0xfffffffffffffff0),puVar3);
    lStack_a8 = lStack_108;
    local_b0 = local_110;
    lStack_98 = lStack_f8;
    lStack_a0 = lStack_100;
    lStack_88 = lStack_e8;
    local_90 = local_f0;
    lStack_78 = lStack_d8;
    lStack_80 = lStack_e0;
    lStack_c8 = lStack_128;
    local_d0 = local_130;
    lStack_b8 = lStack_118;
    lStack_c0 = lStack_120;
    lStack_1b8 = lStack_e8;
    local_1c0 = local_f0;
    local_1a8 = lStack_d8;
    lStack_1b0 = lStack_e0;
    lStack_1d8 = lStack_108;
    local_1e0 = local_110;
    lStack_1c8 = lStack_f8;
    lStack_1d0 = lStack_100;
    lStack_1f8 = lStack_128;
    lStack_200 = local_130;
    lStack_1e8 = lStack_118;
    lStack_1f0 = lStack_120;
    local_208 = ppppuVar5;
    FUN_1000bb55c(&local_208,&local_1a0);
    FUN_100001428(param_2);
    lStack_170 = lStack_a8;
    local_178 = local_b0;
    lStack_160 = lStack_98;
    local_168 = lStack_a0;
    lStack_150 = lStack_88;
    local_158 = local_90;
    lStack_140 = lStack_78;
    local_148 = lStack_80;
    lStack_190 = lStack_c8;
    local_198 = local_d0;
    lStack_180 = lStack_b8;
    local_188 = lStack_c0;
    local_1a0 = ppppuVar5;
    FUN_1000c0578(&local_1a0);
    param_1[9] = local_1c0;
    param_1[8] = lStack_1c8;
    param_1[0xb] = lStack_1b0;
    param_1[10] = lStack_1b8;
    param_1[0xc] = local_1a8;
    param_1[1] = lStack_200;
    *param_1 = (long)local_208;
    param_1[3] = lStack_1f0;
    param_1[2] = lStack_1f8;
    param_1[5] = local_1e0;
    param_1[4] = lStack_1e8;
    param_1[7] = lStack_1d0;
    param_1[6] = lStack_1d8;
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

