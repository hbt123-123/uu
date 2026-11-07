// rea decompile_all
// name: FUN_1002673b8
// address: 0x1002673b8
// body: available
// range: 0x1002673b8-0x10026744f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002673b8(undefined8 param_1,undefined8 param_2,uint param_3,long *param_4,
                  undefined8 param_5,code *param_6)

{
  ulong uVar1;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  uStack_68 = *(undefined8 *)(*param_4 + 0x58);
  local_70 = *(undefined8 *)(*param_4 + 0x50);
  uVar1 = (ulong)(param_3 & 0x1ff);
  local_60 = param_5;
  FUN_1002675f0(param_1,param_2,uVar1,FUN_10026b83c,auStack_80,param_4[9]);
  (*param_6)();
  FUN_10025fdac(param_1,param_2,uVar1,(uint)uVar1 >> 8 & 1);
  return;
}

