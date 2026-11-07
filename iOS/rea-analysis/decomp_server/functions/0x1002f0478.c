// rea decompile_all
// name: FUN_1002f0478
// address: 0x1002f0478
// body: available
// range: 0x1002f0478-0x1002f0533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1002f0478(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar2;
  (*(code *)**(undefined8 **)(lVar2 + -8))();
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  lVar2 = *(long *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(long *)(param_1 + 0x58) = lVar2;
  pcVar3 = (code *)**(undefined8 **)(lVar2 + -8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  (*pcVar3)(param_1 + 0x40,param_2 + 0x40,lVar2);
  lVar2 = *(long *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  _swift_bridgeObjectRetain();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    *(long *)(param_1 + 0x70) = lVar2;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x78);
    *(long *)(param_1 + 0x70) = lVar2;
    *(undefined8 *)(param_1 + 0x78) = uVar1;
    _swift_retain();
  }
  return param_1;
}

