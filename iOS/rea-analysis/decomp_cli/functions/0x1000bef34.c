// rea decompile_all
// name: FUN_1000bef34
// address: 0x1000bef34
// body: available
// range: 0x1000bef34-0x1000bf05f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1000bef34(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  _swift_bridgeObjectRelease(uVar3);
  param_1[0x28] = param_2[0x28];
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  _swift_bridgeObjectRelease(uVar3);
  if (param_1[0x80] != -1) {
    cVar1 = param_2[0x80];
    if (cVar1 != -1) {
      uVar3 = *(undefined8 *)(param_1 + 0x70);
      uVar2 = *(undefined8 *)(param_1 + 0x78);
      uVar4 = *(undefined8 *)(param_2 + 0x70);
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
      *(undefined8 *)(param_1 + 0x70) = uVar4;
      param_1[0x80] = cVar1;
      FUN_1000bd314(uVar3,uVar2);
      goto LAB_1000bf030;
    }
    FUN_1000beec8(param_1 + 0x70);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  param_1[0x80] = param_2[0x80];
LAB_1000bf030:
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}

