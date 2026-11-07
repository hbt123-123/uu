// rea decompile_all
// name: FUN_10063e548
// address: 0x10063e548
// body: available
// range: 0x10063e548-0x10063e62b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10063e548(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = param_1;
  FUN_10063d9ac();
  pcVar3 = *(code **)(unaff_x20 + 0x30);
  if (pcVar3 != (code *)0x0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
    _swift_retain(uVar2);
    (*pcVar3)(uVar1);
    FUN_10007ed2c(pcVar3,uVar2);
  }
  if ((*(byte *)(unaff_x20 + 0x58) & 1) == 0) {
    _swift_unknownObjectRetain(param_1);
    FUN_100634540(uVar1);
    _swift_bridgeObjectRelease(uVar1);
  }
  else {
    _swift_unknownObjectRetain(param_1);
    _swift_bridgeObjectRelease(uVar1);
  }
  return param_1;
}

