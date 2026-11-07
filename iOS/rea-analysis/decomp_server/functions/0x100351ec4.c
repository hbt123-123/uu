// rea decompile_all
// name: FUN_100351ec4
// address: 0x100351ec4
// body: available
// range: 0x100351ec4-0x100351fe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100351ec4(undefined8 *param_1,code *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long unaff_x21;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_4 + 0x10);
  if (lVar8 == 0) {
    uVar6 = 0;
    uVar7 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    puVar2 = (undefined1 *)(param_4 + 0x40);
    do {
      uVar6 = *(undefined8 *)(puVar2 + -0x20);
      uVar7 = *(undefined8 *)(puVar2 + -0x18);
      uVar3 = *(undefined8 *)(puVar2 + -0x10);
      uVar4 = *(undefined8 *)(puVar2 + -8);
      uVar5 = *puVar2;
      _swift_bridgeObjectRetain(uVar7);
      FUN_100357d58(uVar3,uVar4,uVar5);
      uVar1 = 0;
      (*param_2)();
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(uVar7);
        FUN_100350bc0(uVar3,uVar4,uVar5);
        return;
      }
      if ((uVar1 & 1) != 0) goto LAB_100351f9c;
      puVar2 = puVar2 + 0x28;
      _swift_bridgeObjectRelease(uVar7);
      FUN_100350bc0(uVar3,uVar4,uVar5);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    uVar6 = 0;
    uVar7 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
LAB_100351f9c:
  *param_1 = uVar6;
  param_1[1] = uVar7;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return;
}

