// rea decompile_all
// name: FUN_10032baa4
// address: 0x10032baa4
// body: available
// range: 0x10032baa4-0x10032bb4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10032baa4(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  lVar3 = 0;
  __sScS12ContinuationV15BufferingPolicyOMa(0,uVar4);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  plVar1 = (long *)(param_1 + *(int *)(param_2 + 0x1c));
  if (*plVar1 != 0) {
    _swift_release(plVar1[1]);
  }
  iVar2 = *(int *)(param_2 + 0x20);
  lVar3 = 0;
  __sScSMa(0,uVar4);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1 + iVar2,lVar3);
  iVar2 = *(int *)(param_2 + 0x24);
  lVar3 = 0;
  __sScS12ContinuationVMa(0,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010032bb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1 + iVar2,lVar3);
  return;
}

