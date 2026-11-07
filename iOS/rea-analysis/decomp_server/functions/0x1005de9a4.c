// rea decompile_all
// name: FUN_1005de9a4
// address: 0x1005de9a4
// body: available
// range: 0x1005de9a4-0x1005dea67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1005de9a4(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    *(undefined8 *)(param_1 + 0x38) = uVar3;
  }
  else {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(long *)(param_1 + 0x10) = lVar1;
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar4);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}

