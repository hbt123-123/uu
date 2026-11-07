// rea decompile_all
// name: FUN_100466b38
// address: 0x100466b38
// body: available
// range: 0x100466b38-0x100466c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100466b38(undefined8 param_1,undefined8 param_2)

{
  long local_a0 [2];
  ulong local_90;
  ulong uStack_88;
  undefined8 local_80;
  long local_78;
  char local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  FUN_1000a0074(param_2,&local_78);
  FUN_1000a0074(param_1,local_a0);
  if (local_70 == '\x01') {
    if (local_78 < 2) {
      if (local_78 == 0) {
        if (local_a0[0] != 0) {
          return 0;
        }
      }
      else if (local_a0[0] != 1) {
        return 0;
      }
    }
    else if (local_78 == 2) {
      if (local_a0[0] != 2) {
        return 0;
      }
    }
    else if (local_78 == 3) {
      if (local_a0[0] != 3) {
        return 0;
      }
    }
    else if (local_a0[0] != 4) {
      return 0;
    }
  }
  else if (local_a0[0] != local_78) {
    return 0;
  }
  FUN_10042aa78(local_90,local_68);
  if (((local_90 & 1) != 0) &&
     (FUN_1000094a4(uStack_88,local_80,uStack_60,local_58), (uStack_88 & 1) != 0)) {
    return 1;
  }
  return 0;
}

