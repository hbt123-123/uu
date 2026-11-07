// rea decompile_all
// name: FUN_10005f084
// address: 0x10005f084
// body: available
// range: 0x10005f084-0x10005f117 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005f084(undefined1 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  uVar1 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (uVar1 == 0) {
    uVar4 = 2;
  }
  else {
    uVar2 = uVar1;
    FUN_100075194();
    uVar3 = uVar2;
    FUN_100073dd4();
    _swift_bridgeObjectRelease(uVar2);
    _swift_release(uVar1);
    uVar4 = 1;
    if ((uVar3 & 1) == 0) {
      uVar4 = 2;
    }
  }
  *param_1 = uVar4;
  return;
}

