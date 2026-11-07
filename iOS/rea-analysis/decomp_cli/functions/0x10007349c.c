// rea decompile_all
// name: FUN_10007349c
// address: 0x10007349c
// body: available
// range: 0x10007349c-0x1000734f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007349c(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  param_3 = param_3 + param_4;
  lVar2 = *(long *)(param_3 + -8);
  pcVar3 = *(code **)(lVar2 + 0x10);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + -0x10),*(undefined8 *)(param_3 + -0x28),
             PTR___sSYTL_1000f0360,PTR___s8RawValueSYTl_1000f02c0);
  (*pcVar3)();
  *param_1 = uVar1;
  param_1[1] = lVar2;
  return;
}

