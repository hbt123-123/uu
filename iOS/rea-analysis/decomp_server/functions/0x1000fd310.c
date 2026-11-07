// rea decompile_all
// name: FUN_1000fd310
// address: 0x1000fd310
// body: available
// range: 0x1000fd310-0x1000fd3bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000fd310(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*param_1 + 0x90);
  _swift_unknownObjectRetain(param_2);
  (*pcVar2)(param_2,&PTR_PTR_10099cbb0);
  uVar1 = 0;
  FUN_100401b14(0);
  FUN_1003fb48c(uVar1,FUN_10010345c,param_1,0xd000000000000094,0x800000010088a280,0xd000000000000012
                ,0x800000010088a680,0x21,0);
  return;
}

