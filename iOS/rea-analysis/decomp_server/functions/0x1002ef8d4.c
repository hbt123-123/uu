// rea decompile_all
// name: FUN_1002ef8d4
// address: 0x1002ef8d4
// body: available
// range: 0x1002ef8d4-0x1002ef9ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002ef998 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ef8d4(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  FUN_10003f094();
  uVar2 = param_1 + 0x2fU & 0xfffffffffffffff8;
  _swift_bridgeObjectRelease(*(undefined8 *)(uVar2 + 8));
  lVar1 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(lVar1 + -8);
  uVar3 = uVar2 + *(byte *)(lVar4 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff);
  uVar2 = uVar3;
  (**(code **)(lVar4 + 0x30))(uVar3,1,lVar1);
  if ((int)uVar2 == 0) {
    (**(code **)(lVar4 + 8))(uVar3,lVar1);
  }
  lVar1 = uVar3 + *(long *)(lVar4 + 0x40);
  if (*(int *)(lVar4 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  uVar2 = lVar1 + 7U & 0xfffffffffffffff8;
  FUN_10003f094(uVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(uVar2 + 0x28));
  if (0xfffffffe < *(ulong *)(uVar2 + 0x30)) {
    _swift_release(*(undefined8 *)(uVar2 + 0x38));
    return;
  }
  return;
}

