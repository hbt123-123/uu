// rea decompile_all
// name: FUN_10024f6c4
// address: 0x10024f6c4
// body: available
// range: 0x10024f6c4-0x10024f74f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10024f6c4(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  
  FUN_10024f750(param_1,&local_c0,0,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((param_2 != (undefined8 *)0x0) && (param_1 == 0)) {
    param_2[1] = uStack_b8;
    *param_2 = local_c0;
    param_2[3] = uStack_a8;
    param_2[2] = uStack_b0;
    param_2[8] = local_80;
    param_2[9] = lStack_78 - local_30;
    param_2[0xb] = uStack_68;
    param_2[10] = local_70;
    param_2[0xd] = uStack_58;
    param_2[0xc] = uStack_60;
    param_2[0xf] = uStack_48;
    param_2[0xe] = local_50;
    param_2[0x10] = local_40;
    param_2[5] = uStack_98;
    param_2[4] = local_a0;
    param_2[7] = uStack_88;
    param_2[6] = uStack_90;
  }
  return;
}

