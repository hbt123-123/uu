// rea decompile_all
// name: FUN_1003e5c88
// address: 0x1003e5c88
// body: available
// range: 0x1003e5c88-0x1003e5d63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e5c88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_70,0x21,0);
    uVar1 = 0;
    __sSaMa(0,param_4);
    puVar2 = PTR___sSayxGSMsMc_100995890;
    _swift_getWitnessTable(PTR___sSayxGSMsMc_100995890,uVar1);
    puVar3 = PTR___sSayxGSmsMc_1009958b8;
    _swift_getWitnessTable(PTR___sSayxGSmsMc_1009958b8,uVar1);
    __sSmsSMRzrlE9removeAll5whereySb7ElementSTQzKXE_tKF(param_2,param_3,uVar1,puVar2,puVar3);
    _swift_endAccess(auStack_70);
    _swift_release(param_1);
  }
  return;
}

