// rea decompile_all
// name: FUN_1004dc3f4
// address: 0x1004dc3f4
// body: available
// range: 0x1004dc3f4-0x1004dc497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004dc3f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  
  uStack_348 = param_1[1];
  local_350 = *param_1;
  uStack_338 = param_1[3];
  local_340 = param_1[2];
  uStack_328 = param_1[5];
  local_330 = param_1[4];
  uStack_318 = param_1[7];
  local_320 = param_1[6];
  uStack_308 = param_1[9];
  local_310 = param_1[8];
  uStack_2f8 = param_1[0xb];
  local_300 = param_1[10];
  uStack_2e8 = param_1[0xd];
  local_2f0 = param_1[0xc];
  uStack_2d8 = param_1[0xf];
  local_2e0 = param_1[0xe];
  uStack_2c8 = param_1[0x11];
  local_2d0 = param_1[0x10];
  local_2c0 = param_1[0x12];
  puVar1 = &local_350;
  FUN_100040948();
  FUN_100040964(&local_350);
                    /* WARNING: Could not recover jumptable at 0x0001004dc494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1004ddbd4 + ((ulong)puVar1 & 0xffffffff) * 4) + 0x1004dc488))();
  return;
}

