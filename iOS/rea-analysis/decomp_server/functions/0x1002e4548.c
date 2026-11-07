// rea decompile_all
// name: FUN_1002e4548
// address: 0x1002e4548
// body: available
// range: 0x1002e4548-0x1002e460f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1002e4548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  code *pcVar3;
  undefined8 local_80 [3];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined1 local_51;
  
  local_51 = 1;
  uVar1 = param_1;
  FUN_1002c3840();
  uVar2 = 0;
  FUN_1002c3ae0();
  ppuStack_60 = &PTR_PTR_1009ad490;
  pcVar3 = *(code **)(*unaff_x20 + 0x110);
  local_80[0] = uVar1;
  local_68 = uVar2;
  FUN_1002eec64();
  (*pcVar3)(param_1,param_2,&local_51,local_80,param_3,param_4,2,param_6,param_7,&DAT_1009b3910,
            uVar2);
  FUN_10003f094(local_80);
  return param_1;
}

