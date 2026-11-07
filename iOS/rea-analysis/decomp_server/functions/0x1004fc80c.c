// rea decompile_all
// name: FUN_1004fc80c
// address: 0x1004fc80c
// body: available
// range: 0x1004fc80c-0x1004fc8bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004fc8ac to 0x10003f094 FUN_10003f094 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fc80c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_100996088,PTR___s13AsyncIteratorSciTl_100995fe8);
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar3 + 8))(param_1,lVar1);
  }
  param_1 = param_1 + *(long *)(lVar3 + 0x40);
  if (*(int *)(lVar3 + 0x54) == 0) {
    param_1 = param_1 + 1;
  }
  if (0xfffffffe < *(ulong *)((param_1 + 7U & 0xfffffffffffffff8) + 0x18)) {
    FUN_10003f094();
    return;
  }
  return;
}

