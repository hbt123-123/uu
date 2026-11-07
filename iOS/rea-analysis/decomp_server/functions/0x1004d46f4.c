// rea decompile_all
// name: FUN_1004d46f4
// address: 0x1004d46f4
// body: available
// range: 0x1004d46f4-0x1004d4813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004d46f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  long unaff_x21;
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
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  iVar1 = (int)&local_190;
  FUN_1004d4b24();
  if (unaff_x21 == 0) {
    uStack_128 = unaff_x20[0xd];
    local_130 = unaff_x20[0xc];
    uStack_118 = unaff_x20[0xf];
    uStack_120 = unaff_x20[0xe];
    uStack_108 = unaff_x20[0x11];
    local_110 = unaff_x20[0x10];
    local_100 = unaff_x20[0x12];
    uStack_168 = unaff_x20[5];
    local_170 = unaff_x20[4];
    uStack_158 = unaff_x20[7];
    uStack_160 = unaff_x20[6];
    uStack_148 = unaff_x20[9];
    local_150 = unaff_x20[8];
    uStack_138 = unaff_x20[0xb];
    uStack_140 = unaff_x20[10];
    uStack_188 = unaff_x20[1];
    local_190 = *unaff_x20;
    uStack_178 = unaff_x20[3];
    uStack_180 = unaff_x20[2];
    FUN_100040934();
    if (iVar1 != 1) {
      uStack_88 = uStack_128;
      local_90 = local_130;
      uStack_78 = uStack_118;
      uStack_80 = uStack_120;
      uStack_68 = uStack_108;
      local_70 = local_110;
      local_60 = local_100;
      uStack_c8 = uStack_168;
      local_d0 = local_170;
      uStack_b8 = uStack_158;
      uStack_c0 = uStack_160;
      uStack_a8 = uStack_148;
      local_b0 = local_150;
      uStack_98 = uStack_138;
      uStack_a0 = uStack_140;
      uStack_e8 = uStack_188;
      local_f0 = local_190;
      uStack_d8 = uStack_178;
      uStack_e0 = uStack_180;
      puVar2 = &local_f0;
      FUN_100040948();
      FUN_100040964(&local_f0);
                    /* WARNING: Could not recover jumptable at 0x0001004d4810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1004d4814 + (ulong)(byte)(&DAT_10083202d)[(ulong)puVar2 & 0xffffffff] * 4))();
      return;
    }
    FUN_10056301c(param_1,unaff_x20[0x13],unaff_x20[0x14],param_2,param_3);
  }
  return;
}

