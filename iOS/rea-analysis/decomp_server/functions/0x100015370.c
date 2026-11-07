// rea decompile_all
// name: FUN_100015370
// address: 0x100015370
// body: available
// range: 0x100015370-0x10001569f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100015370(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = 0x65736c6166;
  uVar7 = 0x65757274;
  __ss11_StringGutsV4growyySiF(0x93);
  __sSS6appendyySSF(0x6f4d79636167656c,0xeb000000003a6564);
  uVar2 = 0x65757274;
  uVar5 = 0xe400000000000000;
  if (*(char *)(unaff_x20 + 0x99) == '\x01') {
    bVar1 = *(long *)(*(long *)(unaff_x20 + 0x90) + 0x10) != 0;
    uVar2 = uVar7;
    if (bVar1) {
      uVar2 = uVar6;
    }
    uVar5 = 0xe400000000000000;
    if (bVar1) {
      uVar5 = 0xe500000000000000;
    }
  }
  __sSS6appendyySSF(uVar2,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  __sSS6appendyySSF(0xd00000000000001f,0x8000000100877de0);
  bVar1 = *(char *)(unaff_x20 + 0x99) == '\0';
  uVar2 = uVar7;
  if (bVar1) {
    uVar2 = uVar6;
  }
  uVar5 = 0xe400000000000000;
  if (bVar1) {
    uVar5 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  __sSS6appendyySSF(&DAT_d000000000000013,0x8000000100877e00);
  bVar1 = *(char *)(unaff_x20 + 0x98) == '\0';
  uVar2 = uVar7;
  if (bVar1) {
    uVar2 = uVar6;
  }
  uVar5 = 0xe400000000000000;
  if (bVar1) {
    uVar5 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  uVar5 = 0x5465766974636120;
  __sSS6appendyySSF(0x5465766974636120,0xee003a736b636172);
  FUN_10001920c();
  thunk_FUN_10004b080();
  uVar2 = uVar5;
  FUN_100045da4();
  _swift_bridgeObjectRelease(uVar5);
  puVar4 = PTR___ss6UInt32VN_100995dc0;
  uVar5 = uVar2;
  puVar3 = PTR___ss6UInt32VN_100995dc0;
  __sSa11descriptionSSvg(uVar2,PTR___ss6UInt32VN_100995dc0);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(uVar5,puVar3);
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0xd000000000000011,0x8000000100877e20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar2 = uVar5;
  _swift_bridgeObjectRetain(uVar5);
  FUN_100045da4();
  _swift_bridgeObjectRelease(uVar5);
  uVar5 = uVar2;
  __sSa11descriptionSSvg(uVar2,puVar4);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(uVar5,puVar4);
  _swift_bridgeObjectRelease(puVar4);
  uVar5 = 0xd00000000000001b;
  __sSS6appendyySSF(0xd00000000000001b,0x8000000100877e40);
  FUN_10004d12c();
  uVar2 = uVar5;
  FUN_100045cc4();
  _swift_bridgeObjectRelease(uVar5);
  uVar5 = uVar2;
  puVar4 = PTR___ss5Int32VN_100995c78;
  __sSa11descriptionSSvg(uVar2,PTR___ss5Int32VN_100995c78);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(uVar5,puVar4);
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x74536f6964756120,0xee003a6465747261);
  bVar1 = *(char *)(unaff_x20 + 0x9a) == '\0';
  if (bVar1) {
    uVar7 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar1) {
    uVar2 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar7,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  return ZEXT816(0xe000000000000000) << 0x40;
}

