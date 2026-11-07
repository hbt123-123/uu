// rea decompile_all
// name: FUN_1002c22ec
// address: 0x1002c22ec
// body: available
// range: 0x1002c22ec-0x1002c237b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c22ec(code *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  lVar1 = 0;
  __s10Foundation11JSONEncoderC16OutputFormattingVMa();
  puVar3 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  (*param_1)(puVar3);
  __s10Foundation11JSONEncoderC16outputFormattingAC06OutputD0VvsTj();
  FUN_1002c22b4();
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  return;
}

