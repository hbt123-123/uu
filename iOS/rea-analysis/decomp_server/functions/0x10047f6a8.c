// rea decompile_all
// name: FUN_10047f6a8
// address: 0x10047f6a8
// body: available
// range: 0x10047f6a8-0x10047f72f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10047f6a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 local_230;
  
  uStack_2e8 = param_1[1];
  local_2f0 = *param_1;
  uStack_2d8 = param_1[3];
  uStack_2e0 = param_1[2];
  uStack_2c8 = param_1[5];
  local_2d0 = param_1[4];
  uStack_2b8 = param_1[7];
  uStack_2c0 = param_1[6];
  uStack_2a8 = param_1[9];
  local_2b0 = param_1[8];
  uStack_298 = param_1[0xb];
  uStack_2a0 = param_1[10];
  uStack_288 = param_1[0xd];
  local_290 = param_1[0xc];
  uStack_278 = param_1[0xf];
  uStack_280 = param_1[0xe];
  uStack_268 = param_1[0x11];
  local_270 = param_1[0x10];
  uStack_258 = param_1[0x13];
  uStack_260 = param_1[0x12];
  uStack_248 = param_1[0x15];
  local_250 = param_1[0x14];
  uStack_238 = param_1[0x17];
  uStack_240 = param_1[0x16];
  local_230 = *(undefined1 *)(param_1 + 0x18);
  puVar1 = &local_2f0;
  FUN_100121900();
                    /* WARNING: Could not recover jumptable at 0x00010047f72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_10047f730 +
            (ulong)*(ushort *)(&DAT_10082da86 + ((ulong)puVar1 & 0xffffffff) * 2) * 4))();
  return;
}

