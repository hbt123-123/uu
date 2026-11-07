// rea decompile_all
// name: FUN_1002787b8
// address: 0x1002787b8
// body: available
// range: 0x1002787b8-0x1002788cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002787b8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  lVar1 = 0;
  FUN_100277ad0();
  puVar4 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_100278198();
  lVar2 = (long)puVar4 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100082394();
  puVar3 = puVar4;
  _swift_getEnumCaseMultiPayload(puVar4,lVar1);
  if ((int)puVar3 == 4) {
    FUN_1000823d8(puVar4,lVar2,FUN_100278198);
    FUN_1002788cc(param_1);
    FUN_1000d27dc(lVar2,FUN_100278198);
  }
  else {
    FUN_1000d27dc(puVar4,FUN_100277ad0);
    lVar1 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,1,1,lVar1);
  }
  return;
}

