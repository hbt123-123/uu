// rea decompile_all
// name: FUN_1000beba4
// address: 0x1000beba4
// body: available
// range: 0x1000beba4-0x1000becc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 * FUN_1000beba4(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  uVar7 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = uVar7;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined2 *)((long)param_1 + 0x19) = *(undefined2 *)((long)param_2 + 0x19);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  uVar1 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x24) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2c) = uVar3;
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  *(undefined8 *)(param_1 + 0x34) = uVar4;
  cVar5 = *(char *)(param_2 + 0x40);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar4);
  if (cVar5 == -1) {
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x3c);
    FUN_1000bd2e4(uVar7,uVar1,cVar5);
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    *(undefined8 *)(param_1 + 0x3c) = uVar1;
    *(char *)(param_1 + 0x40) = cVar5;
  }
  uVar7 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar7);
  return param_1;
}

