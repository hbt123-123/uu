// rea decompile_all
// name: FUN_100084a5c
// address: 0x100084a5c
// body: available
// range: 0x100084a5c-0x100084b23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100084a5c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = (undefined *)*param_2;
  puVar5 = PTR___swiftEmptyArrayStorage_1000f0740;
  if ((undefined *)0x1 < puVar4) {
    _swift_bridgeObjectRetain(puVar4);
    puVar5 = puVar4;
  }
  puVar4 = puVar5;
  FUN_100084b24();
  _swift_bridgeObjectRelease(puVar5);
  if (0xfd < (param_4 & 0xff)) {
    lVar3 = param_2[4];
    if (*(long *)(lVar3 + 0x10) == 0) {
      param_3 = 0xe500000000000000;
      puVar4 = (undefined *)0x65756c6176;
    }
    else {
      uVar1 = *(undefined8 *)(lVar3 + 0x20);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      _swift_bridgeObjectRetain(uVar2);
      puVar4 = (undefined *)0x2d;
      param_3 = 0xe100000000000000;
      FUN_100078034(0x2d,0xe100000000000000,uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
    }
  }
  *param_1 = puVar4;
  param_1[1] = param_3;
  return;
}

