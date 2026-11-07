// rea decompile_all
// name: FUN_1000eaf88
// address: 0x1000eaf88
// body: available
// range: 0x1000eaf88-0x1000eb013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000eaf88(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  iVar1 = *(int *)(param_2 + 0x20);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 8);
  (*UNRECOVERED_JUMPTABLE)(param_1 + iVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001000eb010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + *(int *)(param_2 + 0x24),lVar2);
  return;
}

