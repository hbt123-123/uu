// rea decompile_all
// name: FUN_1003e214c
// address: 0x1003e214c
// body: available
// range: 0x1003e214c-0x1003e2237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003e2234 to 0x10007ed2c FUN_10007ed2c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e214c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  
  if (param_6 == 0) {
    pcVar3 = (code *)0x0;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_1009ba810;
    _swift_allocObject(&DAT_1009ba810,0x20,7);
    *(long *)(puVar2 + 0x10) = param_6;
    *(undefined8 *)(puVar2 + 0x18) = param_7;
    pcVar3 = FUN_1003e2484;
  }
  FUN_10004090c(param_6,param_7);
  FUN_1003bd7f4();
  lVar1 = param_6;
  FUN_1003b7f38();
  FUN_1003df750(param_1,param_2,param_3,param_4,param_5,pcVar3,puVar2,param_8,param_9,&DAT_1009e6360
                ,param_6,lVar1);
  FUN_10007ed2c(pcVar3,puVar2);
  return;
}

