// rea decompile_all
// name: FUN_100063524
// address: 0x100063524
// body: available
// range: 0x100063524-0x1000635f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100063524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  
  lVar1 = 0;
  __sSqMa(0,param_5);
  puVar2 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = *(long *)(param_5 + -8);
  (**(code **)(lVar1 + 0x10))(puVar2,param_2,param_5);
  (**(code **)(lVar1 + 0x38))(puVar2,0,1,param_5);
  FUN_10006221c(param_1,puVar2,param_3,param_4,param_5,param_6);
  (**(code **)(lVar1 + 8))(param_2,param_5);
  return;
}

