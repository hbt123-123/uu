// rea decompile_all
// name: FUN_100316170
// address: 0x100316170
// body: available
// range: 0x100316170-0x10031623f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10031623c to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100316170(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),0x1008f97a8,
             &TargetProtocolRequirement_1008f97b8);
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = param_1;
  (**(code **)(lVar4 + 0x30))(param_1,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 8))(param_1,lVar1);
  }
  param_1 = param_1 + *(long *)(lVar4 + 0x40);
  if (*(int *)(lVar4 + 0x54) == 0) {
    param_1 = param_1 + 1;
  }
  uVar3 = param_1 + 7U & 0xfffffffffffffff8;
  if (0xfffffffe < *(ulong *)(uVar3 + 8)) {
    _swift_errorRelease();
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(uVar3 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(uVar3 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(uVar3 + 0x38));
  return;
}

