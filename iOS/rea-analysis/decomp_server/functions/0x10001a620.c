// rea decompile_all
// name: FUN_10001a620
// address: 0x10001a620
// body: available
// range: 0x10001a620-0x10001a81b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001a620(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  __ss11_StringGutsV4growyySiF(0x6c);
  __sSS6appendyySSF(&DAT_d000000000000028,0x8000000100879d70);
  puVar3 = PTR___ss5Int32VN_100995c78;
  __sSa11descriptionSSvg(param_2,PTR___ss5Int32VN_100995c78);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0xd000000000000011,0x8000000100877e20);
  uVar4 = *(undefined8 *)(param_3 + 0x90);
  uVar2 = uVar4;
  _swift_bridgeObjectRetain(uVar4);
  FUN_100045da4();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = uVar2;
  puVar3 = PTR___ss6UInt32VN_100995dc0;
  __sSa11descriptionSSvg(uVar2,PTR___ss6UInt32VN_100995dc0);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(uVar4,puVar3);
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x4d79636167656c20,0xec0000003a65646f);
  uVar2 = 0x65757274;
  uVar4 = 0xe400000000000000;
  if (*(char *)(param_3 + 0x99) == '\x01') {
    bVar1 = *(long *)(*(long *)(param_3 + 0x90) + 0x10) != 0;
    uVar2 = 0x65757274;
    if (bVar1) {
      uVar2 = 0x65736c6166;
    }
    uVar4 = 0xe400000000000000;
    if (bVar1) {
      uVar4 = 0xe500000000000000;
    }
  }
  __sSS6appendyySSF(uVar2,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  __sSS6appendyySSF(0xd00000000000001f,0x8000000100877de0);
  bVar1 = *(char *)(param_3 + 0x99) == '\0';
  uVar2 = 0x65757274;
  if (bVar1) {
    uVar2 = 0x65736c6166;
  }
  uVar4 = 0xe400000000000000;
  if (bVar1) {
    uVar4 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

