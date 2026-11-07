// rea decompile_all
// name: FUN_10040c2b8
// address: 0x10040c2b8
// body: available
// range: 0x10040c2b8-0x10040c36f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040c2b8(long *param_1,long *param_2,code *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long unaff_x21;
  undefined1 auStack_58 [8];
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  (**(code **)(*param_2 + 0x128))(auStack_58,lVar1,lVar3);
  FUN_100006cc8(lVar1);
  (*param_3)(auStack_58);
  if (unaff_x21 != 0) {
    _swift_errorRelease();
  }
  puVar2 = auStack_58;
  (**(code **)(*param_2 + 0x120))();
  *param_1 = (long)puVar2;
  param_1[1] = lVar3;
  return;
}

