// rea decompile_all
// name: FUN_10034fea8
// address: 0x10034fea8
// body: available
// range: 0x10034fea8-0x10034ffbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10034fea8(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x21;
  undefined1 *puVar8;
  
  lVar6 = *(long *)(param_3 + 0x10);
  if (lVar6 != 0) {
    lVar7 = 0;
    puVar8 = (undefined1 *)(param_3 + 0x40);
    do {
      uVar2 = *(undefined8 *)(puVar8 + -0x18);
      uVar1 = *(undefined8 *)(puVar8 + -0x10);
      uVar3 = *(undefined8 *)(puVar8 + -8);
      uVar4 = *puVar8;
      _swift_bridgeObjectRetain(uVar2);
      FUN_100357d58(uVar1,uVar3,uVar4);
      uVar5 = 0;
      (*param_1)();
      _swift_bridgeObjectRelease(uVar2);
      FUN_100350bc0(uVar1,uVar3,uVar4);
      if (unaff_x21 != 0) {
        return;
      }
      if ((uVar5 & 1) != 0) {
        return;
      }
      puVar8 = puVar8 + 0x28;
      lVar7 = lVar7 + 1;
    } while (lVar6 != lVar7);
  }
  return;
}

