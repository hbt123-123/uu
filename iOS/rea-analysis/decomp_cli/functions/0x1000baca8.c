// rea decompile_all
// name: FUN_1000baca8
// address: 0x1000baca8
// body: available
// range: 0x1000baca8-0x1000bad9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000baca8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar7 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar7);
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)(param_2 + 0x30);
    do {
      cVar6 = *(char *)(puVar8 + -2);
      uVar4 = puVar8[-1];
      uVar5 = *puVar8;
      uVar1 = 0x74726f6873;
      if (cVar6 != '\x01') {
        uVar1 = 0xd000000000000012;
      }
      uVar2 = 0xe500000000000000;
      if (cVar6 != '\x01') {
        uVar2 = 0x80000001000c9c90;
      }
      uVar3 = 0x676e6f6c;
      if (cVar6 != '\0') {
        uVar3 = uVar1;
      }
      uVar1 = 0xe400000000000000;
      if (cVar6 != '\0') {
        uVar1 = uVar2;
      }
      _swift_bridgeObjectRetain(uVar5);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,uVar1);
      _swift_bridgeObjectRelease(uVar1);
      _swift_bridgeObjectRetain(uVar5);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar5);
      _swift_bridgeObjectRelease_n(uVar5,2);
      puVar8 = puVar8 + 3;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

