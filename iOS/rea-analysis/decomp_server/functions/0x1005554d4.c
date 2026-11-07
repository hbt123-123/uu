// rea decompile_all
// name: FUN_1005554d4
// address: 0x1005554d4
// body: available
// range: 0x1005554d4-0x10055561f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005554d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 auStack_c8 [24];
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined1 auStack_78 [40];
  
  FUN_10007f314();
  if (local_b0 == 0) {
    FUN_100040bb4(auStack_c8,&DAT_100aaa0e8,&DAT_1008358c0);
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
    local_80 = 0;
  }
  else {
    FUN_10003f030(auStack_c8,local_b0);
    (**(code **)(local_a8 + 8))(&local_a0,param_2,param_3,param_4,local_b0,local_a8);
    FUN_10003f094(auStack_c8);
    if (local_88 != 0) {
      thunk_FUN_1000a0074(&local_a0,auStack_78);
      pcVar1 = (code *)&local_a0;
      FUN_100505f7c(pcVar1,param_4);
      FUN_100555620(param_4);
      (*pcVar1)(&local_a0,0);
      FUN_10003f094(auStack_78);
      return;
    }
  }
  FUN_100040bb4(&local_a0,&DAT_100aaa280,&DAT_100835b68);
  return;
}

