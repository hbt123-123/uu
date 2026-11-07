// rea decompile_all
// name: FUN_1000becc4
// address: 0x1000becc4
// body: available
// range: 0x1000becc4-0x1000beec7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1000becc4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  param_1[0x28] = param_2[0x28];
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  cVar3 = param_2[0x80];
  if (param_1[0x80] == -1) {
    if (cVar3 == -1) {
      uVar6 = *(undefined8 *)(param_2 + 0x78);
      uVar5 = *(undefined8 *)(param_2 + 0x70);
      param_1[0x80] = param_2[0x80];
      *(undefined8 *)(param_1 + 0x78) = uVar6;
      *(undefined8 *)(param_1 + 0x70) = uVar5;
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0x70);
      uVar6 = *(undefined8 *)(param_2 + 0x78);
      FUN_1000bd2e4(uVar5,uVar6,cVar3);
      *(undefined8 *)(param_1 + 0x70) = uVar5;
      *(undefined8 *)(param_1 + 0x78) = uVar6;
      param_1[0x80] = cVar3;
    }
  }
  else if (cVar3 == -1) {
    FUN_1000beec8(param_1 + 0x70);
    uVar4 = param_2[0x80];
    uVar5 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    param_1[0x80] = uVar4;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x70);
    uVar1 = *(undefined8 *)(param_2 + 0x78);
    FUN_1000bd2e4(uVar5,uVar1,cVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x70);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    *(undefined8 *)(param_1 + 0x78) = uVar1;
    uVar4 = param_1[0x80];
    param_1[0x80] = cVar3;
    FUN_1000bd314(uVar6,uVar2,uVar4);
  }
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  return param_1;
}

