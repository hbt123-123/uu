// rea decompile_all
// name: FUN_10017a098
// address: 0x10017a098
// body: available
// range: 0x10017a098-0x10017a16f inclusive
// range: 0x10017a19c-0x10017a1bb inclusive
// range: 0x10017a20c-0x10017a223 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_10017a098(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
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
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  
  puVar1 = &local_170;
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x30);
  local_a0 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x50);
  local_80 = *(undefined8 *)(unaff_x20 + 0x48);
  local_68 = *(ulong *)(unaff_x20 + 0x60);
  local_70 = *(undefined8 *)(unaff_x20 + 0x58);
  if (0xe < local_68 >> 0x3c) {
    return (undefined1 *)0x0;
  }
  FUN_100008184(local_70);
  if (DAT_100a73b98 != -1) {
    _swift_once(&DAT_100a73b98,FUN_100178a1c);
  }
  uStack_c8 = param_1[0x15];
  local_d0 = param_1[0x14];
  uStack_b8 = param_1[0x17];
  uStack_c0 = param_1[0x16];
  local_b0 = *(undefined1 *)(param_1 + 0x18);
  uStack_108 = param_1[0xd];
  local_110 = param_1[0xc];
  uStack_f8 = param_1[0xf];
  uStack_100 = param_1[0xe];
  uStack_e8 = param_1[0x11];
  local_f0 = param_1[0x10];
  uStack_d8 = param_1[0x13];
  uStack_e0 = param_1[0x12];
  uStack_148 = param_1[5];
  local_150 = param_1[4];
  uStack_138 = param_1[7];
  uStack_140 = param_1[6];
  uStack_128 = param_1[9];
  local_130 = param_1[8];
  uStack_118 = param_1[0xb];
  uStack_120 = param_1[10];
  uStack_168 = param_1[1];
  local_170 = *param_1;
  uStack_158 = param_1[3];
  uStack_160 = param_1[2];
  FUN_10017b3dc();
                    /* WARNING: Could not recover jumptable at 0x00010017a16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_10017a170 + (ulong)(byte)(&DAT_10080f902)[(ulong)puVar1 & 0xffffffff] * 4))();
  return (undefined1 *)puVar1;
}

