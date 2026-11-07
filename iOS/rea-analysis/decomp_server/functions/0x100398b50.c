// rea decompile_all
// name: FUN_100398b50
// address: 0x100398b50
// body: available
// range: 0x100398b50-0x100398be7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100398b50(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  code *local_58;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    _swift_retain(uVar1);
    FUN_10039866c(&local_58);
    _swift_release(param_2);
    _swift_release(uVar1);
    if (local_58 != (code *)0x0) {
      (*local_58)(param_1);
      FUN_10007ed2c(local_58,local_50);
    }
  }
  return;
}

