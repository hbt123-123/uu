// rea decompile_all
// name: FUN_10022c690
// address: 0x10022c690
// body: available
// range: 0x10022c690-0x10022c777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10022c774 to 0x1007deec0 _signal (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10022c690(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  
  if (DAT_100a7f1f0 == '\x01') {
    _NSGetUncaughtExceptionHandler();
    if (param_1 == 0) {
      pcVar4 = (code *)0x0;
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = &DAT_1009a64a0;
      _swift_allocObject(&DAT_1009a64a0,0x18,7);
      *(long *)(puVar3 + 0x10) = param_1;
      pcVar4 = FUN_10022c8c8;
    }
    uVar2 = DAT_100a7ef50;
    uVar1 = DAT_100a7ef48;
    DAT_100a7ef48 = pcVar4;
    DAT_100a7ef50 = puVar3;
    FUN_10007ed2c(uVar1,uVar2);
    _NSSetUncaughtExceptionHandler(FUN_10022c86c);
    _signal(6,thunk_FUN_10022c8d0);
    _signal(4,thunk_FUN_10022c8d0);
    _signal(0xb,thunk_FUN_10022c8d0);
    _signal(8,thunk_FUN_10022c8d0);
    _signal(10,thunk_FUN_10022c8d0);
    _signal(0xd,thunk_FUN_10022c8d0);
    _signal(5,thunk_FUN_10022c8d0);
    _signal(0x1e,thunk_FUN_10022c8d0);
    return;
  }
  return;
}

