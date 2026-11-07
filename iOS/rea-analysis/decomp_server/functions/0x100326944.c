// rea decompile_all
// name: FUN_100326944
// address: 0x100326944
// body: available
// range: 0x100326944-0x1003269f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100326944(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  FUN_100004bb4(param_3,param_4);
  lVar2 = *(long *)(param_3 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  local_58 = param_1;
  FUN_100004bb4(param_5,param_6);
  __sScS12ContinuationV5yieldyAB11YieldResultOyx__GxnF
            (auStack_60 + -(lVar1 + 0xfU & 0xfffffffffffffff0),&local_58,param_5);
  (**(code **)(lVar2 + 8))(auStack_60 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_3);
  return;
}

