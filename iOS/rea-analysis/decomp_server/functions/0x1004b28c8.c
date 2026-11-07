// rea decompile_all
// name: FUN_1004b28c8
// address: 0x1004b28c8
// body: available
// range: 0x1004b28c8-0x1004b29af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004b28c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50;
  
  iVar1 = (int)&local_160;
  uStack_f8 = unaff_x20[0xd];
  local_100 = unaff_x20[0xc];
  uStack_e8 = unaff_x20[0xf];
  uStack_f0 = unaff_x20[0xe];
  local_e0 = *(undefined1 *)(unaff_x20 + 0x10);
  uStack_138 = unaff_x20[5];
  local_140 = unaff_x20[4];
  uStack_128 = unaff_x20[7];
  uStack_130 = unaff_x20[6];
  uStack_118 = unaff_x20[9];
  local_120 = unaff_x20[8];
  uStack_108 = unaff_x20[0xb];
  uStack_110 = unaff_x20[10];
  uStack_158 = unaff_x20[1];
  local_160 = *unaff_x20;
  uStack_148 = unaff_x20[3];
  uStack_150 = unaff_x20[2];
  FUN_1001241c4();
  if (iVar1 == 1) {
    FUN_10056301c(param_1,unaff_x20[0x11],unaff_x20[0x12],param_2,param_3);
    return;
  }
  uStack_68 = uStack_f8;
  local_70 = local_100;
  uStack_58 = uStack_e8;
  uStack_60 = uStack_f0;
  local_50 = local_e0;
  uStack_a8 = uStack_138;
  local_b0 = local_140;
  uStack_98 = uStack_128;
  uStack_a0 = uStack_130;
  uStack_88 = uStack_118;
  local_90 = local_120;
  uStack_78 = uStack_108;
  uStack_80 = uStack_110;
  uStack_c8 = uStack_158;
  local_d0 = local_160;
  uStack_b8 = uStack_148;
  uStack_c0 = uStack_150;
  puVar2 = &local_d0;
  FUN_1001241ec();
  FUN_100124204(&local_d0);
                    /* WARNING: Could not recover jumptable at 0x0001004b29ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1004b29b0 + (ulong)(byte)(&DAT_10083015d)[(ulong)puVar2 & 0xffffffff] * 4))();
  return;
}

