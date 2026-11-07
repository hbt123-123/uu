// rea decompile_all
// name: FUN_1007b721c
// address: 0x1007b721c
// body: available
// range: 0x1007b721c-0x1007b7467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 *
FUN_1007b721c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_1a0 [8];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  
  lVar2 = 0;
  local_198 = param_5;
  local_190 = param_2;
  local_188 = param_7;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar2 + -8);
  puVar6 = auStack_1a0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(puVar6,param_1,lVar2);
  puVar3 = &DAT_100abc770;
  FUN_1007b4550();
  _swift_initStackObject();
  uVar7 = 5;
  *(undefined8 *)(puVar3 + 0x18) = 10;
  *(undefined8 *)(puVar3 + 0x10) = 5;
  *(undefined8 *)(puVar3 + 0x20) = 0x706f;
  puVar4 = PTR___sSSN_1009957f8;
  *(undefined8 *)(puVar3 + 0x28) = 0xe200000000000000;
  *(undefined8 *)(puVar3 + 0x30) = param_3;
  *(undefined8 *)(puVar3 + 0x38) = param_4;
  *(undefined **)(puVar3 + 0x48) = puVar4;
  *(undefined8 *)(puVar3 + 0x50) = 0x7470697263736564;
  *(undefined8 *)(puVar3 + 0x58) = 0xeb000000006e6f69;
  *(undefined8 *)(puVar3 + 0x60) = local_198;
  *(undefined8 *)(puVar3 + 0x68) = param_6;
  *(undefined **)(puVar3 + 0x78) = puVar4;
  *(undefined8 *)(puVar3 + 0x80) = 0x6d69547472617473;
  *(undefined8 *)(puVar3 + 0x88) = 0xee00706d61747365;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_6);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  uVar1 = local_190;
  puVar4 = PTR___sSdN_1009958f0;
  *(undefined8 *)(puVar3 + 0x90) = uVar7;
  *(undefined **)(puVar3 + 0xa8) = puVar4;
  *(undefined8 *)(puVar3 + 0xb0) = 0x73656d6954646e65;
  *(undefined8 *)(puVar3 + 0xb8) = 0xec000000706d6174;
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  *(undefined8 *)(puVar3 + 0xc0) = uVar7;
  *(undefined **)(puVar3 + 0xd8) = puVar4;
  *(undefined8 *)(puVar3 + 0xe0) = 0x61746164;
  *(undefined8 *)(puVar3 + 0xe8) = 0xe400000000000000;
  puVar4 = &DAT_100abc780;
  FUN_1007b4550();
  *(undefined **)(puVar3 + 0x108) = puVar4;
  *(undefined8 *)(puVar3 + 0xf0) = local_188;
  _swift_bridgeObjectRetain();
  puVar5 = puVar3;
  FUN_1007c7d18(puVar3);
  _swift_setDeallocating(puVar3);
  uVar7 = *(undefined8 *)(puVar3 + 0x10);
  puVar4 = &DAT_100abc778;
  FUN_1007b4550(&DAT_100abc778);
  _swift_arrayDestroy(puVar3 + 0x20,uVar7,puVar4);
  FUN_1007cf0e4(puVar6,0x616d726f66726570,0xef6e61705365636e,puVar5);
  _swift_bridgeObjectRelease(puVar5);
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(uVar1,lVar2);
  (*pcVar9)(param_1,lVar2);
  return puVar6;
}

