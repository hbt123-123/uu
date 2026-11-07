// rea decompile_all
// name: FUN_100178304
// address: 0x100178304
// body: available
// range: 0x100178304-0x1001783e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100178304(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
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
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined1 local_e8 [152];
  
  FUN_100091474(local_e8);
  uStack_108 = unaff_x20[0x15];
  local_110 = unaff_x20[0x14];
  uStack_f8 = unaff_x20[0x17];
  local_100 = unaff_x20[0x16];
  local_f0 = *(undefined1 *)(unaff_x20 + 0x18);
  uStack_148 = unaff_x20[0xd];
  local_150 = unaff_x20[0xc];
  uStack_138 = unaff_x20[0xf];
  local_140 = unaff_x20[0xe];
  uStack_128 = unaff_x20[0x11];
  local_130 = unaff_x20[0x10];
  uStack_118 = unaff_x20[0x13];
  local_120 = unaff_x20[0x12];
  uStack_188 = unaff_x20[5];
  local_190 = unaff_x20[4];
  uStack_178 = unaff_x20[7];
  uStack_180 = unaff_x20[6];
  uStack_168 = unaff_x20[9];
  local_170 = unaff_x20[8];
  uStack_158 = unaff_x20[0xb];
  uStack_160 = unaff_x20[10];
  uStack_1a8 = unaff_x20[1];
  local_1b0 = *unaff_x20;
  uStack_198 = unaff_x20[3];
  uStack_1a0 = unaff_x20[2];
  puVar1 = &local_1b0;
  FUN_10017b3dc();
                    /* WARNING: Could not recover jumptable at 0x0001001783e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1001783e8 +
            (ulong)*(ushort *)(&DAT_10080f8e0 + ((ulong)puVar1 & 0xffffffff) * 2) * 4))();
  return;
}

