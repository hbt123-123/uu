// rea decompile_all
// name: FUN_1003b43b8
// address: 0x1003b43b8
// body: available
// range: 0x1003b43b8-0x1003b441f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b43b8(undefined8 *param_1)

{
  long unaff_x21;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined3 uStack_38;
  undefined5 local_35;
  undefined3 uStack_30;
  undefined8 uStack_2d;
  
  FUN_1003b7f78(&local_f0);
  if (unaff_x21 == 0) {
    param_1[0x15] = uStack_48;
    param_1[0x14] = local_50;
    param_1[0x17] = CONCAT53(local_35,uStack_38);
    param_1[0x16] = uStack_40;
    *(undefined8 *)((long)param_1 + 0xc3) = uStack_2d;
    *(ulong *)((long)param_1 + 0xbb) = CONCAT35(uStack_30,local_35);
    param_1[0xd] = uStack_88;
    param_1[0xc] = local_90;
    param_1[0xf] = uStack_78;
    param_1[0xe] = uStack_80;
    param_1[0x11] = uStack_68;
    param_1[0x10] = local_70;
    param_1[0x13] = uStack_58;
    param_1[0x12] = uStack_60;
    param_1[5] = uStack_c8;
    param_1[4] = local_d0;
    param_1[7] = uStack_b8;
    param_1[6] = uStack_c0;
    param_1[9] = uStack_a8;
    param_1[8] = local_b0;
    param_1[0xb] = uStack_98;
    param_1[10] = uStack_a0;
    param_1[1] = uStack_e8;
    *param_1 = local_f0;
    param_1[3] = uStack_d8;
    param_1[2] = uStack_e0;
  }
  return;
}

