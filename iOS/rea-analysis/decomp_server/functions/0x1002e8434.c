// rea decompile_all
// name: FUN_1002e8434
// address: 0x1002e8434
// body: available
// range: 0x1002e8434-0x1002e84eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e8434(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined1 local_70 [8];
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  
  lVar1 = 0;
  FUN_100277ad0();
  puVar2 = auStack_90 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_getErrorValue(param_2,auStack_58,local_70);
  local_80 = param_2;
  FUN_100277c6c(puVar2,param_3,auStack_90,uStack_68,local_60);
  (*param_4)(puVar2);
  FUN_1000d27dc(puVar2,FUN_100277ad0);
  return;
}

