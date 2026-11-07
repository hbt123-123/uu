// rea decompile_all
// name: thunk_FUN_10058f200
// address: 0x10058a8d0
// body: available
// range: 0x10058a8d0-0x10058a8d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint thunk_FUN_10058f200(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                        undefined8 param_5,undefined8 param_6,ulong param_7,ulong param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_3 >> 0x20 & 1;
  uVar3 = param_4 >> 0x20 & 1;
  uVar2 = param_7 >> 0x20 & 1;
  uVar4 = param_8 >> 0x20 & 1;
  FUN_1005a46f8(param_1,param_2,param_3 & 0xffffffff | uVar1 << 0x20,
                param_4 & 0xffffffff | uVar3 << 0x20,param_5,param_6,
                param_7 & 0xffffffff | uVar2 << 0x20,param_8 & 0xffffffff | uVar4 << 0x20,
                (char)uVar4,(char)uVar2,(char)uVar3,(char)uVar1);
  return (uint)param_1 & 1;
}

